#include<stdio.h>

int main(){
    int a1[3][3] = {{2, 8, 4},{9, 3, 4},{6, 7, 8}};
    int a2[3][3] = {{3, 6, 7},{1, 2, 3},{8, 6, 4}};
    int a3[3][3], sum = 0, i, j, k;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            sum = 0;
            for(k = 0; k < 3; k++){
                sum = sum + a1[i][k] * a2[k][j];
            a3[i][j] = sum;
            }
        }
    }
    printf("\nMatrix 1: \n");
    for(i=0; i<3; i++){
      for(j=0; j<3; j++)
         printf("%d\t", a1[i][j]);
      printf("\n");
   }
    printf("\nMatrix 2: \n");
    for(i=0; i<3; i++){
      for(j=0; j<3; j++)
         printf("%d\t", a2[i][j]);
      printf("\n");
   }
   printf("\nMultiplication of the two given Matrices: \n");
   for(i=0; i<3; i++){
      for(j=0; j<3; j++)
      printf("%d\t", a3[i][j]);
      printf("\n");
   }
}