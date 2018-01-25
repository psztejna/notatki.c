#include <stdio.h>
//instrukcja pozwalajaca sprawdzac warunki, wykonywac pewne akcje pod jakims warunkiem


int main(int argc, char const *argv[]) {
  int a =51;
  char znak = 'A';
  char* napis = "pawel";
  float b = 50.5;

  if(a==50){ // (== zwraca 0 lub 1)
  printf("a jest rowne 50\n"); // to jest cialo - wykona sie jesli zostanie spelniony warunek powyzej.
  }

  else if (a <50) { // sprawdzam kolejny warunek
    printf("a jest mniejsze od 50\n");

  }else { // jezeli zaden z powyzej sie nie spelniony wykona sie blok else.
    printf("a jest wieksze od 50\n");
  }

  if(a){ // w nawiasie wyrazenie logiczne ( 0/1), jezeli ma 1 to wchodzi do bloku ifa
      // wszystkie liczby rozne od zera maja wartosc logiczna 1

  printf("a jest rozne od 0\n");
  }

  if(a >= 25 && a <=77){ // && operator i wyrazenie da 1 jesli oba warunki spelnione
    printf("a znajduje sie w przedziale {25,75}\n");


  }else{
    printf("a znajduje sie poza przedzialem {25,75}\n");
  }

  if (a || !a){ // || operator lub wiec wystarczy jeden warunek do wykonania ifa. ( !a to negacja a)
  printf("Ten napis wyswietli sie zawsze\n");
  }

  if(znak == 65){
    printf("znaj jest rowny 65, poniewaz 'A' jest rowne 65\n");
  }

  if (b == 50) {// mozna porownywac zmiennoprzecinkowe do calkowitych
    printf("50.0 jest rowne 50\n");
  } else{
    printf("50.5 jest rozne od 50\n");
  }

  if(napis == "pawell"){
    printf("taj napis jest rowny pawel\n");
  }else {
    printf("Nie, napis nie jest rowny pawell lecz %s\n", napis);
  }

  /*
  if(a==5){
  a=b
  }else{
  }
  */

// a=((a==5) ? b : c);

  a=50;
  printf("Zmienna b jest %s 50\n", (a>50) ?"wieksza od" : "mniejsza badz rowna");
  // skrocony zapis if else (argument) ? "tak" : "nie".



  return 0;
}
