#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    int counter = 1;
    // int sum = 0;
    
    while(counter <= n) {
      // sum += counter;
      if(counter == n) {
        cout<<counter++;
      } else {
        cout<<counter++<<" ";
      }
    }
    cout<<endl<<n*(n+1)/2;
    
    return 0;
}