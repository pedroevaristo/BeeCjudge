#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int k(int *l, int d);

int main(){
int h,g,j, v[3];
    for(g = 0; g <3; g++){
        scanf("%d", &v[g]);
    }
     h = k(v,3);

    printf("%d", h);
}
f =0;
int k(int *l, int d){
    int g, f;
    for(g = 0; g <3; g++){
        if(l[g] % 2 == 0){
            f++;
        }
    }
    return f;
}