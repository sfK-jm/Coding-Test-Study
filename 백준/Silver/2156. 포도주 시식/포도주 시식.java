import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        long[] a = new long[10003];
        long[] dp = new long[10003];

        int n = sc.nextInt();

        for (int i = 1; i <= n; i++){
            a[i] = sc.nextInt();
        }

        dp[1] = a[1];
        dp[2] = a[1] + a[2];

        for (int i = 3; i <=n; i++){
            dp[i] = Math.max(Math.max(dp[i - 3] + a[i - 1] + a[i], dp[i - 2] + a[i]), dp[i - 1]);
        }
        
        System.out.println(dp[n]);
    }
}