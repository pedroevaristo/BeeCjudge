#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int kl(int h);

int main(){
int v[5], x,y;

    for(y=0; y<5; y++){
        scanf("%d", &v[y]);
    }
    x = 0;
    for(y=0; y<5; y++){
        if(v[y]%2 == 0){
            x++;
        }
    }
    printf("%d valores pares", x);
}
