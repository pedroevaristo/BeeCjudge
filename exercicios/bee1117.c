#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main(){
float x,y, v[2];
int c;

for(c = 0; c <2; c++){
    scanf("%f", &v[c]);

    if(v[c] < 0){
        printf("Invalido a nota.");
        break;
    }
    x = v[0] + v[1]/2;
}

printf("media: %f", x);
}