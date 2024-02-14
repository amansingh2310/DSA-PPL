#include <iostream>
using namespace std;

int main() 
{
  long long  n;
  cin>>n;
  
  int i = 1, fact = 1; 
  while(i <= n) {
    fact *= i++;
  }
  cout<<fact;
  
  return 0;
}