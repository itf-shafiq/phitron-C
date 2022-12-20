#include <stdio.h>

/* Write a C program to take one positive integer N as input and print from 1 to N.
Sample Input: Sample Output:
5               1 2 3 4 5
1                   1 
*/
int main(){

    int i,n;
    scanf("%d", &n);
    if( n > 0){
        for(i = 1 ; n >= i; i++){
        printf("%d ", i);
    }
    } else{
        for(i = 1 ; n >= i; i--){
            printf("%d ", i);
    } }
    /* printf("\n%d",n); */
    return 0;
}