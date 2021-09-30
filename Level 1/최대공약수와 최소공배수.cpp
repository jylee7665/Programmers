#include <bits/stdc++.h>
#include <algorithm>
int GCD(int a,int b){
    if(b>a){
        int tmp = a;
        a = b;
        b = tmp;
    }
    
    if(b==0) return a;
    else return GCD(b, a%b);
}

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    answer.push_back(GCD(n,m));
    answer.push_back(n*m/GCD(n,m));
    return answer;
}
