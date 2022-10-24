/* #include <stdio.h>

int main() {

    int a;
    printf("Enter your number: ");
    scanf("%d", &a);

    if (a > 0 && a%2 == 0){
        printf("The number %d is an even number", a);
    
    } 

    else if ( a > 0 ){
        printf("The number %d is a odd number", a);
    }

    else {
        printf("input number is not a positive number");
    }
    return 0;
} */

#include <stdio.h> 

int main(){

    int a,b;
    printf("Enter Two number: ");
    scanf("%d%d", &a,&b);

    if( a > b){
        printf("number A is greater");
    }
    else{
        printf("Number B is greater");
    }
    return 0;
}
