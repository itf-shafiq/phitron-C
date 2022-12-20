#include <stdio.h>
#include <string.h>
int main(){

    char s[100];
    long long int a,b,sum=0,sum1=0,sum2=0;

    fgets(s, sizeof(s), stdin);
    scanf("%lld%lld", &a,&b);

    for(int i =0 ; s[i] != '\0'; i++ ){
        if(s[i] == '+'){
           sum = sum+(a+b);
           /* sum =+ sum1; */
        }else if(s[i] == '*'){
            sum= sum+(a*b);
            /* sum=+sum2; */
        }
    }

    printf("%lld", sum);


    return 0;
}