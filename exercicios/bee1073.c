#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
int x,y, t;
scanf("%i",&y);
    t = 0;
    for(x=1;x<=6;x++){
        if(x % 2 == 0){
                t=  x * x;
            printf("\n%i x 2: %i", x, t);

        }
    }
}