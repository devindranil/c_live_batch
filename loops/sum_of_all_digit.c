#include<stdio.h>
int main(){
    /**
     * input a number
     * example - 123 
     * result - 6
     */
    int n;//to store the number
    int sum=0;//to calculate the result
    int r;//to store the remainder value

    //taking user input
    printf("Enter a Number: ");
    scanf("%d",&n);

    //logic of calculate 
    while(n>0){
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("The sum of number is: %d",sum);
    return 0;

}
