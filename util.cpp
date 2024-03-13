#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// 3자리 랜덤 수 생성
string generateRandomThreeNumbers(){
    srand(time(nullptr));
    string result="";
    bool exist[10]={false,};
    for(int i=0;i<3;i++){
        while(true){
            int randNum=rand()%10;
            if(!exist[randNum]){
                exist[randNum]=true;
                result+=to_string(randNum);
                break;
            }
        }
    }
    return result;
}

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