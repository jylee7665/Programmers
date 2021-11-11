#include <string>
#include <vector>

using namespace std;

bool dfs(vector<vector<int>> &computers, int n){
    //이미 순회한 노드라면
    if(!computers[n][n]) return false;
    computers[n][n]=0;
    for(int i=0; i<computers.size(); i++)
        //연결된 노드가 있다면 재귀
        if(computers[n][i]) dfs(computers,i);
    return true;
}
int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    for(int i=0; i<n; i++)
        //순회하지않는 노드라면 dfs탐색 후 answer증가
        if(computers[i][i] && dfs(computers,i)) answer++;
    return answer;
}
