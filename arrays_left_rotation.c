#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int d; 
    scanf("%d %d",&n,&d);
    int *a = malloc(sizeof(int) * n);
    int *a2 = malloc(sizeof(int) * n);
    
    for(int i = 0; i < n; i++){
       scanf("%d",&a[i]);
    }
    
    
    for(int i = 0; i < n; i++){
       if((i+d)<n){
           a2[i]=a[i+d];
       }
        else {
            a2[i]=a[i+d-n];
        }
    }
    
    
    for(int i = 0; i < n; i++){
       printf("%d ",a2[i]);
    }
    
    
    return 0;
}