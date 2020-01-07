#include <stdio.h>
#include <stdlib.h>

int i,j,k;
int **matrix;
int **aux;

int main(){
    i = 10; 
    j = 10;

    matrix = malloc(sizeof(int*)*i);

    for(k=0; k<i; k++)
        matrix[k] = malloc(sizeof(int)*j);
    
    for(i=0; i<10; i++)
      for(j=0; j<10; j++)
            matrix[i][j] = i*j;

    aux = matrix;
    for(i=0; i<10; i++){
      for(j=0; j<10; j++)
            printf("%d ",matrix[i][j]);
      free(matrix[i]);
      printf("\n");
    }
    free(matrix);
    printf("***************\n");

    for(i=0; i<10; i++)
      for(j=0; j<10; j++){
            matrix[i][j] = i+j;
      }

    for(i=0; i<10; i++){
      for(j=0; j<10; j++){
            printf("%d ",matrix[i][j]);
      }
      printf("\n");
    }
    return 0;
}
