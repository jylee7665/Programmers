#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    long long num = x;
    answer.push_back(num);
    for(int i=1; i<n; i++){
        answer.push_back(num += x);
    }
    return answer;
}
