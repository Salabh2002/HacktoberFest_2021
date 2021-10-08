#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

    int StonePaperScissorThread(char you, char comp){
        if(you==comp){
            return 0;
        }
        if(you=='s' && comp=='p'){
            return -1;
        }
        else if(you=='s' && comp=='S'){
            return 1;
        }
        else if(you=='s' && comp=='t'){
            return -1;
        }
        else if(you=='p' && comp=='s'){
            return -1;
        }
        else if(you=='p' && comp=='S'){
            return -1;
        }
        else if(you=='p' && comp=='t'){
            return -1;
        }
        else if(you=='S' && comp=='s'){
            return -1;
        }
        else if(you=='S' && comp=='p'){
            return 1;
        }
        else if(you=='S' && comp=='t'){
            return 1;
        }
        else if(you=='t'  && comp=='s'){
            return 1;
        }
        else if(you=='t' && comp=='p'){
            return 1;
        }
        else if(you=='t' && comp=='S'){
            return -1;
        }
    }

int main(){
    char you,comp;
    srand(time(0));
    int number=(rand()%1000)%100  ;
    if(number<25){
        comp='s';
    }
    else if(number>26 && number<50){
        comp='p';
    }
    else if(number>51 && number<75){
        comp='S';
    }
    else{
        comp='t';
    }
    cout<<"Rules:-"<<endl;
    cout<<" This is a game between you and computer."<<endl;
    cout<<"Enter 's' for stone, 'p' for paper, 'S' for scissor, 't' for thread "<<endl;

    cin>>you;
    int result=StonePaperScissorThread(you,comp);


    if(result==0){
        cout<<"Game Draw!"<<endl;
    }
    else if(result==1){
        cout<<"You Win!"<<endl;
    }
    else{
        cout<<"You Lose!"<<endl;
    }
    cout<<"You chose  "<<you<<"   and computer chose  "<<comp<<endl;

    return 0;
}
