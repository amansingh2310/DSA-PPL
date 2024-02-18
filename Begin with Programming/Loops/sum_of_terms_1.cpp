// Optimize Solution

#include <iostream>
using namespace std;

int main() 
{
    int n, x, i;
    cin>>n>>x;
    
    double ans = 0, prod = 1, fact = 1;
    for(i=0; i<n; i++) {
      ans += prod/fact;
      prod *= x;
      fact *= (i+1);
    }
    cout<<ans;

    return 0;
}


// #include <iostream>
// using namespace std;

// int main() 
// {
//     int n, x, i, j;
//     cin>>n>>x;
    
//     double ans = 0;
//     for(i=0; i<=n; i++) {
//       double prod = 1;
//       for(j=1; j<=i; j++) {
//         prod *= x;
//       }
//       double fact = 1;
//       for(j=1; j<=i; j++) {
//         fact *= j;
//       }
//       ans += prod/fact;
//     }
//     cout<<ans;

//     return 0;
// }