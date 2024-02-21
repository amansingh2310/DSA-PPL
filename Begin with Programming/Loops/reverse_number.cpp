#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    
    int rem, ans = 0;
    while(n) {
      rem = n % 10;
      ans = ans * 10 + rem;
      n = n / 10;
    }
    cout<<ans;
    return 0;
}

// #include <iostream>
// #include <math.h>
// using namespace std;

// int main() 
// {
//     int n;
//     cin>>n;
    
//     int dc = 0, temp = n;
//     while(temp) {
//       dc++;
//       temp /= 10;
//     }
    
//     int p, ans = 0;
//     while(n) {
//       p = n % 10;
//       ans = ans + p*(pow(10,dc-1));
//       n /= 10;
//       dc--;
//     }
    
//     cout<<ans;
//     return 0;
// }