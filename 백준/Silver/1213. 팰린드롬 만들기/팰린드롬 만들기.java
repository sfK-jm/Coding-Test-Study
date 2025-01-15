import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws Exception {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();

        String s = br.readLine();
        int[] a = new int[26];

        for (int i = 0; i < s.length(); i++) {
            int idx = s.charAt(i) - 'A';
            a[idx]++;
        }

        int oddCount = 0;
        int mid = 0;

        for (int i = 0; i < a.length; i++) {
            if (a[i] == 0) {
                continue;
            }

            if (a[i] % 2 == 1) {
                oddCount++;
                mid = i;
            }

            for (int j = 0; j < a[i] / 2; j++) {
                sb.append((char) (i + 'A'));
            }

            if (oddCount >= 2) {
                System.out.println("I'm Sorry Hansoo");
                return;
            }
        }

        String result = sb.toString();
        if (oddCount == 1) {
            result += (char) (mid + 'A');
        }
        result += sb.reverse().toString();
        System.out.println(result);
    }
}