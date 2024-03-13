#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// 3자리 랜덤 수 생성
string getRandomThreeNumbers(){
    srand(time(nullptr));
    int num=0;
    for(int i=0;i<3;i++){
        int randNum=rand()%10;
        num=(num*10)+randNum;
    }
    return to_string(num);
}