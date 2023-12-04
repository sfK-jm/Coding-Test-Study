import java.util.Scanner;

public class Main {
    static int[] map = new int[303];
    static int[] dp = new int[303];
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        for (int i = 1; i <= n; i++) map[i] = scanner.nextInt();

        dp[1] = map[1];
        dp[2] = map[1] + map[2];
        dp[3] = Math.max(map[1], map[2]) + map[3];

        for (int i = 4; i <= n; i++){
            dp[i] = Math.max(dp[i - 3] + map[i - 1], dp[i - 2]) + map[i];
        }
        System.out.println(dp[n]);
    }
}