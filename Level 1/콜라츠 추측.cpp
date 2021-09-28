#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    long long tmp = num;
    while(1){
        if(tmp == 1) break;
        
        if(tmp%2==0)
            tmp = tmp/2;
        else
            tmp =  tmp*3 +1;
        answer++;
        
        if(answer==500){
            answer = -1;
            break;
        }
    }
    return answer;
}
