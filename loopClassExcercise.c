#include <Stdio.h>

/* 1. Write a program in C to display the first 10 natural numbers.
Expected Output :
1 2 3 4 5 6 7 8 9 10 */

/* 2. Write a C program to find the sum of the first 10 natural numbers.
Expected Output :
The first 10 natural number is :
1 2 3 4 5 6 7 8 9 10
The Sum is : 55
*/

/* 3. Write a program in C to display n terms of natural number and their sum.
Test Data : 7
Expected Output :
The first 7 natural number is :
1 2 3 4 5 6 7
The Sum of Natural Number upto 7 terms : 28
*/

/* 4. Write a program in C to display the Square of the number upto given an integer.
Test Data :
Input number of terms : 5
Expected Output :
Number is : 1 and Square of the 1 is :1
Number is : 2 and Square of the 2 is :4
Number is : 3 and Square of the 3 is :9
Number is : 4 and Square of the 4 is :16
Number is : 5 and Square of the 5 is :25

Solve the problems using for and while loop
*/

int main(){

    // Ex 01 
/*     int i,n = 0;
    for (i = 1; i <= 10 ; i++){
        n=i;
        printf("%d ", n);
    }
     */

    // Ex 02
/*     int sum =0,i;
    for(i =1 ; i <= 10 ; i++){
        sum=sum+i;
    }
    printf("The sum is: %d", sum); */

    // Ex 03
   int i,n,sum=0;
    scanf("%d", &n);
    printf("The first 7 natural number is : ");
    for( i = 1 ; i <= n ; i++){
        printf("%d ", i);
        sum=sum+i;
    }
    printf("\nThe sum of Nth Number is: %d", sum); 

    // Ex 04
 /*    int i,n,m=0;
    scanf("%d", &n);
     for( i = 1 ; i <= n ; i++){

        m=i*i;
        printf("Number is: %d And Square of Number %d is : %d \n",i,i,m);
    }  */

    return 0;
}