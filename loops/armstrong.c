#include <stdio.h>

int main() {
    int n, c, arm = 0, r;
    
    printf("Enter any number: ");
    scanf("%d", &n);    
    c = n;
    
    //logic
    while (n > 0){
        r = n % 10;
        arm =(r*r*r)+arm;
        n = n / 10;
    }
    
    if (c == arm){
        printf("Armstrong Number"); 
    }
    else{
        printf("Not a A rmstrong Number"); 
    }    
    return 0; 
} 

/**
 * @brief 
 * n=153 15 1
 * c=153
 * arm=0 27 152 153
 * r = 3 5 1
 * n>0 153>0 15>0 1>0 0>0
 * r=153%10 15%10 1%10
 * 
 * arm=3*3*3+0 5*5*5+27 1*1*1+152
 * n=15 1 0
 * 
 * c==arm
 * 153==153
 * 
 */