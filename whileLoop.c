#include <stdio.h> 

 int main(){

    int i;
    printf("Enter Your number: ");
    scanf("%d", &i);

    while( i != 1){
        
        printf("%d \n", i);
        if (i%2 ==0 ){
             i = i/2;
        }else{
             i = (i*3)+1;
            /*  printf("%d \n", i); */
        }        
    }
    printf("%d \n", i);
    return 0;
 }