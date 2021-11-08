#include <string>
#include <vector>
#include <iostream>
using namespace std;

bool isOk(string s){
    int cnt=0;
    for(char c:s){
        if(c=='(') cnt++;
        else cnt--;
        if(cnt <0) return false;
    }
    return cnt==0;
}
string solution(string p) {
    string answer = "";
    
    //case1
    if(p=="") return p;
    
    int cnt=0;
    string u,v;
    for(int i=0; i<p.size(); i++){
        if(p[i]=='(') cnt++;
        else cnt--;
        if(cnt==0){
            u = p.substr(0,i+1);
            v = p.substr(i+1);
            break;
        }
    }
    
    if(isOk(u)) return u + solution(v);
    
    answer = "(" + solution(v) + ")";
    for(int i=1; i<u.size()-1; i++)
        answer += u[i]=='('?')':'(';
    return answer;
}
