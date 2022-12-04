#include<iostream>

using namespace std;

int main(){

    int intarr [5];

    cout<<"enter a value to integer array : ";
    
    for(int i =0;i<5;i++){
        cin >> intarr[i];
    }

    char chararr [5];
    cout<<"enter a char array(string) : ";

    for(int i = 0;i<5;i++){
        cin >> chararr[i]; 
    }

    string aString;

    cout<< "enter a string in cpp : ";

    cin >> aString;

    for(int i = 0;i<5;i++){
    cout<<"int arr : " << intarr[i]<<endl;

    }

    for(int i = 0;i<5;i++){
        cout<< "char arr : "<< chararr[i]<<endl; 
    }

    cout<< "the string : "<< aString<<endl;

}