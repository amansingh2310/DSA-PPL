#include <iostream>
using namespace std;

int main() 
{
    int n, power;
    cin>>n>>power;
    
    int x = 1;
    while(power) {
      x *= n;
      power--;
    }
    cout<<x;
    return 0;
}