#include <stdio.h>
#include <math.h>

//function to convert decimal to binary
int Conv_D2B(int z,int q){
    if (z == 0){
        return 0;
    }
    else{
        return ((z%2) * pow(10,q)) + Conv_D2B(z/2,q+1);
    }
}

int main (){
    int n,q=0;
    printf("enter decimal number for binary conversion :");
    scanf("%d", &n);
    printf("the binary equivalent of given number is %d",Conv_D2B(n,q));
    return 0;
}
