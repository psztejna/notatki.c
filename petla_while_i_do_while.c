#include <stdio.h>

//petle wykonuja ciag instrukcji kilka razy/wielokrotnie

int main() {

  int a=6;
  puts("petla while");

  while(a < 5){ //wykonana zostaje ta linijka jezeli warunek spełniony to wchodzi do bloku
    ++a; // zwiekszam a o 1
    printf("%d\n", a); // program dochodzi do konca petli ale nie wychodzi z niej
    // tylko wraca na poczatek petli i ponownie sprawdza czy wytrazenie jest prawdziwe i
    // tak do chwili gdy wyrazenie jest falszywe
  }

  puts("petla do while:");
  a = 6;
  // roznice:
  do{ // ten blok w przeciwienstwie do petli while wyjona sie zawsze przynajmniej raz
    ++a;
    printf("%d\n", a);
  }while(a < 5); // nastepnie sprawdza warunek i jesli jest spelnione to wraca na poczatek

  /* w petli do while wykona sie przynajmnie raz - nawet jak warunek nie jest spelnione
  w tym przypadku dajac jako a = 6, petla while nie wykona sie natomiast
  do while wykona sie raz dajac 7 nim przestanie dzialac */

  puts("\nKwadraty liczb");
    a=0;
    while (a*a < 100){ // warunek przy ostatnim przejscu petli: 9*9 <100 - spelnione wchodzi do bloku
      ++a; // do 9 dodaje 1 czyli w tym miejscu a = 10
      printf("%d\n", a*a); // drukuje 10*10 bo teraz w bloku a=10
    }
    puts("\nKwadraty liczb wraz z if jako wyjatek");
      a=0;
      while (a*a < 100){
        ++a;
        if(a*a == 81){ // jezeli a*a tozsame z 81 to wraca na poczatek petli bez tego co ponizej
          continue;//przerywa iteracje(wykonanie ciagu instrukcj zawartych w ciele petli) petli i wraca na poczatek
          //break; // jezeli if spelnione przerywa petle i koniec
          //return 0;// zakancza nie tylko dzialanie petli ale tez dzialanie calej funkcji main
        }
        printf("%d\n", a*a);
      }

      puts("koniec programu");
  return 0;
}
