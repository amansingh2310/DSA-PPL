#include <iostream>
using namespace std;

int main() 
{
    int m, n;
    cin>>m>>n;
    
    int arr1[m][n];
    
    for(int i=0; i<m; i++) {
      for(int j=0; j<n; j++) {
        cin>>arr1[i][j];
      }
    }
    
    int arr2[m][n];
    
    for(int i=0; i<m; i++) {
      for(int j=0; j<n; j++) {
        cin>>arr2[i][j];
      }
    }
    
    int arr3[m][n];
    
    for(int i=0; i<m; i++) {
      for(int j=0; j<n; j++) {
        arr3[i][j] = arr1[i][j] + arr2[i][j];
      }
    }
    
    for(int i=0; i<m; i++) {
      for(int j=0; j<n; j++) {
        cout<<arr3[i][j]<<" ";
      }
      cout<<endl;
    }
    
    // for(int i=0; i<m; i++) {
    //   for(int j=0; j<n; j++) {
    //     cout<<arr1[i][j]<<" ";
    //   }
    //   cout<<endl;
    // }
    
    // for(int i=0; i<m; i++) {
    //   for(int j=0; j<n; j++) {
    //     cout<<arr2[i][j]<<" ";
    //   }
    //   cout<<endl;
    // }

    return 0;
}