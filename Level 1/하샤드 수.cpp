#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int hap=0, n=x;
    while(n >0){
        hap += n%10;
        n /= 10;
    }
    if(x%hap !=0) answer = false;
    return answer;
}
