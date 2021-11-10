#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int solution(string s) {
    int answer = 0;
    int x=s.size();
    while(x--){
        stack<char> st;
        bool flag=false;
        for(int i=0; i<s.size(); i++){

        if(s[i]=='[' || s[i]=='{' || s[i]=='('){
            flag=true;
            st.push(s[i]);
        }else{
            if(s[i]==']' && st.top()=='[')
                st.pop();
            if(s[i]=='}' && st.top()=='{')
                st.pop();
            if(s[i]==')' && st.top()=='(')
                st.pop();
        }
    }

        if(st.empty() && flag) answer++;

        char cur=s.front();
        s.erase(s.begin());
        s.push_back(cur);
    }



    return answer;
}
