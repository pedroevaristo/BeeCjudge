#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
int m,n;
    scanf("%d", &n);
    m = 1;
    do{
        if(n % m == 0){
        printf("%d", m);
        }
        m++;
    }while(m <= n);
printf("\n_________\n");
    int j = 1;
    while(j <= n){

        if(n % j == 0){
        printf("\n!%d", j);
        }
        j++;
    }
}/*
if(n % 2 == 0){
            printf("");
        } */