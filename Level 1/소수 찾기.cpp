#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<bool> tmp(n+1,true);
    for(int i=2; i<=n; i++){
        if(tmp[i]==true){
            for(int j=2; i*j<=n; j++){
                tmp[i*j]=false;
            }
            answer++;
        }
    }
    return answer;
}
