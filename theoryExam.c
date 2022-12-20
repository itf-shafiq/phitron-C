#include <stdio.h>

int main(){

//Question 01
 /* int a=5,b=13;
   int c=a;
    a=b;
    b=c;
    
    printf("%d and %d",a,b); */

    //Question 03,04

 /*    long long int a; 
    int counta = 0, sum=0,b;
    scanf("%lld",&a);
    for(; a > 0; ){
      b=a%10;
      a = a/10;
      counta++;      
      printf("%d, ",b);
      sum+=b;
      
    }
    printf("%d and %d",counta, sum); */

//question 05
/*     long long int n; 
    scanf("%lld",&n);
    for(; n >1;){
      printf("%lld ,", n);
      if(n%2 == 0){
        n= n/2;
      }else{
        n=n-1;
      }
    }
    printf("%lld",n); */

    //Question 06
  /*   long long int a,b;
    scanf("%lld%lld", &a,&b);
    if(b%a == 0){
      printf("The second number is divisible by the first number");
    }else if(a%b == 0){
      printf("The first number is divisible by the second number");
    }else{
      printf("None of them are divisible by the other. ");
    } */

    //Question 09
/* 
    long long int a,i;
    scanf("%lld",&a);

    if(a==0){
      printf("%lld",a);

    }else if(a==1){
       printf("%lld",a);
    }else{
      printf("1, ");
    for(i=2; a > i; i++){
      if(a > 0 && a%i == 0){
        printf("%lld, ",i);
      }
    }
    printf("%lld",a);
    } */

    // Question 10
/*     long long int a,i,count=0;
    scanf("%lld",&a);
    for(i = 2; i < a ; i++){
      if(a%i == 0){
        count++;
        break;
      }
    }
    if(count > 0){
      printf("Composit");
    }else{
      printf("Prime");
    } */

    // question 7
/*     long long int a,b,c,d,gcd,rem,lcm;
    scanf("%lld%lld", &a, &b);
   
    for(c = a , d=b; d != 0;){
      rem = c%d; 
      c=d;
      d=rem;
      gcd=c; 
                
    } 
    lcm = (a*b)/gcd;
    printf("The LCM of %lld and %lld is %lld. ", a,b,lcm); */
    
   // Question 2

   long long int a,b,c,d;
   scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
   if(a>b && a>c && a>d && b<a && b<c && b<d){
    printf("Leargest = %lld",a);
    printf("Smallest = %lld",b);
   }
   else if (b>a && b>c && b> d && a<b && a<c && a<d){
    printf("Leargest = %lld",b);
    printf("Smallest = %lld",a);  
   }
   else if (c>a && c>b && c> d && a<b && a<c && a<d){
    printf("Leargest = %lld",c);
    printf("Smallest = %lld",a);  
   }     
 
     
    return 0;
}