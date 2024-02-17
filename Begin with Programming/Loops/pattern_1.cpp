#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    
    int i = 1;
    while(i<=n) {
      int j = 1;
      while(j<=i) {
        int k = 1;
        while(k <= j){
          cout<<k;
          k++;
        }
        cout<<endl;
        j++;
      }
      cout<<"xxxxxxx"<<endl;
      i++;
    }
    return 0;
}