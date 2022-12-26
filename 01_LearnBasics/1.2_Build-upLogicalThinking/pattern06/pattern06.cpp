#include <iostream>

using namespace std;

int main(){
  int n;
  cin>>n;
   for(int i = n;i>=1;i--){
       int num = 1;
            for(int j=i;j>=1;j--){
                
              cout << num<<" ";
                num++;
            }
            cout<<endl;
        }
  return 0;
}