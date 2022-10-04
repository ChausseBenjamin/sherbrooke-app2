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

int *matAdd(int *ma, int *mb, int w, int h){

  int res[h][w];
  for (int i=0;i<w;i++){
    for (int j=0;j<h;j++){
      res[i][j] = *(ma+(i*h)+j) + *(mb+(i*h)+j);
    }
  }
    return *res;
}

int main(){
  int *test1 = matAdd(mtrxA,mtrxB,3,3);
  print(test1,3,3);
  return 0;
}
