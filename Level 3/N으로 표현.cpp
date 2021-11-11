#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int answer = 9; //최솟값이 8보다 크면 -1 return

void cal(int N, int number, int sum, int cnt){
    if(cnt>8) return;
    
    if(sum==number){
        if(answer > cnt) answer = cnt;
    }
    
    int tmp=0;
    for(int i=1; i<=8; i++){
        tmp = (tmp*10) + N;
        
        cal(N,number,sum+tmp,cnt+i);
        cal(N,number,sum-tmp,cnt+i);
        cal(N,number,sum/tmp,cnt+i);
        cal(N,number,sum*tmp,cnt+i);
    }
    
}
int solution(int N, int number) {
    cal(N,number,0,0);
    if(answer > 8) answer = -1;
    return answer;
}
