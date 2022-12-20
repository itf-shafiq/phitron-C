#include <stdio.h>
int main(){
    int n,count1=0,count2=0,tem1=0,tem2=0; 
    scanf("%d", &n); 
    char s[n+1];
    for(int i =0; i <= n; i++){
    fgets(s,sizeof(s),stdin);
    }
    for(int i=0; s[i] != '\0'; i++){
        if(s[i] == '+'){
            count1++;
            tem1 = count1;
        }else{
            count2++;
            tem2= count2;
        }

    }


    if( tem1 > tem2){
        printf("%d",tem1);
    }else{
        printf("%d",tem2);
    }

    return 0;
}