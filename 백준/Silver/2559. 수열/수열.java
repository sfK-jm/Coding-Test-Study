import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int n = Integer.parseInt(st.nextToken());
        int k = Integer.parseInt(st.nextToken());
        int temp;
        int[] psum = new int[n + 1];
        int ret = -10000004;


        st = new StringTokenizer(br.readLine());
        for (int i = 1; i <= n; i++) {
            temp = Integer.parseInt(st.nextToken());
            psum[i] = psum[i - 1] + temp;
        }

        for (int i = k; i <= n; i++) {
            ret = Math.max(ret, psum[i] - psum[i - k]);
        }

        System.out.println(ret);
    }

}