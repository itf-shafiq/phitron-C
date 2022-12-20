#include <stdio.h>
#include <string.h>
int main(){

//Problem 02 Palindrome

char a[100000];
char b[100000];
fgets(a,sizeof(a),stdin);
int len=0,i;

for(int i=0; a[i] != '\0'; i++){
    len++;
}
for(int j=0, i=len-1; i--, i>=0;  j++){
    b[j] = a[i];
}
int d = strcmp(a,b);

if( d == 1){
    printf("Yes");
}else{
    printf("No");
}
    return 0;
}