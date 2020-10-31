#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i,x,n;
float sump,sumn,sumz;
float dsump,dsumn,dsumz;
int ar[200];
int main(){
    scanf("%d",&n);
     for(i=0;i<n;i++){
         scanf("%d",&ar[i]);
     }
     sump=sumn=sumz=0;
     for(x=0;x<n;x++){
         if(ar[x]<0){
             sumn=sumn+1;
         }
         else if(ar[x]>0){
             sump=sump+1;
         }
         else{
             sumz=sumz+1;
         }
         
     }
     dsump = (sump/n);
     dsumn = (sumn/n);
     dsumz = (sumz/n);
     printf("%.6f\n",dsump);
     printf("%.6f\n",dsumn);
     printf("%.6f\n",dsumz);

     return 0;

}

