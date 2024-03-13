#include <iostream>
using namespace std;

string generateRandomThreeNumbers();
string getThreeNumbers();

int getStrikes(string answer, string guess){
    //위치와 숫자가 일치하는 것의 개수
    int result=0;
    if(answer[2]==guess[2]) result++;
    if(answer[1]==guess[1]) result++;
    if(answer[0]==guess[0]) result++;
    return result;
}

int getBalls(string answer, string guess){
    //숫자만 일치하는 것의 개수 반환 (위치는 일치하면 안 된다)
    int result=0;
    if(answer[0]==guess[1] || answer[0]==guess[2]) result++;
    if(answer[1]==guess[0] || answer[1]==guess[2]) result++;
    if(answer[2]==guess[0] || answer[2]==guess[1]) result++;
    return result;
}

bool checkAnswer(string answer, string guess){
    if(guess==answer){
        cout<<"You win!";
        return true;
    }
    else{
        int strikes=getStrikes(answer, guess);
        int balls=getBalls(answer, guess);
        cout<<"Strikes: "<<strikes<<", Balls: "<<balls<<"\n";
        return false;
    }
}

void startGame(){
    string answer=generateRandomThreeNumbers();
    cout<<"Answer is "<<answer<<"\n";
    while(true){
        cout<<"Enter a guess: ";
        string guess=getThreeNumbers();
        bool gameClear=checkAnswer(answer, guess);
        if(gameClear) break;
    }
}