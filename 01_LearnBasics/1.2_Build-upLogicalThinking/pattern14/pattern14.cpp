#include <iostream>

using namespace std;

int main(){
  int n;
  cin>>n;

   for(int i = 1;i<=n;i++){
            char alp = 'A';
            for(int j=1;j<=i;j++){
                
              cout << alp;
              alp++;

            }
            cout<<endl;
        }
  return 0;
}