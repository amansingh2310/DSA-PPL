#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    
    int i = 1;
    while(i<=n) {
      int j =1;
      while(j<=i) {
        cout<<j;
        j++;
      }
      while(j>=1){
        cout<<j;
        j--;
      }
      cout<<endl;
      i++;
    }
    return 0;
}