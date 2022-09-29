/* cosine.c
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

double cos(double input, int precision){
  double ttl = 1;
  int denom = 1;
  double num;
  for (int i=2;i<=(2*precision);i+=2){
    num = mpow(input,i);
    denom *= i*(i-1);
    // ttl += num/denom;
    ttl += ( (i/2)%2 == 0 ) ? num/denom : -num/denom;
  }
  return ttl;
}

int main(){
  const int precision = 20;
  const double threshold = 1e-9;

  for (int i=0; i<COUNT_OF(piValues);i++){
    if ( abs(piValues[i][2]-cos(piValues[i][0],precision))>threshold ){
      printf("ERROR: \n"
             "Deviation between calculated value and expected value\n"
             "surpasses threshold of %f for number %f\n"
             "Expected: %f but got: %f\n",
             threshold,
             piValues[i][0],
             piValues[i][2],
             cos(piValues[i][0],precision));
      return 1;
    } else {
      printf("%f IS ALL GOOD!\n",piValues[i][0]);
    }
  }

  return 0;
}
