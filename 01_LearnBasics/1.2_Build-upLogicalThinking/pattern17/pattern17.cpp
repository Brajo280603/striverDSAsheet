#include <iostream>

using namespace std;

int main(){
  int n;
  cin>>n;
  
  for(int i = 1;i<=n;i++){
      char alp = 'A';
            for(int k=n;k>i;k--){
                cout<<" ";
            }
            for(int j=1;j<=i;j++){

              cout << alp;
              alp++;
              
            }
            alp--;
            for(int j=1;j<i;j++){
              
              
              alp--;
              cout << alp;
              
            }
            
            cout<<endl;
        }
  return 0;
}