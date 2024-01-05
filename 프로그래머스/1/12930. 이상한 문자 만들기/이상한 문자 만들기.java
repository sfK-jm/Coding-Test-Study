class Solution {
    // 문제 풀이 흐름
    // |1. 문자열의 모든 문자에 대해 반복
    // |----A 문자가 공백 문자열에 대해 반복
    // |    |--- i 그대로 이어 붙이기
    // |    |--- ii 다음 등장하는 알파벳은 대문자
    // |
    // |----B 공백 문자가 아닌 경우
    // |    |--- i 대-소문자 변홚하여 이어 붙이기
    // |    |--- ii 다음 등장하는 알파벳의 대-소문자는 현재 변환하는 문자와 반대
    // |
    // |2. 구성한 문자열 반환
    
    public String solution(String s) {
        StringBuilder builder = new StringBuilder();
        boolean isUpper = true;

        for (char c : s.toCharArray()) {
            if (!Character.isAlphabetic(c)) {
                builder.append(c);
                isUpper = true;
            } else {
                if (isUpper) {
                    builder.append(Character.toUpperCase(c));
                } else {
                    builder.append(Character.toLowerCase(c));
                }
                isUpper = !isUpper;
            }
        }
        return builder.toString();
    }
}