#include <stdio.h>
int main(){

/* int n = 10;
int x = 5;
int index = 0;
int a[] = {12, 7, 3, 71, 2, 43, 38, 23, 45, 22};
int b[n];
for (int i=0; i<n; i++) {
	b[i] = a[i]+5;
} 

for (int j=0; j<n; j++) {
	printf("%d, ", b[j]);
}  */

/* Suppose you want to declare an array of size 15 and the elements of the array will be in a geometric progression, the first one starting with 1 and the common ratio being 2. For example, the first few elements of that array will be 1, 2, 4, 8, 16 , … and so on. Write a for loop to initialize the array with the  required progression.	(10) 	

int n=15,ratio=2,p=0;
int a[n]; 

// a[0] = 1; 
// printf("%d",a[0]); 

 for(int i=1; i <= n ; i++){
    if(i == 1){
        p = a[i] = 1;
    }else{
        p = a[i] = p*ratio;
    }
    
}

for(int j=1; j <= n; j++){
    printf("%d = %d, \n", j, a[j]);
} */

/* char a[10];
	a[0] = 98;
	a[1] = 97;
	a[2] = 'n';
	a[3] = 'a';
	a[4] = 'n';
	a[5] = 'a';
	a[6] = '\0';

for(int i=0; a[i] != '\0'; i++){
    printf("%c",a[i]); 
} */

/* char a[10];
		char ch = 'a';
		for(int i = 0; i<8;i++)
		{
			a[i] = ch+8-i;
		}
		a[8] = '\0';

        for(int j=0; j<8; j++){
            printf("%c",a[j]);
        } */

    long long int a,sum=0,b=0; 
    scanf("%lld", &a);
    
    for( ; a > 0 ; ){
        b = a%10;
        a = a/10;
        sum+=b;
    }
    printf("%lld",sum);


    return 0;
}