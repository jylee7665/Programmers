#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    sort(people.begin(),people.end());
    
    int idx=0;
    while(people.size()>idx){
        int back = people.back(); people.pop_back();
        if(people[idx]+back<=limit){
            answer++;
            idx++;
        }else answer++;
    }
    return answer;
}
