#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int h(int n);
int j(int j1);
int b(int b1);

int main(){
int x,y,z, a,g,d, V;
    int H = 0,J = 0,B = 0;
    for(x=0; x < y; x++){
        scanf("%d", &z);
       
        if(z > 4){
           y = z;
        }

        if(z == 4 ){
           break;
        }
        V = h(z);
        H = j(z);
        B = b(z);
    }
    printf("Passou pela funcao: %d\n", V);
    printf("Passou pela funcao: %d\n", H);
    printf("Passou pela funcao: %d\n", B);
}



int h(int n){
int a = 1;

    if(n == 1){
        a++;
    }
return a;
}


int j(int j1){
    int g = 1;

   if(j1 == 2){
        g++;
        } 
    return g;
}

int b(int b1){
int d = 1;
    if(b1 == 3){
            d++;
        }
        return d;
}