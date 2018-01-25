#include <stdio.h>

/*int main(int argc, char const *argv[]) {
  int i;
  for (i = 0; i <argc; ++i) {
    printf("%s\n", argv[i]);// wyswie sie sciezka do pliku poniewaz jest "zerowym" argumentem
  }
  puts("hello world!");
  getc(stdin);/* pobiera dowolny znak - w tym wypadku program nie zamknie sie
  dopoki nie nacisniesz dowolnego klawisza */


int main(int argc, char const *argv[]) { // otwieranie programu w windows
  printf("Witaj %s!\n", argv[1]); // https://www.youtube.com/watch?v=cUaO1IJFppg
  getc(stdin);
  return 0;
}
  return 0;

}
