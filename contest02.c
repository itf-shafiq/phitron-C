#include <stdio.h>

int main(){

    long long int t,i;
    scanf("%lld", &t);
    long long int n,j, count =0;
    for(i = 0 ; i < t ; i++){
        scanf("%lld", &n);
        for( j = 2; n >= j ; j++){
            if( n%j == 0){
                count++;
            }
        }
        if( count > 0){
            printf("No ");
        }else{
            printf("Yes ");
        }
    }

  /*   printf("%lld ", count); */
    return 0;
}