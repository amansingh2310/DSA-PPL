#include <iostream>
#include<cmath>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    
    long long sum = 0, t = 1, i;
    for(i = 1; i <= n; i++) {
      sum += t;
      t = t * 10 + 1;
    }
    cout<<sum;
    
    // int s_pattern = 0, sum = 0;
    // for(int i=0; i<n; i++) {
    //   s_pattern += pow(10,i);
    //   sum += s_pattern;
    // }
    // cout<<sum;
    
    return 0;
}