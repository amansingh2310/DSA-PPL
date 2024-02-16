#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int N;
  cin>>N;
  
  int x = 1;
  while(N/x > 9) {
    x *= 10;
  }
  
  while(x > 0) {
    cout<<N/x<<endl;
    x /= 10;
  }
  
  return 0;
}

// int main() 
// {
//     int n;
//     cin>>n;
//     int m = n;
//     int count = 0;
//     while(n) {
//       n /= 10;
//       count++;
//     }
//     if(count == 0){
//       cout<<count;
//     }
//     while(count) {
//       int p = m/(pow(10,count-1));
//       cout<<p<<endl;
//       count--;
//     }
//     return 0;
// }
