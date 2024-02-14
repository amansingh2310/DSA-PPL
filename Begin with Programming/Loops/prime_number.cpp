#include <iostream>
using namespace std;

int main() 
{
  int n;
  cin>>n;
  
  int i = 1, counter = 0;
  while(i <= n) {
    if(n % i == 0) {
      cout<<i<<" ";
      counter++;
    }
    i++;
  }
  cout<<endl<<counter<<endl;

  if(counter == 2) {
    cout<<n<<" is a Prime Number";
  }else {
    cout<<n<<" is not a Prime Number";
  }
  
  return 0;
}