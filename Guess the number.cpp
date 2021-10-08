#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    int number,guess,nguesses=1;
    srand(time(0));
    number=(rand()%1000)%100  ;     //Generates a random number between 1 and 100

    //cout<<"The random number is "<<number<<endl;
         
    do{
        cout<<"Guess a number between 1 to 100"<<endl;;
        cin>>guess;
        if(guess>number){
            cout<<"Lower number please!"<<endl;
        }
        else if(guess<number){
            cout<<"Higher number please!"<<endl;
        }
        else{
            cout<<"You guessed it right in  "<<nguesses<<"  attempts"<<endl;
        }
        nguesses++;
    }while(guess!=number);

    return 0;
    
    }
