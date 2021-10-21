#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int solution(string dartResult) {
    int answer = 0;
    vector<int> sum;
    string tmp;
    for(int i=0; i<dartResult.size(); i++){
        if(dartResult[i] != 'S' && dartResult[i] != 'D' && dartResult[i] != 'T' && dartResult[i] != '*' && dartResult[i] != '#')
            tmp += dartResult[i];
        
        else{
            int num=0;
            if(!tmp.empty())
                num = stoi(tmp);
            
            int result=0;
            if(dartResult[i] == 'S'){
                result = pow(num,1);
                sum.push_back(result);
                tmp = "";
            }
            else if(dartResult[i] == 'D'){
                result = pow(num,2);
                sum.push_back(result);
                tmp = "";
            }
            else if(dartResult[i] == 'T'){
                result = pow(num,3);
                sum.push_back(result);
                tmp = "";
            }
            else if(dartResult[i] == '*'){
                if(sum.size()>1){
                    sum[sum.size()-1] *= 2;
                    sum[sum.size()-2] *= 2;
                }
                else
                    sum[sum.size()-1] *= 2;
            }
            else if(dartResult[i] == '#')
                sum[sum.size()-1] *= -1;
        }
    }
    for(int i=0; i<sum.size(); i++)
        answer += sum[i];
    return answer;
}
