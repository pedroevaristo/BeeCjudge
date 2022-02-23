#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
int x,y;
int z,t,a,k;

scanf("%i", &x);//ponto inicial
scanf("%i", &y);//quantid. de vezes

    z = x;
    a = 0;
    t = 0;

    do{
        if(z % 2 == 1){
            a++;
            t += z;
        }
        z++;
    }while(a < y);

    printf("%i", t);

}