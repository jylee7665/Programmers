#include <string>
#include <vector>

using namespace std;
int answer,height,d[505][505];

int max(int a,int b){
    return a>b ? a:b;
}
int solution(vector<vector<int>> triangle) {
    answer = d[0][0] = triangle[0][0];
    height = (int)triangle.size();
    
    for(int i=1; i<height; i++){
        for(int j=0; j<=i; j++){
            if(j==0)
                d[i][j] = d[i-1][j] + triangle[i][j];
            else if(j==i)
                d[i][j] = d[i-1][j-1] + triangle[i][j];
            else
                d[i][j] = max(d[i-1][j],d[i-1][j-1]) + triangle[i][j];
            
            answer = max(answer,d[i][j]);
        }
    }
    return answer;
}
