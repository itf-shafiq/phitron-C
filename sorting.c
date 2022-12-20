#include <stdio.h>
int main(){

    // sorting algorithm practice 
/*     int arr[8] = {12, 7, 9, 3, 15, 2, 6, 5}; 
    int sort_arr[8];

    
    for(int k=0; k < 8; k++){
        printf("%d, ",arr[k] );
    }
    printf("\n");
   for(int p=0; p < 8 ; p++){
    int min = arr[0];
    int min_index = 0;

    for(int i =0; i < 8; i++){
        if(arr[i] < min){
            min = arr[i];
            min_index = i;
        }

    }

    sort_arr[p] = min;
    arr[min_index] = 99999;



    } 

    for(int j=0; j < 8; j++){
        printf("%d, ", sort_arr[j]);
    } */

    int arr2[8] = {8,5,3,1,9,12,4,6};
    int sort_arr2[8];

    for(int i =0; i < 8 ; i++){
        printf("%d, ", arr2[i]);
    }

    printf("\n");

    for(int i=0; i < 8 ; i++){
        int min= arr2[0], min_index=0;

        for(int j=0; j <8 ; j++){
            if( arr2[j] < min){
                min = arr2[j]; 
                min_index = j;
            }
        }

        sort_arr2[i] = min;
        arr2[min_index] = 9999999;
    }

    for(int i = 0; i < 8 ; i++){
        printf("%d, ", sort_arr2[i]);
    }



    return 0;
}