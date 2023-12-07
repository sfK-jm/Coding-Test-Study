import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        long[] dp = new long[103];
        dp[1] = 1;
        dp[2] = 1;
        dp[3] = 1;

        int t, n;

        t = sc.nextInt();

        for (int i = 0; i < t; i++){
            n = sc.nextInt();
            
            for (int j = 4; j <= n; j++){
                dp[j] = dp[j-3] + dp[j-2];
            }

            System.out.println(dp[n]);
        }
        
    }
}