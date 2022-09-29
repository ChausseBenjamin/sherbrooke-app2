/* gen-trig-test.c
 * ----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * <benjamin@chausse.xyz> wrote this file. As long as you retain this notice
 * you can do whatever you want with this stuff. If we meet some day, and you
 * think this stuff is worth it, you can buy me a beer in return.
 * Benjamin Chausse
 * ----------------------------------------------------------------------------
 */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/* This code was used to generate floating point numbers found in testData.h
 * It's purpose is to generate a list of expected outputs for the sine and
 * cosine function with a given number. It uses the math.h library which cannot
 * be used for the assignment and which is therefore a great subject to test
 * and compare with.
 *
 * The generated [][3]int list is organized as follows: { original_value,
 * expected_sine, expected_cosine }
 *
 * Values chosen here test the following edge cases,
 *   - Common trigonometric circle identities (0°,30°,45°,60°,90°, etc...)
 *   - Negative values
 *   - Values surpassing 2π
 */

int main(){

  // list of number {{{
const double lst[20] = {
    0,         // 0°
    M_PI/6,    // 30°
    M_PI/4,    // 45°
    M_PI/3,    // 60°
    M_PI/2,    // 90°
    2*M_PI/3,  // 120°
    3*M_PI/4,  // 135°
    5*M_PI/6,  // 150°
    M_PI,      // 180°
    7*M_PI/6,  // 210°
    5*M_PI/4,  // 225°
    4*M_PI/3,  // 240°
    3*M_PI/2,  // 270°
    5*M_PI/3,  // 300°
    7*M_PI/4,  // 315°
    11*M_PI/6, // 330°
    5*M_PI/2,  // 450° (over 2π -> sin=1)
    3*M_PI,    // 540° (over 2π -> cos=1)
    -5*M_PI/2, // -90 negative value -> sin=-1°
    -3*M_PI,   // -180 negative value -> cos=-1°

  };
  // }}}

  printf("int piValues[][] = {\n");
  int max = (sizeof(lst)/sizeof(lst[0]))-1;
  for (int i=0; i<max; i++) {
    printf("  {%f, %f, %f},\n",
        lst[i],
        sin(lst[i]),
        cos(lst[i]));
  };
  printf("  {%f, %f, %f}\n}\n",
      lst[max],
      sin(lst[max]),
      cos(lst[max]));

  return 0;
}
