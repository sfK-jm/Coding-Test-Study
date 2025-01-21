import java.awt.*;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;
import java.util.Queue;
import java.util.StringTokenizer;

public class Main {

    static int max_n = 104;
    static int[] dx = {-1, 0, 1, 0};
    static int[] dy = {0, 1, 0, -1};
    static int n, m;
    static int[][] a = new int[max_n][max_n];
    static int[][] visited = new int[max_n][max_n];

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        n = Integer.parseInt(st.nextToken());
        m = Integer.parseInt(st.nextToken());

        for (int i = 0; i < n; i++) {
            String s = br.readLine();
            for (int j = 0; j < m; j++) {
                a[i][j] = s.charAt(j) - '0';
            }
        }

        Queue<Point> q = new LinkedList<>();
        visited[0][0] = 1;
        q.add(new Point(0, 0));

        while (!q.isEmpty()) {
            Point p = q.poll();

            for (int i = 0; i < 4; i++) {
                int ny = p.y + dy[i];
                int nx = p.x + dx[i];
                if (nx < 0 || nx >= m || ny < 0 || ny >= n || a[ny][nx] == 0) continue;
                if (visited[ny][nx] > 0) continue;
                visited[ny][nx] = visited[p.y][p.x] + 1;
                q.add(new Point(nx, ny));
            }
        }
        System.out.println(visited[n-1][m-1]);
    }
}