#include <stdio.h>


int main(int argc, char const *argv[]) {
  int k = 15; //deklaracja zmiennej

  printf("Zmienna k wynosi %d\n", k); // wypisuje wartosc zmiennej
  printf("Adres zmiennej to %p\n",&k ); // wypisuje adres zmiennej w pamieci
  printf("Wskaznik zmiennej to * %d\n",*(&k)); // wypisuje wartosc znajdujaca sie pod adresem



  int *wsk = &k;

/* inny sposob deklaracji wskaznika to :
int * wsk;
wsk = &k;
*/

/* jesli w danym momencie nie chcesz podac adresu dla wskaznika to lepiej zapiesac:
int *wsk = NULL; zeby nie było smiei pod danym adresem
*/
  *wsk = 14; // to samo co k=14 bo *wsk =&k

  printf("Wskaznik %p\n", wsk);//zwroci adres zmiennej
  printf("Wartosc zmiennej, ktorej adres zawiera wsk wynosi %d\n", *wsk);//wypisuje wartosc zmiennej pod adresem wsk
  printf("Adres zmiennej wsk wynosi %p\n", &wsk); //inny adres niz &k bo to inna zmienna

  return 0;
}
