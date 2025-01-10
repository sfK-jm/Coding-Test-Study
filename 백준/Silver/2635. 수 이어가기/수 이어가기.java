import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        sc.close();

        List<Integer> arr = new ArrayList<>();
        List<Integer> answer = new ArrayList<>();


        int k = 0;
        int MAX_cnt = 0;
        for (int i = n / 2; i <= n; i++) {
            int index = 0;
            arr.add(n);
            arr.add(i);

            while (true) {
                k = arr.get(index) - arr.get(index + 1);
                if (k < 0)
                    break;
                else {
                    arr.add(k);
                    index++;
                }
            }
            if(arr.size() > MAX_cnt) {
                answer.clear();
                MAX_cnt = arr.size();
                answer.addAll(arr);
            }

            arr.clear();

        }

        System.out.println(MAX_cnt);
        for (Integer i : answer) {
            System.out.print(i + " ");
        }

    }

}