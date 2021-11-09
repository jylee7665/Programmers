#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int,vector<int>,greater<int>> pq(scoville.begin(),scoville.end());
    
    while(pq.size()>1 && pq.top()<K){
        int n1 = pq.top(); pq.pop();
        int n2 = pq.top(); pq.pop();
        answer++;
        int hap = n1 + n2*2;
        pq.push(hap);
    }
    if(pq.top()<K) return -1;
    return answer;
}
