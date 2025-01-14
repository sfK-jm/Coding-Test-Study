import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.Map;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        for (int temp = 0; temp < t; temp++) {
            Map<String, Integer> map = new HashMap<>();
            int n = Integer.parseInt(br.readLine());

            for (int i = 0; i < n; i++) {
                StringTokenizer st = new StringTokenizer(br.readLine());
                st.nextToken();
                String b = st.nextToken();
                map.put(b, map.getOrDefault(b, 0) + 1);
            }
            long ret = 1;
            for (Map.Entry<String, Integer> m : map.entrySet()) {
                ret *= m.getValue() + 1;
            }
            System.out.println(ret - 1);
        }
    }
}