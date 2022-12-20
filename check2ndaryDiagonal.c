#include <stdio.h>
int main(){
    int row,col; 
    scanf("%d%d",&row,&col);
    int a[row][col];
    
    // taking input start
    for(int i=0; i < row; i++){
        for(int j=0; j< col; j++){
            scanf("%d",&a[i][j]);
        }
    }

// checking start
if(row == col){
    // check
    int flag = 1;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(i+j == row-1){
                continue;
            }else if(a[i][j] !=0){
                flag=0;
            }
        }
    }

    if(flag == 1){
        printf("Flag = %d \n", flag); 
        printf("Diagonal");
    }else{
        printf("Flag = %d \n", flag); 
         printf("Not Diagonal");
    }

}else{
    printf("Not Diagonal");
}

    return 0;
}