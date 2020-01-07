#include <stdlib.h>
#include <stdio.h>

int *num;
int *num2;
int main(){
    num = malloc(sizeof(int));
    *num = 0;
    num2 = num;
    printf("%d\n", *num);
    free(num2);
    printf("%d\n", *num);
    return 0;
}