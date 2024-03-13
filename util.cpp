#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// 3자리 랜덤 수 생성
string getRandomThreeNumbers(){
    srand(time(nullptr));
    string result="";
    for(int i=0;i<3;i++){
        int randNum=rand()%10;
        result+=to_string(randNum);
    }
    return result;
}