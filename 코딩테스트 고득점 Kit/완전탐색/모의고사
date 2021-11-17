#include <bits/stdc++.h>
#include <iostream>

using namespace std;

vector<int> a1 = {1,2,3,4,5};
vector<int> a2 = {2,1,2,3,2,4,2,5};
vector<int> a3 = {3,3,1,1,2,2,4,4,5,5,};
vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> tmp(3);
    for(int i=0; i<answers.size(); i++){
        if(answers[i]==a1[i%a1.size()]) tmp[0]++;
        if(answers[i]==a2[i%a2.size()]) tmp[1]++;
        if(answers[i]==a3[i%a3.size()]) tmp[2]++;
    }
    
    int max = *max_element(tmp.begin(),tmp.end());
    for(int i=0; i<3; i++)
        if(max==tmp[i]) answer.push_back(i+1);
    return answer;
}
