public class Solution {
    public int[][] solution(int[][] arr1, int[][] arr2) {
        // 행렬은 왼쪽 행렬의행 개수와 오른쪽행렬의 열 개수를 갖게됨
        int[][] arr = new int[arr1.length][arr2[0].length];
        
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                arr[i][j] = 0;
                for (int k = 0; k < arr1[i].length; k++) {
                    arr[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }
        return arr;
    }
}
