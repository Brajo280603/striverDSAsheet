#include <iostream>

using namespace std;

int main(){
    int num;
    cout<< "enter a number : " ;
    cin>>num;

    if(num>0){
        cout<< "the number is a positive number";
    } 
    else if(num<0){
        cout<< "the number is a negetive number";
    }
    else{
        cout<< "the number is zero";
    }
    return 0;
}