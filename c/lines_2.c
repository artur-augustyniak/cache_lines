#include <stdio.h>
#include <stdlib.h>

main () {
  int i,j;
  static int x[4000][4000];
  for (j = 0; j < 4000; j++) {
     for (i = 0; i < 4000; i++) {
       x[j][i] = i + j; }
   }
}
