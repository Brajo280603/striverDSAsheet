#include <iostream>

using namespace std;

int main(){
  int n;
  cin>>n;
    for(int i = 1;i<=n;i++){
            for(int k=n;k>=i;k--){
                cout<<"*";
            }
            for(int j=1;j<i;j++){

              cout << "  ";
            }
            for(int k=n;k>=i;k--){
                cout<<"*";
            }
            
            cout<<endl;
        }
    for(int i = n;i>=1;i--){
        for(int k=n;k>=i;k--){
            cout<<"*";
        }
        for(int j=i;j>1;j--){
          cout << "  ";
        }
        for(int k=n;k>=i;k--){
            cout<<"*";
        }

        cout<<endl;
    }
  return 0;
}