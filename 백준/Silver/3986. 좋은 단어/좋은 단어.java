import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());

        int ret = 0;
        for (int i = 0; i < n; i++) {
            String s = br.readLine();

            Stack<Character> stk = new Stack<>();
            for (int j = 0; j < s.length(); j++) {
                char a = s.charAt(j);

                if (!stk.isEmpty() && stk.peek() == a) stk.pop();
                else stk.push(a);
            }
            if (stk.isEmpty()) ret++;
        }
        System.out.println(ret);
    }
}