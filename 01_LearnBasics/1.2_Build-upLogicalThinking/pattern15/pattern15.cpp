#include <iostream>

using namespace std;

int main(){
  int n;
  cin>>n;
   for(int i = n;i>=1;i--){
      char alp = 'A';
            for(int j=i;j>=1;j--){
                
                 cout << alp;
              alp++;
            }
            cout<<endl;
        }
  return 0;
}