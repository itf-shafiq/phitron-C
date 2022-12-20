#include <stdio.h>

int main(){

char sen[1000];

fgets(sen,sizeof(sen),stdin);
int count=0, i = 0;

for(i = 0 ; sen[i] != '\0'; i++){
if (sen[i] == 'a' || sen[i] == 'e' || sen[i] == 'i' || sen[i] == 'o' || sen[i] == 'u'){
    count++;
}
}
printf("%d", count);

    return 0;
}