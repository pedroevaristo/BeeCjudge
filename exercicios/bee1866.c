#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main(){
int x,z, j,k;
scanf("%i", &x);
    j = 1;
    k = 1;
    for(z=0; z<x;z++){
        k -= j;
        j += k;  
    }
    printf("%i", abs(j));
}