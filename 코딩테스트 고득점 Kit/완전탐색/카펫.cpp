#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int sum = brown+yellow;
    for(int height=3; ; height++){
        //총합을 높이로 나눴을때 나머지가 0일때만
        if(sum%height==0){
            //합을 세로로 나누면 가로길이
            int weight = sum/height;
            
            //테두리가 갈색이므로 각각 -2
            if(((height-2)*(weight-2))==yellow){
                answer.push_back(weight);
                answer.push_back(height);
                break;
            }
        }
    }
    return answer;
}
