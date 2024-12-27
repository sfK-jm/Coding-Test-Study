import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class Main {

    public static int[] arr = new int[9];

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        for (int i = 0; i < 9; i++){
            arr[i] = Integer.parseInt(br.readLine());
        }

        makePermutation(9, 7, 0);
    }

    public static void makePermutation(int n, int r, int depth){
        if (r == depth) {
            solve();
            return;
        }
        for (int i = depth; i < n; i++) {
            swap(arr, i, arr, depth);
            makePermutation(n, r, depth + 1);
            swap(arr, i, arr, depth);
        }
    }

    public static void solve() {
        int sum = 0;
        for (int i = 0; i < 7; i++) {
            sum += arr[i];
        }

        if (sum == 100) {
            Arrays.sort(arr, 0, 7);
            for (int i = 0; i < 7; i++) System.out.println(arr[i]);
            System.exit(0);
        }
    }

    public static void swap(int[] a, int aIndex, int[] b, int bIndex) {
        int temp = a[aIndex];
        a[aIndex] = b[bIndex];
        b[bIndex] = temp;
    }

}