import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

    static long a, b, c;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        StringTokenizer st = new StringTokenizer(br.readLine());
        a = Integer.parseInt(st.nextToken());
        b = Integer.parseInt(st.nextToken());
        c = Integer.parseInt(st.nextToken());
        System.out.println(go(a,b));
    }

    static long go(long a, long b) {
        if (b == 1) return a % c;

        long ret = go(a, b / 2);
        ret = (ret * ret) % c;
        if ((b % 2) > 0) ret = (ret * a) % c;
        return ret;
    }
}