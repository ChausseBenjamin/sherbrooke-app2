/* matAdd.c
 * ----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * <benjamin@chausse.xyz> wrote this file. As long as you retain this notice
 * you can do whatever you want with this stuff. If we meet some day, and you
 * think this stuff is worth it, you can buy me a beer in return.
 * Benjamin Chausse
 * ----------------------------------------------------------------------------
 */

#include <stdio.h>
#include "format.h"
#include "testData.h"

int *matMult(int *ma, int *mb, int h1, int c, int w2){

  int res[h1][w2];
  for (int i=0;i<h1;i++){
    for (int j=0;j<w2;j++){
      int cell = 0;
      for (int k=0;k<c;k++){
        cell += *((ma+i*c)+k) * *((mb+w2*k)+j);
      }
      res[i][j] = cell;
    }
  }
  return *res;
}

int main(){
  int A[3][2] = {
    {3, 4},
    {7, 2},
    {5, 9}
  };
  int B[2][3] = {
    {3, 1, 5},
    {6, 9, 7}
  };
  int *C = matMult(A,B,3,2,3);
  print(C,3,3);
  return 0;
}
