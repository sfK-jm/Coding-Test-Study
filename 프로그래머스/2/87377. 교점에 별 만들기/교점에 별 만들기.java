import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class Solution {

    // 좌표를 나타내는 클래스
    private static class Point{
        // final로 불변성을 갖음
        public final long x, y;

        // 초기화
        private Point(long x, long y) {
            this.x = x;
            this.y = y; 
        }
    }

    // 교점 좌표 구하기 
    private Point intersection (long a1, long b1, long c1, long a2, long b2, long c2) {
        double x = (double) (b1 * c2 - b2 * c1) / (a1 * b2 - a2 * b1);
        double y = (double) (a2 * c1 - a1 * c2) / (a1 * b2 - a2 * b1);

        // 실수일때 null반환
        if (x % 1 != 0 || y % 1 != 0) return null;

        return new Point((long) x, (long) y);
    }

    private Point getMinimumPoint(List<Point> points) {
        long x = Long.MAX_VALUE;
        long y = Long.MAX_VALUE;

        for (Point p : points) {
            if (p.x < x) x = p.x;
            if (p.y < y) y = p.y;
        }

        return new Point(x, y);
    }

    private Point getMaximumPoint(List<Point> points) {
        long x = Long.MIN_VALUE;
        long y = Long.MIN_VALUE;

        for (Point p : points) {
            if (p.x > x) x = p.x;
            if (p.y > y) y = p.y;
        }
        return new Point(x, y);
    }

    public String[] solution(int[][] line) {
        List<Point> points = new ArrayList<>();
        
        // 모든 직선 쌍에 대해 반복 
        for(int i = 0; i < line.length; i++) {
            for (int j = i + 1; j < line.length; j++) {
                Point intersection = intersection(line[i][0], line[i][1], line[i][2], line[j][0], line[j][1], line[j][2]);

                if (intersection != null) points.add(intersection);
            }
        }
        
        // 구한 최댓값, 쇠솟값을 이요하여 2차원 배열의 크기 결정
        Point minimum = getMinimumPoint(points);
        Point maximum = getMaximumPoint(points);

        int width = (int) (maximum.x - minimum.x + 1);
        int height = (int) (maximum.y - minimum.y + 1);
        
        char[][] arr = new char[height][width];
        for (char[] row : arr){
            Arrays.fill(row, '.');
        }   

        // 2차원 배열에 별 표시
        for (Point p : points) {
            int x = (int) (p.x - minimum.x);
            int y = (int) (maximum.y - p.y);
            arr[y][x] = '*';
        }

        // 문자열 배열로 변환
        String[] result = new String[arr.length];
        for (int i = 0; i < result.length; i++) {
            result[i] = new String(arr[i]);
        }
        return result;
    }
}