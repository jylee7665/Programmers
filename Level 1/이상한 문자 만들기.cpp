#include <bits/stdc++.h>

using namespace std;

string solution(string s) {
    string answer = "";
    int gap=0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == ' '){
            gap =0;
            answer += s[i];
            continue;
        }
        
        if((gap+1) %2 !=0)
            answer += toupper(s[i]);
        else
            answer += tolower(s[i]);
        gap++;
    }
    return answer;
}
