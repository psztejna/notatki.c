#include <stdio.h>

int main() {
  int x = printf("Siema heniu!\n");
  //puts(&x);
  printf("Ilosc znakow wypisanych na ekran %d\n", x);

  putchar('A');// wypisuje pojedynczy znak umieszczony w ''
  puts("\n");
  printf("%d",putchar('A')); // zwraca wartosc - najpierw wypisala A taj jak w wierszu wyzej
                            // potem dopisala 65 poniewaz w tablicach asci A = 65
  puts("\n");


  printf("Podaj cztery liczby calkowite oddzielone spacjami\n");
  int i1=0, i2=0, i3=0, i4=0;// inicjalizacja zmiennej jako zero zeby w nie wypisywal 'smieci' w przypadku nie podania wartosci
  int liczba_argumentow = scanf("%d %d %d %d", &i1, &i2, &i3, &i4);//ampersand - oznacza adres tej zmiennej
  //(liczba zostanie wpisana pod adres w pamieci nalezacu do tej zmiennej)
  //printf("liczba argumentow poprawnie wpisanych: %d\n",scanf("%d %d %d %d", &i1, &i2, &i3, &i4));// scanf działa w pirntf ale nie mozesz potem nadpisac zmiennej
  printf("liczba argumentow poprawnie wpisanych: %d\n", liczba_argumentow);

  printf("Podałes nastepujace liczby %d %d %d %d\n",  i1, i2, i3, i4);

  //char c;
  //while(scanf("%c", &c) && c!='\n'){} //jezeli c jest rozne od znaku nowej lini. czyszczenie bufora.
                                      // petla działa do napotkania znaku nowej lini.

  // inny sposob na czyszczenie bufora
  while (getc(stdin)!='\n') {}/* pobieramy(bez zapisywania) to co jest w buforze
  do momentu znaku nowej linii '\n' */


  puts("jak masz na imie?");
  char imie[10]; //napis typu tablica
  scanf("%9s", imie); // pobiera tylko dziewiec znakow nie stosuje ampersand w scanf do napisu
//  printf("Twoje imie to: %s\n", imie);

 char d;
 while(scanf("%c", &d) && d!='\n'){}

  int wiek=0;
  printf("Ile masz lat\n");
  scanf("%d", &wiek);
  printf("Nazywasz sie %s i masz %d lat\n", imie, wiek);

  return 0;
}
