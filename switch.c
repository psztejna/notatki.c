//switch instrukcja warunkowa działa tylko na int (liczbach calkowutych)

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int ocena =1;

  switch (ocena) {

    case 1:
      printf("Switch : Jedynka\n");
      break; // break powoduje przerwanie instrukcj i przejscie do ostatniej klamerki
// wazne - jesli zabraknie break program wykona kolejne case, bez sprawdzenie czy case jest spelniony do momenty napotkania "break"
    case 2:
      printf("Switch : dwojka\n");
      break;

    case 3:
      printf("Switch : trojka\n");
      break;

    default: // cos jak else w if, jesli nie ma zadnego case wiec wejdzie w defoult.
      printf("Switch : ocena nie znana\n");

  }
// to samo z zastosowaniem if - działa szybciej

  if(ocena == 1){
    printf("IF: jedynka\n");
  }else if (ocena ==2 ){
    printf("IF : dwojka\n");
  }else if (ocena ==3 ){
    printf("IF : trojka\n");
  }else if (ocena ==4 ){
    printf("IF : czworka\n");
  }else{
    printf("IF: nieznana ocena\n");
  }



  return 0;
}
