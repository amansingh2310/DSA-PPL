#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    
    if(n == 0) {
      cout<<"0";
    }else if(n == 1) {
      cout<<"1";
      }else {
      int t0 = 0, t1 = 1, sum = 0;
      for(int i= 2; i<=n; i++) {
         sum = t0 + t1;
        t0 = t1;
        t1 = sum;
      }
      cout<<sum; 
    }
    // int i = 1, t0 = 0, t1 = 1, sum = 0;
    // while(i < n) {
    //   sum = t0 + t1;
    //   t0 = t1;
    //   t1 = sum;
    //   i++;
    // }
    // cout<<sum;
    
    return 0;
}