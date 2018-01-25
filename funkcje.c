#include <stdio.h>


void jakas_funkcja (int *h){ // tutaj tworzy sie kopia zmiennej hp z funkcji main.
  *h-=5;
}

/* inny sposob zeby zwrocic prawidlowa wartosc to :

int jakas_funkcja(int *h);
h-=5;
return h;

*** wtedy w funkcji main trzeba przyrownac hp = jakas_funkcja(hp); ***
( w funkcji main hp rowna sie nowemu hp po wykonaniu instrukcj)

*/


int main(int argc, char const *argv[]) {
  int hp=100;
  printf("Wartosc zmiennej przed wykonaniem instrukcji %d\n", hp);

  jakas_funkcja(&hp);

  printf("Wartosc zmiennej po wykonaniu instrukcji %d\n", hp);
  return 0;
}
