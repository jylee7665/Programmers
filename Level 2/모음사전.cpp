#include <bits/stdc++.h>
#include <iostream>

using namespace std;
vector<char> alpha = {'A','E','I','O','U'};
vector<string> v;

void func(string s,int len){
    if(s.length()==len){
        v.push_back(s);
        return;
    }
    for(auto c:alpha) func(s+c,len);
}
int solution(string word) {
    for(int i=1; i<=5; i++){
        string tmp="";
        func(tmp,i);
    }
    sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++)
        if(v[i]==word) return i+1;
}
