#include <stdio.h>

   int main(int argc, char **argv) {
   int i, j, k;
   int arr[5][3];
   int *arr2 = (int*)arr;

       for (k=0; k<15; k++) {
          arr2[k] = k;
          printf("arr[%d] = %2d\n", k, arr2[k]);
       }

       for (i=0; i<5; i++) {
         for (j=0; j< 3; j++) {
            printf("arr2[%d][%d] = %2d\n", i, j ,arr[i][j]);
         }
       }
    }
