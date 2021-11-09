#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int solution(string s)
{
    stack<char> tmp;
    for(int i=0; i<s.size(); i++){
        if(tmp.empty() || tmp.top() != s[i])
            tmp.push(s[i]);
        else if(tmp.top() == s[i])
            tmp.pop();
    }
    
    if(tmp.size()==0) return 1;
    return 0;
}
