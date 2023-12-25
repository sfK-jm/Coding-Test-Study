public class Solution {
    public int[] solution(int n) {
        int[][] triangle = new int[n][n];

        // v: 번수에 채워 넣을 숫자
        int v = 1;
        int x = 0;
        int y = 0;

        // 방향에 따라 이동할 수 없을 때까지 반복
        while (true) {

            // 아래로 이동 -> y값이 증가
            while (true) {
                triangle[y][x] = v++;
                if (y+1 == n || triangle[y+1][x] != 0) break;
                y++;
            }

            if (x + 1 == n || triangle[y][x+1] != 0) break;
            x++;
            
            // 오른쪽으로 이동 -> x값이 증가
            while (true) {
                triangle[y][x] = v++;
                if (x + 1 == n || triangle[y][x+1] != 0) break;
                x++;
            }

            if (triangle[y-1][x-1] != 0) break;
            x -= 1;
            y -= 1;

            // 왼쪽 위로 이동 -> x,y 값 감소
            while (true) {
                triangle[y][x] = v++;
                if (triangle[y-1][x-1] != 0) break;
                x -= 1;
                y -= 1;
            }

            if (y + 1 == n || triangle[y+1][x] != 0) break;
            y += 1;
        }

        int[] result = new int[v-1];
        int index = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                result[index++] = triangle[i][j];
            }
        }
        return result;
    }
}