#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    return a%b==0 ? b:gcd(b,a%b);
}

long long solution(int w,int h) {
    long long answer = 1;
    answer = (long long)w * (long long)h - (w+h);
    answer += gcd(w,h);
    return answer;
}
