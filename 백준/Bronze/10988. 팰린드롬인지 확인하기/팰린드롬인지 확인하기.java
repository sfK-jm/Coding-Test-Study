import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {


    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String input = br.readLine();
        int length = input.length();

        for (int i = 0; i < length; i++) {
            if (input.charAt(i) != input.charAt(length - 1 - i)) {
                System.out.println("0");
                return;
            }
        }
        System.out.println("1");
    }

}