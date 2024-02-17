#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    int sum=0;
    while(n) {
      int p = n %10;
      int fact = 1, i = 1;
      while(i<=p) {
        fact *= i;
        i++;
      }
      sum += fact;
      n = n/10;
    }
    cout<<sum;
    return 0;
}