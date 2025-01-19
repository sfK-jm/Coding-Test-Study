import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String input;
        int n;
        while ((input = br.readLine()) != null) {
            n = Integer.parseInt(input);
            long cnt = 1, ret = 1;
            while (true) {
                if (cnt % n == 0) {
                    System.out.println(ret);
                    break;
                } else {
                    cnt = (cnt * 10) + 1;
                    cnt %= n;
                    ret++;
                }
            }
        }
    }
}