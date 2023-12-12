import java.util.Scanner;

public class Main {
    static int n, k;
    static int[] w = new int[103];
    static int[] v = new int[103];
    static int[][] dp = new int[103][100003];


    public static void solve(){
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= k; j++){
                if (j - w[i] >= 0){
                    dp[i][j] = Math.max(dp[i-1][j], dp[i-1][j-w[i]] + v[i]);
                } else {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        n = sc.nextInt();
        k = sc.nextInt();

        for (int i = 1; i <= n; i++){
            w[i] = sc.nextInt();
            v[i] = sc.nextInt();
        }
        solve();   

        System.out.println(dp[n][k]);
        
    }
}