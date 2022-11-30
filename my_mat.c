#include <stdio.h>
#include "my_mat.h"
#include <math.h>
#define SIZE 10

int mat[SIZE][SIZE];


void FloydWarshall()
{
    for (int k = 0; k < SIZE; k++)
    {
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; j < SIZE; j++)
            {
                if(mat[i][j]!=0 && mat[i][k]!=0 && mat[k][j]!=0){
                    mat[i][j]= fmin(mat[i][j], mat[i][k]+mat[k][j]);
                }
                if(i!=j && mat[i][j]==0 && mat[i][k]!=0 && mat[k][j]!=0){
                    mat[i][j]= mat[i][k]+mat[k][j];
                }
             }
         }
    }
}


void fillMat()
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    FloydWarshall();
}

void pathExist(){
    int i, j;
    scanf("%d%d", &i, &j);
       
    if (mat[i][j] == 0)
    {
        printf("False\n");
    }
    else
    {
        printf("True\n");
    }
}

void shortestPath(){
    int i, j;
    scanf("%d%d", &i, &j);
    
    if(mat[i][j] == 0){
        printf("-1\n");
    }else{
        printf("%d\n",mat[i][j]);
    }
}