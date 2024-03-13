#include <iostream>
using namespace std;

// 3자리 숫자를 입력받는 함수
string getThreeNumbers(){
    string s;
    while(true){
        cin>>s;
        if(s.length()==3) break;
        else cout<<"please enter 3 numbers\n";
    }
    return s;
}