#include<stdio.h>
int main(){

    int n;
    int a=0;
    int b=1;
    int c;
    int i;

    printf("Enter number of term....");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
}

/**
 * @brief n=7
 * a=0 1 1 2
 * b=1 1 2 3
 * c=1 2 3
 * i=1 2 8
 * i<=n 1<=7 2<=7 3<=7 8<=7
 * printf a 
 * c=a+b 0+1 1+1 1+2 
 * a=b a=1 a=1 a=2
 * b=c b=1 b=2 b=3
 * 
 * series - 0 1 1
 * 
 */

