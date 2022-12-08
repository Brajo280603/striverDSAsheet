#include <iostream>

using namespace std;

int passValue(int n);
int passRef(int &n);

int main() {
    int number = 6;

    passValue(number);
    cout<<"actual value(after passValue): "<<number<<endl;

    passRef(number);
    cout<<"actual value(after passRef): "<<number<<endl;

    return 0;
}

int passValue (int n) {
    n++;
    cout<<"pass value: "<<n<<endl;
    return 0;
}

int passRef (int &n){
    n++;
    cout<<"pass ref: "<<n<<endl;
    return 0;
}