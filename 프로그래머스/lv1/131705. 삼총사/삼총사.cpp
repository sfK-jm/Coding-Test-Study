#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    
    vector<int> v = number;
    sort(v.begin(), v.end());
    
    for (int i = 0; i < v.size() - 2; i++){
        for (int j = i + 1; j < v.size() - 1; j++){
            for(int k = j + 1; k < v.size(); k++){
                if (v[i] + v[j] + v[k] == 0) answer++;
            }
        }
    }
    return answer;
}