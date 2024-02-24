#include <iostream>
using namespace std;

int main() 
{
    int a, b, year = 0;
    cin>>a>>b;
    
    while(a<=b) {
      year++;
      a = 3*a;
      b = 2*b;
    }
    cout<<year;
    return 0;
}