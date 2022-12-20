#include <stdio.h>
#include <string.h>
int main(){
    int t;
    scanf("%d",&t);

    char arr[t];

    char s1[21],s2[21];

    for(int i=0; i <= t; i++){
        fgets(s1,sizeof(s1),stdin);
        arr[i] = s1[i];
    }
    
    for(int i=0; i < t; i++){

/*     for(int j=0,p; p= strlen(s1), p--; j++ ){
        s2[j] = s1[p];
    }
    int d = strcmp(s1,s2);
    int l = strlen(s1);

    if( d == 1 && l < 7){
        printf("%s",s1);
    }else if( d == 1){
        printf("%c%d%c", s1[0],l-2,s1[l-1]);
    }else{
        printf("Not Palindrome");
    } */ 
    printf("%s ",arr[s1[i]]);
    }
     /* printf("%s",s1); */

    return 0;
}