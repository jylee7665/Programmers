#include <string>
#include <vector>

using namespace std;

//arr1 i행, arr2 j열 곱하기
//k로 인덱스 이동
vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    for(int i=0; i<arr1.size(); i++){
        vector<int> tmp;
        for(int j=0; j<arr2[0].size(); j++){
            int value=0;
            for(int k=0; k<arr1[0].size(); k++){
                value += arr1[i][k] * arr2[k][j];
            }
            tmp.push_back(value);
        }
        answer.push_back(tmp);
    }
    return answer;
}
