#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    
    // float f_pattern = 0;
    double f_pattern = 0, x = 1.0;
    for(int i=1; i<=n; i++) {
        f_pattern += (x/i);
    //   f_pattern += (1.0/i);
    }
    cout<<f_pattern;
    return 0;
}