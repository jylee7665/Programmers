#include <bits/stdc++.h>

using namespace std;

bool solution(string s) {
    bool answer = true;
    for(int i=0; i<s.size(); i++)
        if(!isdigit(s[i])) answer = false;

    if(s.size()!=4 && s.size()!=6) answer = false;
    return answer;
}
