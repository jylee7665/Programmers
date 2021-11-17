#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool isPrime(int n){
    if(n<2) return false;
    for(int i=2; i*i<=n; i++)
        if(n%i==0) return false;
    return true;
}

int solution(string numbers) {
    int answer = 0;
    vector<char> v; //종이의 각 숫자 저장
    vector<int> nums; //만들 수 있는 모든 수 저장
    
    for(int i=0; i<numbers.size(); i++) v.push_back(numbers[i]);
    //순열을 구하기 위한 정렬
    sort(v.begin(),v.end());
    
    do{
        string tmp ="";
        //만들 수 있는 모든 수 nums에 저장
        for(int i=0; i<v.size(); i++){
            tmp.push_back(v[i]);
            nums.push_back(stoi(tmp));
        }
    }while(next_permutation(v.begin(),v.end()));
    
    //중복값 제거 ex)02, 2
    sort(nums.begin(),nums.end());
    nums.erase(unique(nums.begin(),nums.end()),nums.end());
    
    for(int i=0; i<nums.size(); i++)
        if(isPrime(nums[i])) answer++;
    return answer;
}
