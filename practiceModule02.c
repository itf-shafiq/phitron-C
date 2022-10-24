// problem 01: 

/* #include <stdio.h>

int main(){

    int a,b;
    printf("Enter 2 integir number: ");
    scanf("%d%d", &a,&b);
    if (a > b && a != b ){
        printf(" Numbe a is Greater");
    } else if ( a < b && a != b){
        printf(" B is greater ");
    } else{
        printf(" A and b is equal");
    }
    return 0;
} */

// problem 02

/* #include <stdio.h> 

int main(){

    int a,b,c;
    printf("enter 3 intiger Number: ");
    scanf("%d%d%d", &a,&b,&c);
    if (a > b && a > c && a !=b !=c){
        printf(" A is bigger");
    }
    else if ( b > a && b > c && a != b != c){
        printf(" B is bigger");
    } else if( c > a && c > b && a != b != c){
        printf(" C is bigger");
    }else{
        printf("A,B and C is equal");
    }
    return 0;
} */

// problem 2.1

/* #include <stdio.h> 

int main(){

    int a,b,c;
    printf("Enter 3 intiger: ");
    scanf("%d%d%d", &a,&b,&c);

    if( b > a && c == b){
        printf(" B and C is bigger");
    } else if ( a > b && a == c ){
        printf(" A and C are bigger");
    } else{
        printf(" A and B are bigger");
    }
    return 0;
} */

#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int X,Y;
    char per;
    scanf("%d%%%d%%", &X,&Y);
        
    int Z = X*Y; 
    printf("%d%%", Z);
    return 0;
}