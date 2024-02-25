#include <iostream>
#include <climits>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    int maxi[n];
    
    for(int i=0; i<n; i++) {
      cin>>maxi[i];
    }
    
    int max = INT_MIN;

    for(int i=0; i<n; i++) {
      if(max < maxi[i]) {
        max = maxi[i];
      }
    }
    cout<<max;
    
    return 0;
}