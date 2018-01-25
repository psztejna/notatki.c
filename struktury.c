//struktury
#include <stdio.h>
#include <stdlib.h>


//struktura moze byc w oddzielnym pliku  .h
struct user{ //nazwa
  int userID; //members of structure
  char firstName[25];
  char lastName[25];
  int age;
  float weight;
};

int main(int argc, char const *argv[]) {

  struct user bucky;
  struct user emily;
//operator kropka sluzy do dotepu do indywidualnych elementow/members struktury
  bucky.userID = 1;
  emily.userID = 2;

  puts("Enter first name of user 1");
  scanf("%s", bucky.firstName);

  puts("Enter first name of user 2");
  scanf("%s", emily.firstName);

  printf("User 1 id is %d\n", bucky.userID);
  printf("User 2 first name is %s\n", emily.firstName);



  return 0;
}
