#include <bits/stdc++.h>
#include <iostream>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    int var=1;
    vector<int> v;
    while(n>0){
        v.push_back(n%10);
        n /= 10;
    }
    sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++){
        answer += v[i]*var;
        var *= 10;
    }
    return answer;
}
