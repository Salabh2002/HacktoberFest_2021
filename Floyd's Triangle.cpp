#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n "<<endl;
    cin>>n;
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
        
        if((i+j)%2==0){
            cout<<" 1";
        }
        else{
            cout<<" 0";
        }
        }
        cout<<endl;
    }
    return 0;
}
