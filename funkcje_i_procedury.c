#include <stdio.h>

void proc2(void);
void proc3(void);

int iloczyn(int c, int d)/*naglowek funkcji*/{ /* nazy zmiennych moga byc dowolne nie musi byc jak w main */
  return c*d; // zatrzymuje dzialanie fynkcji i zwraca wartosc (c*d)
}

void komunikat(void){ // procedura to funkcja z typem void - typ pusty oznaczajacy brak wartosci
  // jeli w nawiasie nie ma void to funkcja moze przyjmiwac jakies argumenty
  puts("Wyswietlanie komunikatu!!");
  //return 0; - nie mozesz bo nie ma wartosci do zwrocenia
  return; // bez wartosci jest ok bo tylko konczy procedure
  puts("ten tekst sie nie wyswietli jesli przed nim bedzie return");
}

void komunikat_2(int a){
  puts("wyswietlam komunikat_2");
  if(a==5){
    return komunikat_2(4);// mozna zwrocic procedure ale trzeba uwazac na zapetlwnie
  }
  puts("ten tekst");// jezeli a == 5 to ten tekst sie nie wyswietli
}

  float zaokraglenie(float a){
    return(int)(a+0.49f);//nastepuje dodanie do np 1.5 + 0.49 co daje 1.99 -
    // int zamienia to na 1 (odejmuje dziesiatki) nastepnie funkcja zwraca 1.0f do main
  }

void proc1(void){// w argumencie procedury void !
  puts("proc1 start");
  proc2();
  puts("proc1 koniec");
}

void proc2(void) {            // zeby nie bylo warningow trzeba dopisac 'prototypy'/deklaracja tych procedur
  puts("proc2 start");      // na poczatku programu.
  return proc3(); // proc 2 koniec sie nie wyswietli bo return konczy to procedure
  puts("proc2 koniec");
}

void proc3(void) {
  puts("proc3 start");
  puts("proc3 koniec");
}


int main() {

  proc1();
  float f;
  puts("podaj liczbe z przecinkiem");
  scanf("%f", &f);
  printf("Podales liczbe %.2f a po zaokragleniu to %.2f\n", f, zaokraglenie(f));

  puts("podaj 2 liczby");
  int a, b;
  scanf("%d %d", &a, &b);
  printf("Iloczyn liczby %d i %d wynosi %d\n", a, b, iloczyn(a,b)); /*wywolana funkcja musi
  posiadac argumenty (,) ktore trafiaja do funkcji gdzie sa przypisane argumentom w funkcji*/
  komunikat();
  komunikat_2(4);
  return 0;
}
