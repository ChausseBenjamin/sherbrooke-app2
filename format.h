/* format.h
 * ----------------------------------------------------------------------------
 * 'THE BEER-WARE LICENSE' (Revision 42):
 * <benjamin@chausse.xyz> wrote this file. As long as you retain this notice
 * you can do whatever you want with this stuff. If we meet some day, and you
 * think this stuff is worth it, you can buy me a beer in return.
 * Benjamin Chausse
 * ----------------------------------------------------------------------------
 */

#define TRUE 1
#define FALSE 0
#define COUNT_OF( arr) (sizeof(arr)/sizeof(0[arr]))

// Conversion table between uppercase and lowercase
const char caps[2][26] = {
  {'A','B','C','D','E','F','G','H','I','J','K','L','M',
    'N','O','P','Q','R','S','T','U','V','W','X','Y','Z'},
  {'a','b','c','d','e','f','g','h','i','j','k','l','m',
    'n','o','p','q','r','s','t','u','v','w','x','y','z'}
};

// Convert every character to lowercase
char * lower(char *str){
  int len = COUNT_OF(str);
  for (int i=0; i<len; i++){
    // Change all letters to lowercase
    for (int j=0;j<26;j++){
      if (str[i] == caps[0][j]) {
        str[i] = caps[1][j];
      }
    }
  }
  return str;
}

char * trim(char *str){
  // Count the total number of spaces to define the new str size
  int spc =0;
  for (int i=0; i<COUNT_OF(str); i++){
    if (str[i] == ' '){
      spc++;
    }
  }
  // Actually format the new string
  char nstr[COUNT_OF(str)-spc+1];
  int j = 0; // index inside the new str (nstr)
  for (int i=0; i<COUNT_OF(str); i++){
    if (str[i] != ' '){
      nstr[j] = str[i];
      j++;
    }
  }
  nstr[COUNT_OF(nstr)-1] = '\0';
  return nstr;
}
