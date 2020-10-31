#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int i,n,x,y;
int marks[65];
int main(){
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&marks[i]);
    }
    for(x=0;x<n;x++){
        if(marks[x]>35){
        if(marks[x]%5==3){
            marks[x]=marks[x]+2;
        }
        if(marks[x]%5==4){
            marks[x]=marks[x]+1;
        }
        }
    }
    for(y=0;y<n;y++){
        printf("%d\n",marks[y]);
    }
    return 0;
}

