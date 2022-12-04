#include<iostream>

using namespace std;

int main(){
    int a;
    cout<<"Enter a number : ";

    cin >> a ;
    
    

    switch (a < 0 ? -1 : a>0? 1: 0)
    {
    case -1 :
        cout<< "Number is negetive."<<endl;
        break;
    
    case 0 : 
        cout << "Number is zero"<<endl;
        break;

    case 1 : 
        cout << "Number is positive"<<endl; 
        break;
    }

    return 0;
}