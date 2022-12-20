#include <stdio.h>
int main(){
    int row = 3;
    int col = 3;
    int sumd1 =0,sumd2 =0 ,sumc = 0,sumr = 0,f =0;
    /* sumd1 = sumd2 = sumc = sumr = f= 0; */

    int arr[row][col];
    for(int i=0; i < row; i++){
        for(int j=0; j < col; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for( int i=0; i < row; i++){
        for(int j=0; j < row; j++){
            if( i == j){
                sumd1 = sumd1 +arr[i][j]; 
            }
            if(i+j == 3-1){
                sumd2 = sumd2+arr[i][j];
            }
        }
    }

    if( sumd1 != sumd2){
        f = 1;
    }else{
        for(int i=0; i < row; i++){
            sumc = 0; sumr = 0;
            for(int j=0; j < row ; j++){
                sumc = sumc+arr[j][i];
                sumr = sumr+arr[i][j];
            }
            if(sumc != sumd1){
                f =1;
            }else if( sumr != sumd1){
                f =1;
            }else{
                f = 0;
            }
        }
    }

    if(f == 0){
        printf("Yes");
    }else{
        printf("No");
    }

    




    
    // print matrix 

    printf("\n");
    printf("%d ,", sumd1);
    printf("%d ,", sumd2);
    printf("%d ,", sumc);
    printf("%d ,", sumr);
    printf("%d ,", f);

    for(int k=0; k < row; k++){
        for(int l=0; l < col; l++){
            printf("%d ", arr[k][l]);
        }
        printf("\n");
    } 

    return 0;
}