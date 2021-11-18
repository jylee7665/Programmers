#include <string>
#include <vector>

using namespace std;

int answer = 55;
bool check[55];

void dfs(string begin, string target, vector<string> &words, int cnt){
    if(begin==target){
        answer= min(answer,cnt);
        return;
    }
    for(int i=0; i<words.size(); i++){
        int diff=0;
        for(int j=0; j<words[i].size(); j++){
            if(begin[j] != words[i][j]) diff++;
            if(diff==2) break;
        }
        if(diff==1){
            if(check[i]==false){
                check[i]=true;
                dfs(words[i],target,words,cnt+1);
                check[i]=false;
            }
        }
    }
}
int solution(string begin, string target, vector<string> words) {
    dfs(begin,target,words,0);
    if(answer==55) answer=0;
    return answer;
}
