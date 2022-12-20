#include <stdio.h>
int main(){
// Problem 03
char str1[100000]; 

fgets(str1, sizeof(str1),stdin);
int v=0,c=0,o=0,n=0,i=0;
while(str1[i] != '\0'){
    if(str1[i] == 'a' || str1[i] =='e' || str1[i] =='i' || str1[i] =='o' || str1[i] =='u'
    || str1[i] == 'A' || str1[i] =='E' || str1[i] =='I' || str1[i] =='O' || str1[i] =='U'){
        v++;
    }else if(str1[i] >= 'a' && str1[i] <= 'z' || str1[i] >= 'A' && str1[i] <= 'Z' ){
        c++;
    }else if(str1[i] >= '0' && str1[i] <= '9' ){
        n++;
    }else{
        o++;
    }
    printf("%c ",str1[i]);

    i++;

}

printf("Vowel- %d \n",v);
printf("Consonet- %d \n",c);
printf("Number- %d \n",n);
printf("Other- %d \n",o);


    return 0;
}