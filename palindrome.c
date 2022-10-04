/* palindrome.c
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

int palindrome(char *s){
  int len = 0;
  while (s[len]!= '\0'){
    len ++;
  }
  int j = len;
  for (int i=0; i<len/2;i++){
    j--;
    printf("%c-",s[i]);
    printf("%c\n",s[j]);
    if (s[i] != s[j]){
      return 0;
    }
  }
  return 1;
}

int main(){
  char *word = "tenet";
  printf("%s: %d\n",word,palindrome(word));
  word = "automobile";
  printf("%s: %d\n",word,palindrome(word));
  return 0;
}
