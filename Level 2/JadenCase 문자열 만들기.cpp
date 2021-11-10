#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int i=0;
    while(i<s.size()){
        //공백문이 연속일 수 도 있어서 if가 아닌 while
        while(s[i]==' ') i++;
        s[i]=toupper(s[i]);
        do{
            i++;
            s[i]=tolower(s[i]);
        }while(s[i] != ' ' && i<s.size());
        
    }
    return s;
}
