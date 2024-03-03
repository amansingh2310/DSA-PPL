#include <iostream>
using namespace std;

int main() 
{
    int m1, n1;
    cin>>m1>>n1;
    
    int arr1[m1][n1];
    
    for(int i=0; i<m1; i++) {
      for(int j=0; j<n1; j++) {
        cin>>arr1[i][j];
      }
    }
    
    int m2, n2;
    cin>>m2>>n2;
    
    int arr2[m2][n2];
    
    for(int i=0; i<m2; i++) {
      for(int j=0; j<n2; j++) {
        cin>>arr2[i][j];
      }
    }
    
    int arr3[m1][n1];
    
    for(int i=0; i<m1; i++) {
      for(int j=0; j<n1; j++) {
        arr3[i][j] = arr1[i][j] + arr2[i][j];
      }
    }
    
    for(int i=0; i<m1; i++) {
      for(int j=0; j<n1; j++) {
        cout<<arr3[i][j]<<" ";
      }
      cout<<endl;
    }
    
    // for(int i=0; i<m1; i++) {
    //   for(int j=0; j<n1; j++) {
    //     cout<<arr1[i][j]<<" ";
    //   }
    //   cout<<endl;
    // }
    
    // for(int i=0; i<m1; i++) {
    //   for(int j=0; j<n1; j++) {
    //     cout<<arr2[i][j]<<" ";
    //   }
    //   cout<<endl;
    // }

    return 0;
}