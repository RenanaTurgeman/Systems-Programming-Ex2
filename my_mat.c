#include <stdio.h>
#include "my_mat.h"

int mat[SIZE][SIZE];
void fillMat(){
    for(int i=0; i<SIZE; i++){
        for(int j=0; j<SIZE; i++){
            scanf(" %d",&mat[i][j]);
        }
    }
    for(int i=0; i<=SIZE; i++){
      for(int j=0; j<SIZE; i++){
            printf(" %d",mat[i][j]);
        }
    }
}