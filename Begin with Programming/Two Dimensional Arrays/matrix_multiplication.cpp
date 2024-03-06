#include <iostream>
using namespace std;

int main() 
{
    int r1,c1,r2,c2;
    cin>>r1>>c1>>r2>>c2;
    
    int mat1[r1][c1];
    int mat2[r2][c2];
    
    for(int i=0; i<r1; i++) {
        for(int j=0; j<c1; j++) {
          cin>>mat1[i][j];
        }
      }
      
    for(int i=0; i<r2; i++) {
        for(int j=0; j<c2; j++) {
          cin>>mat2[i][j];
        }
      }
    
    if(c1 == r2) {
      int mat[r1][c2];
      
      for(int i=0; i<r1; i++) {
        for(int j=0; j<c2; j++) {
          int sum = 0;
          for(int k=0; k<c1; k++) {
            sum += (mat1[i][k] * mat2[k][j]);
          }
          mat[i][j] = sum;
        }
      }
      for(int i=0; i<r1; i++) {
        for(int j=0; j<c2; j++) {
          cout<<mat[i][j]<<" ";
        }
        cout<<endl;
      }
    }
    
    // for(int i=0; i<r1; i++) {
    //     for(int j=0; j<c1; j++) {
    //       cout<<mat1[i][j]<<" ";
    //     }
    //     cout<<endl;
    //   }
      
    // for(int i=0; i<r2; i++) {
    //     for(int j=0; j<c2; j++) {
    //       cout<<mat2[i][j]<<" ";
    //     }
    //     cout<<endl;
    //   }
    
    return 0;
}