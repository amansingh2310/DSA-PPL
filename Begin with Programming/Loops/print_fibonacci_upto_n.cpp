#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    int t0 = 0, t1 = 1, sum = 0;
    cout<<t1<<" ";
    for(int i= 2; i<=n; i++) {
      sum = t0 + t1;
      cout<<sum<<" ";
      t0 = t1;
      t1 = sum;
    }
    return 0;
}