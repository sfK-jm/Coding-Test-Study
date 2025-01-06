import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.Map;

public class Main {
    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int inputNum = Integer.parseInt(br.readLine().replace(" ", ""));

        int num = inputNum;
        int minNum = 999999999;

        for (int i = 0; i < 4; i++) {
            num = num / 10 + num % 10 * 1000;
            minNum = Math.min(minNum, num);
        }

        Map<Integer, Boolean> map = new HashMap<>();
        int cnt = 0;

        for (int i = 1111; i <= minNum; i++) {
            if (String.valueOf(i).contains("0") || map.get(i) != null) {
                continue;
            }

            int min = i;
            int temp = i;
            for (int j = 0; j < 4; j++) {
                if (map.get(temp) == null) {
                    map.put(temp, true);
                }

                temp = temp / 10 + temp % 10 * 1000;
                min = Math.min(min, temp);
            }

            cnt++;
        }
        System.out.println(cnt);
    }
}