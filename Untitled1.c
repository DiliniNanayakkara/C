#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a,i,j,k,l;
    scanf("%d",&a);
    
    for(i=1;i<a+1;i++)
        {
        for(k=1;k<=a-i;k++)
            {
            printf(" ");  
            }
        for(l=i;l>0;l--)
            {
            printf("#");
        }
        printf("\n");
        }
       
    return 0;
}

