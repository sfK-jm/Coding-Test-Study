import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int n = Integer.parseInt(st.nextToken()); // 지방의 수
        int[] arr = new int[n];

        st = new StringTokenizer(br.readLine(), " ");
        
        int left = 0;
        int right = -999;

        for (int i = 0; i < n; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
            right = Math.max(right, arr[i]); // 가장 큰 값 찾기
        }

        int m = Integer.parseInt(br.readLine());
        
        // 이진 탐색
        while (left <= right) {
            int mid = (left + right) / 2;

            // 예산 구하기
            long budget = 0;
            for (int i = 0; i < n; i++) {
                budget += Math.min(arr[i], mid);
            }

            if (budget <= m) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        System.out.println(right);
    }

}