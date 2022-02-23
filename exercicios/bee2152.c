#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main(){
int x,y,z, t,k;

    scanf("%i %i %i", &x, &y, &z);   
    if(z == 1){
        printf("Abriu as: ");
    }
    if(z ==0){
        printf("Fechou as: ");
    }
    printf(" %i : %i", &x, &y);
}