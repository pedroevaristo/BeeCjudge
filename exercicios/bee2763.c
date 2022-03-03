#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

void n(int *f, int O);
void d();


int main(){
int x[3], y[3], z[3], d[2];

    for(int h =0; h <3; h++ ){
        scanf("%d", &x[h]);
    }
    for(int j =0; j <3; j++ ){
        scanf("%d", &y[j]);
    }
    for(int l =0; l <3; l++ ){
        scanf("%d", &z[l]);
    }
    for(int g =0; g <2; g++ ){
        scanf("%d", &d[g]);
    }
    //_____________________________________
        for(int h =0; h <3; h++ ){
        printf("%d", x[h]);
        }
        printf(".");
        for(int j =0; j <3; j++ ){
        printf("%d", y[j]);
        }
        printf(".");
        for(int l =0; l <3; l++ ){
        printf("%d", z[l]);
        }
        printf("-");
        for(int g =0; g <2; g++ ){
        printf("%d", d[g]);
        }
}