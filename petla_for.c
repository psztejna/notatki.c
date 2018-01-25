#include <stdio.h>

int main() {
  puts("petla while dla porownania");
  int a = 1;
  while (a<10) {
    //++a; wazne gdzie umiescisz ta linijke
    printf("%d\n", a);
    ++a;
  }
  puts("\npetla while nie skonczona z warunkiem brake");
  int b = 1;
  while (b>0) {// petla nieskonczona
    printf("%d\n", b);
    ++b;
    if (b >=10) {
      break;
    }
  }

  puts("\npetla for");

  int i;

  for (i = 1; i < 10; ++i) {// for(poczatek ; warunek ; krok) // jezeli warunek 'pusty' petla wykonuje sie non stop
      printf("%d\n", i);          // poczatek - inicjalizacja petli wykona sie raz // moze byc pusty jezeli deklaracja i byla wczesniej (int i = 1)
  }                               // krok - wykonuje sie po 1 iteracji petli !!!


  puts("\nSilnia z --n");
  int n = 3;
  int wynik = 1;//inicjalizacja 'wynik' jako 1 bo mnozenie przez 0 daje 0
  for (i = n; i > 0; --i) {
    wynik *= i;
    //printf("silnia z n wynosi: %d\n", wynik); - wazne gdzie umiescisz printf
  }
    printf("silnia z %d wynosi: %d\n", n, wynik);

  puts("\nsilnia z k++");
  int k=5;
  int silnia = 1;

  for (i = 1; i <= k; i++){
    silnia *= i;
  }
  printf("silnia z %d to %d\n", k, silnia);


  puts("\nSuma n pierwszych liczb naturalnych");
  int j = 100;
  int pierwsze = 0;//przeciwnie do mnozenia dajemy 0 bo dodajemy
  for (i = 0; i <= j; ++i) {
    //pierwsze += i;// wazne bo jak bedzie j to wynik nie prawidlowy
    //printf("liczby pierwsze to %d\n", pierwsze); - poza npetla
    pierwsze = pierwsze + i; // = pierwsze += i;
  }
  printf("Suma %d pierwszych liczb naturalnych to %d\n", j, pierwsze);


  /* petla for - dziala doputy warunek bedzie prawdziwy

  */
  return 0;
}
