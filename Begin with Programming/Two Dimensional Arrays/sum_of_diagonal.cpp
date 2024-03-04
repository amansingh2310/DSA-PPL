#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    
    int arr[n][n];
    
    for(int i=0; i<n; i++) {
      for(int j=0; j<n; j++) {
        cin>>arr[i][j];
      }
    }
    
    int sum = 0;
    
    int i=0, j=0;
    while(i<n) {
        sum += arr[i++][j++];
    }

    i=0, j=n-1;
    while(i<n) {
        sum += arr[i++][j--];
    }

    if(n%2 == 0) {
        cout<<sum<<endl;
    } else {
        cout<<sum-arr[n/2][n/2];
    }
    
    // for(int i=0; i<n; i++) {
    //   for(int j=0; j<n; j++) {
    //     if(i==j || i+j == n-1) {
    //       sum += arr[i][j];
    //     }
    //   }
    // }
    
    return 0;
}