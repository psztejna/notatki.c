#include <stdio.h>
#include <stdlib.h>



int main(int argc, char const *argv[]) {
  int i, j;
  float tab[3][3] = {
    { 1.1, 1.2, 1.3 },
    { 2.1, 2.2, 2.3 },
    { 3.1, 3.2, 3.3 }
};
for(i=0; i<3; i++){
  for(j=0; j<3; j++)
  printf("%.1f%c",tab[i][j], (j == 3-1) ? '\n' : '\t');
  puts(" ");
  printf("tablica [%d][%d]=%.1f %c", i, j, tab[i][j], (j == 3-1)? '\n':'\t');
  //wyswietli jako float z 1 miejscem po. i c zeby byla tabelka jezeli j ==2 ?(to) 1 jesli nie to 2.
}
  return 0;
}
