import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Main {
    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());

        String[] input = br.readLine().split("\\*");

        Pattern pattern = Pattern.compile(input[0] + ".*" + input[1]);

        for (int i = 0; i < n; i++) {
            String s = br.readLine();
            Matcher matcher = pattern.matcher(s);

            if (matcher.matches()) {
                System.out.println("DA");
            } else {
                System.out.println("NE");
            }
        }
    }
}