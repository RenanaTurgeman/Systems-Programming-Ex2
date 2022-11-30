#include <stdio.h>
#include "my_mat.h"
#define SIZE 10

int mat[SIZE][SIZE];

int min(int x, int y){
    int min = x;
    if (x > y)
        min = y;
    return min;
}

void FloydWarshall()
{
    for (int k = 0; k < SIZE; k++)
    {
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; j < SIZE; j++)
            {
                mat[i][j] = min(mat[i][j], mat[i][k] + mat[k][j]);
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

void pathExist()
{
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
        printf("-1");
    }else{
        printf("%d",mat[i][j]);
    }

}