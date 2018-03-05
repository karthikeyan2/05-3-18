#include <stdio.h>
#include <conio.h>  
   
int main() {  
    int num, temp;  
    long productOfDigit = 1;  
   
    /* 
     * Take a number as input from user
     */ 
    printf("Enter a Number\n");  
    scanf("%d", &num);  
    temp = num;
     
    while(num != 0){
        /* get the least significant digit(last digit) 
         of number and multiply it to productofDigit */
        productOfDigit *= num % 10;
        /* remove least significant digit(last digit)
         form number */
        num = num/10;
    } 
   
    printf("Product of digits of %d = %ld", temp, productOfDigit);  
   
    getch();
    return 0;  
}
