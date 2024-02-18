#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int x, n;
    cin>>x>>n;
    float fact = 1.0, sum = 0.0;
    int i = 1;
    while(i <= n) {
      fact *= i;
      i++;
    }
    for(i = 0; i<n; i++) {
      sum =  sum + (pow(x,i)/fact);
    }
    cout<<sum;
    return 0;
}