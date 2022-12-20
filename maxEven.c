#include <stdio.h>
int main(){

int N, max1=0,max2=0,sum=0,tem1=0;
    scanf("%d",&N);

    int arr[N];
    for(int i=0; i < N; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i < N; i++){
    for(int j=0; j < N-1; j++){
        if(arr[j] < arr[j+1]){
            continue;
        }else{
            tem1 = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = tem1;
        }
    } }


    max1 = arr[N-1];
    max2 = arr[N-2];


   if(max1 != max2){
        sum = max1+max2;
        if(sum%2 == 0){
            printf("%d",sum);
        }else{
            max2 = arr[N-3];
            sum = 0;
            sum = max1+max2;
            if( sum%2 == 0){
                printf("%d", sum);
            }else{
                max1= arr[N-2];
                sum = 0;
                sum = max1+max2;
                if(sum%2 == 0){
                    printf("%d", sum);
                }
            }
    } 
   }

    return 0;
}