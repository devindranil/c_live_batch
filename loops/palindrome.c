#include <stdio.h>

int main() {
    int n, c, rev = 0, r;
    
    printf("Enter any number: ");
    scanf("%d", &n);    
    c = n;
    
    //logic
    while (n > 0){
        r = n % 10;
        rev =r+(rev*10);
        n = n / 10;
    }
    
    if (c == rev){
        printf("Given number is a palindromic number"); 
    }
    else{
        printf("Given number is not a palindromic number"); 
    }    
    return 0; 
} 

/**
 * @brief 
 * n=121 12 1 0
 * c=121
 * rev=0 1 12 121
 * r = 1 2 1
 * n>0 121>0 12>0 1>0 0>0
 * r=n%10 121%10 12%10 1%10
 * rev=r+(rev*10) 
 * 1+0=1 2+(1*10) 1+(12*10)
 * n=n/10 121/10 12/10 1/10
 * n=12 1 0
 * 
 * c==rev
 * 121==121
 */