#include <stdio.h> 

int main(){

 /*    long long int n,i;
    scanf("%lld",&n);
   while( n > 1){
    printf("%lld ",n);
    if( n % 2 == 0){
        n = n/2;
    }else{
        n=3*n+1;
    }
   }
   printf("%lld \n",n);  */

/*   long long int n;
   scanf("%lld", &n);
   for (int i = n ; i >1; ){
    printf("%lld ", n);
    if( i % 2 == 0 ){
        i = i/2;
        n = i;
    }else{
        i = 3*i+1;
        n =i;
    }
   }
   printf("%lld", n);  */

   int w;
   scanf("%d", &w);
   if( w >= 1 && w <= 100 &&  w%4 == 0 || w%6 == 0){
    printf("Yes");
   }else{
    printf("No");
   }

    return 0;
}