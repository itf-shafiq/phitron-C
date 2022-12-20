#include <stdio.h>
int main(){
    // Bouble sort practice

    int arr[8] = {7,5,9,2,8,6,4,3};
    int temp;

    for(int i=0; i < 8; i++){

        for(int i=0; i < 8-1; i++){
            if( arr[i] > arr[i+1]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;

            }
        }

        for(int i=0; i < 8; i++){
            printf("%d, ", arr[i]);
        }

        printf("\n");

    }



    return 0;
}