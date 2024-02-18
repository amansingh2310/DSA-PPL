#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int n, x;
    cin>>n>>x;
    
    double sum = 0.0;
    for(int i=0; i<n; i++) {
      int num;
      for(int j=0; j<=i; j++){
        num = pow(x,j);
      }
      double fact = 1.0;
      for(int j=1; j<=i; j++){
        fact *= j;
      }
      
      sum = sum + (num/fact);
    }
    cout<<sum;

    return 0;
}