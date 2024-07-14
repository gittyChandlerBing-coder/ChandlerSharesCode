#include <stdio.h>

void fabo(int q){
    int f1=0,s,f2=1,i;
    if (q == 0 || q == 1){
        printf ("%d ",f1);
    }
    if (q > 1){
        for (i=0; i< q-1; i++){
            if (i==0){
                printf("%d ",f1);
            }
            printf("%d ",f2);
            s = f1+f2;
            f1=f2;
            f2=s;
        }
    }
}

void main(){
    int n;
    printf ("enter term upto which fabonaci series to be printed");
    scanf ("%d",&n);
    fabo(n);
}
