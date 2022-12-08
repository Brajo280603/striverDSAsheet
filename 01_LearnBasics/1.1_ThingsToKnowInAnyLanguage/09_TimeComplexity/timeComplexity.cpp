#include<iostream>
#include <cmath>

using namespace std;

int O_one() {
    cout<<"this function complexity is O(1) : meaning constant time required for the running of code"<<endl;
    return 0;
}

int O_n(int n) {

    for(int i = 0;i<n;i++){
    cout<<"n"<<endl;
    }

   cout<<"this function complexity is O(n) : meaning linear time required according to input"<<endl;
   return 0;

}

int O_logn(int n) {

    for(int i = 1;i<n;i=i*2){
    cout<<"n"<<endl;
    }

   cout<<"this function complexity is O(log2(n)) : meaning logarithm time required according to input"<<endl;
   return 0;
}

int O_log_logn(int n) {

    for (int i = 2; i <= n; i=pow(i,2)) {
        cout<<"n"<<endl;
    }
    cout<<"this function complexity is O(log(log n)) "<<endl;

    return 0;
}

int main(){

    O_one();
    O_n(10);
    O_logn(10);
    O_log_logn(10);

 return 0;   
}

