#include <iostream>
using namespace std;

int main() 
{
    int a, b;
    cin>>a>>b;
    int i=1, min, ans;
    if(a<=b){
        min = a;
    }else {
        min = b;
    }

    while(i <= min) {
        if(a % i == 0 && b % i == 0) {
            ans = i;
        }
        i++;
    }
    cout<<ans;

    // int i = 1, gcd = 0;
    // while(i<=a) {
    //   if(a % i == 0) {
    //     if(b % i == 0) {
    //       gcd = i;
    //     }
    //   }
    //   i++;
    // }
    // cout<<gcd;
    
    return 0;
}