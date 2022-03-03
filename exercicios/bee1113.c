#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
int x,y,z,a, v[4][2];

    for(x=0;x<4;x++){
        for(y=0;y<2;y++){
            scanf("%d %d", &v[x][y]);
        }
    }
    printf("\n-----\n");
    for(x=0;x<4;x++){
        for(y=0;y<2;y++){
            printf("%d %d\n", v[x][y]);
        }
    }
}