#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<locale.h>

int main(){
int x,t = 0,k,y;
int n[7] = {100,50,20,10,5,2,1};
    
    scanf("%i", &x);
    
    printf("%i\n", x);

    printf("%i\n", x/100);
    
    x = x % 100;

    printf("%i\n", x/50);
    
    x = x % 50;

    printf("%i\n", x/20);
    
    x = x % 20;

    printf("%i\n", x/10);
    
    x = x % 10;

    printf("%i\n", x/5);
    
    x = x % 5;

    printf("%i\n", x/2);
    
    x = x % 2;

    printf("%i\n", x/1);
    
    x = x % 1;
}