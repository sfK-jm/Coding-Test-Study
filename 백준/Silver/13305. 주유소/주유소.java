import java.util.Scanner;

public class Main {
    static long[] road = new long[100003];
    static long[] oilPrice = new long[100003];
    static int n;
    static long  minCost, totalCost;


    public static long solve() {
        minCost = oilPrice[0];
        totalCost += oilPrice[0] * road[0];

        for (int i = 1; i< oilPrice.length - 1; i++){
            if (oilPrice[i] > minCost)
                totalCost += minCost * road[i];
            else {
                minCost = oilPrice[i];
                totalCost += minCost * road[i];
            }
        }
        return totalCost;
    }


    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        n = sc.nextInt();

        // 도로 길이
        for (int i = 0; i < n-1; i++) {
            long temp = sc.nextLong();
            road[i] = temp;
        }

        // 도시별 주유비
        for (int i = 0; i < n; i++) {
            long temp = sc.nextLong();
            oilPrice[i] = temp;
        }

        System.out.println(solve());
    }
}