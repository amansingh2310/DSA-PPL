#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    if(n == 0) {
      cout<<n<<endl;
    }
    while(n>0) {
      cout<<n<<endl;
      n  /= 10;
    }
    return 0;
}