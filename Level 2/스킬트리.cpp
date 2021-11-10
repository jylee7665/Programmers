#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    //스킬트리 전체 순회
    for(auto st:skill_trees){
        vector<char> tmp;
        //스킬트리 한문자씩 순회
        for(auto r:st){
            for(auto c:skill){
                if(r==c) tmp.push_back(r);
            }
        }
        
        bool flag = true;
        for(int i=0; i<tmp.size(); i++){
            if(tmp[i] != skill[i]){
                flag=false;
                break;
            }
        }
        if(flag==true) answer++;
    }
        
  
    return answer;
}
