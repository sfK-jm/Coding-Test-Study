public class Solution {
    // 흐름
    // 1. 대기실의 모든 응시자 위치에 대해 반복
    //      - A 상하좌우 중 빈 테이블이 있는 방향에 대해 1-B로 진행
    //      - B 빈 테이블과 인접한 위치 중 응시자가 있다면 거리두기를 지키지 않은 것
    // 2. 모든 응시자의 위치를 검사했으나 거리두기를 지키지 않은 경우를 발견하지 못했으면 거리두기를 지킨것

    // 0-상 1-좌 2-우 3-하 || 반대방향 인덱스 끼리 더하면 3임
    static int dy[] = {-1, 0, 0, 1};
    static int dx[] = {0, -1, 1, 0};

    // exclude방향을 제외한 방향에 다른 응시자가 있는지 검사
    private boolean isNextToVolunteer(char[][] room, int x, int y, int exclude) {
        for (int d = 0; d < 4; d++) {
            if (d == exclude) continue;

            int nx = x + dx[d];
            int ny = y + dy[d];
            if (ny < 0 || ny >= room.length || nx < 0 || nx >= room[ny].length) continue;
            if (room[ny][nx] == 'P') return true;
        }
        return false;
    }

    private boolean isDistanced(char[][] room, int x, int y) {
        // 응시자의 위치(x, y)가 거리두기를 지키는지 검사
        for (int d = 0; d < 4; d++) {
            int nx = x + dx[d];
            int ny = y + dy[d];
            if (ny < 0 || ny >= room.length || nx < 0 || nx >= room[ny].length) continue;

            switch(room[ny][nx]) {
                case 'P': return false;
                case 'O':
                if (isNextToVolunteer(room, nx, ny, 3 - d)) return false;
                    break;
            }
        }
        return true;
    }
    
    // 거리두기 검사
    private boolean isDistanced(char[][] room) {
        // 대기실의 모든 응시자 위치에 대해 반복
        for (int y = 0; y < room.length; y++) {
            for (int x = 0; x < room[y].length; x++) {
                if (room[y][x] != 'P') continue;
                // 응시자의 위치(x, y)가 거리두기를 지키는지 검사
                if (!isDistanced(room, x, y)) return false;
            }
        }
        return true;
    }

    public int[] solution(String[][] places) {
        int[] answer = new int[places.length];

        for(int i = 0; i < answer.length; i++) {
            String[] place = places[i];
            char[][] room = new char[place.length][];
            for (int j = 0; j < room.length; j++) {
                room[j] = place[j].toCharArray();
            }
            // 거리두기 검사 후 answer에 기록
            if (isDistanced(room)) answer[i] = 1;
            else answer[i] = 0;
        }
        return answer;
    }
}
