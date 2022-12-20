#include <stdio.h>
int main() {

int n,k,i,j=0,prnt;
scanf("%d", &n);
int roll[n];

for( i = 0 ; i < n ; i++){
    scanf("%d", &roll[i]);
    
}
scanf("%d", &k);
prnt = k;
if(k > 0 && k!=n){    
    for( k ; k < n; k++){
        printf("%d ", roll[k]);
    }
    for( k = 0; prnt > k; k++){
        printf("%d ", roll[k]);
    } 
    
}else if(k == n){
    for(k = n-1 ; k >= 0 ; k-- ){
    printf("%d ", roll[k]);
    
    }
}else if (k == 0){
    for(k = 0 ; k < n; k++){
    printf("%d ",roll[k]);
    }
} 

    

////////////////////////////////////////////////////////

/* long long int n,handshake;
scanf("%lld", &n);
handshake = (n*(n-1))/2 ;
printf("%lld",handshake); */

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
