#include <iostream>
using namespace std;

int main() 
{
    int a, b;
    cin>>a>>b;
    
    int max, ans = -1;
    if( a >= b) {
        max = a;
    }else {
        max = b;
    }

    while(max <= a*b) {
        if(max % a == 0 && max % b == 0 && ans == -1) {
            ans = max;
        }
        max++;
    }
    cout<<ans;

    // int i = 1, lcm = 0;
    // while(i<=a*b) {
    //   int t = a * i;
    //   if(t % b == 0 ) {
    //     lcm = t;
    //     break;
    //     }
    //     i++;
    //   }
    // cout<<lcm;
    
    // Reverse Loop
    
    // int i = a*b, j =1, lcm = 0;
    // while(i>= j) {
    //   int t = a * i;
    //   if(t % b == 0 ) {
    //     lcm = t;
    //     }
    //     i--;
    //   }
    // cout<<lcm;
    

    return 0;
}