import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {


    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int[] time = new int[101];
        int res = 0;

        int a = Integer.parseInt(st.nextToken());
        int b = Integer.parseInt(st.nextToken());
        int c = Integer.parseInt(st.nextToken());

        for (int i = 0; i < 3; i++) {
            StringTokenizer s = new StringTokenizer(br.readLine());
            int start = Integer.parseInt(s.nextToken());
            int end = Integer.parseInt(s.nextToken());

            for (int j = start; j < end; j++) {
                time[j]++;
            }
        }

        for (int t : time) {
            if (t == 1) {
                res += a;
            } else if (t == 2) {
                res += b * 2;
            } else if (t == 3) {
                res += c * 3;
            }
        }

        System.out.println(res);
    }

}