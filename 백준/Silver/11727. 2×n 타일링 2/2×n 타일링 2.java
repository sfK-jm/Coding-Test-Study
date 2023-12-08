import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        long[] dp = new long[1003];
        dp[1] = 1;
        dp[2] = 3;
        dp[3] = 5;

        int n = sc.nextInt();

        for (int i = 4; i <= n; i++)  
            dp[i] = (dp[i - 2] * 2 + dp[i - 1]) % 10007;

        System.out.println(dp[n]);
    }
}