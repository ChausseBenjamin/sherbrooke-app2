/* findChar.h
 * ----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * <benjamin@chausse.xyz> wrote this file. As long as you retain this notice
 * you can do whatever you want with this stuff. If we meet some day, and you
 * think this stuff is worth it, you can buy me a beer in return.
 * Benjamin Chausse
 * ----------------------------------------------------------------------------
 */


// This returns TRUE
int findChar(char *s,char target){
    char *str = lower(trim(s));
    int match = 0;
    str = lower(str);
    // Add if finding the index is necessary:
    // str = trim(str);
    for (int i=0;i<COUNT_OF(str); i++){
      if (str[i] == target) {
        match ++;
      };
    };
    return (match>0) ? TRUE : FALSE;
}
