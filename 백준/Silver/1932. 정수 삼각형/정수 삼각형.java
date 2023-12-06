import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int[][] arr = new int[503][503];
        int[][] dp = new int[503][503];
        int n, ret = 0;

        n = sc.nextInt();

        for (int i = 1; i <= n; i++){
            for (int j = 1; j <=i; j++){
                arr[i][j] = sc.nextInt();
            }
        }

        dp[1][1] = arr[1][1];

        for (int i = 2; i <= n; i++){
            for (int j = 1; j <= i; j++){
                dp[i][j] = Math.max(dp[i-1][j-1], dp[i-1][j]) + arr[i][j];
            }
        }

        for (int i = 1; i <= n; i++){
            if (ret < dp[n][i]) ret = dp[n][i];
        }
        System.out.println(ret);
    }
}