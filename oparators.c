#include <stdio.h> 
int main(){

    int a,b;
    printf("Enter Value of a and b: ");
    scanf("%d%d", &a,&b);
    int sum = a+b;
    int subs = a-b;
    int malti = a*b; 
    float addi = a/b;
    int modi = a%b;

    printf("the value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    printf("The sum of a + b is %d \n", sum);
    printf("The substraction a and b is %d\n", subs);
    printf("the multiplication of a and b is %d \n", malti);
    printf("the addtion of a and b is %f \n ", addi);
    printf("the modulas of a and b is %d \n", modi);
    return 0;
}