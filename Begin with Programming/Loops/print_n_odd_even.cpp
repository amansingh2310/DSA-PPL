#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    
    int c = 0, i = 1;
    while(c < n) {
      cout<<i<<" ";
      i += 2;
      c++;
    }
    cout<<endl;
    c = 0, i = 2;
    while(c < n) {
      cout<<i<<" ";
      i += 2;
      c++;
    }
    
    return 0;
}