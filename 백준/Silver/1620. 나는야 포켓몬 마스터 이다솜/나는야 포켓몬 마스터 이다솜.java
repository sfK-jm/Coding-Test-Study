import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.StringTokenizer;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        HashMap<Integer, String> map1 = new HashMap<>();
        HashMap<String, Integer> map2 = new HashMap<>();

        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());

        for (int i = 0; i < n; i++) {
            String temp = br.readLine();
            map1.put(i + 1, temp);
            map2.put(temp, i + 1);
        }

        for (int i = 0; i < m; i++) {
            String s = br.readLine();
            if (Character.isDigit(s.charAt(0))) {
                System.out.println(map1.get(Integer.parseInt(s)));
            } else {
                System.out.println(map2.get(s));
            }
        }
    }

}