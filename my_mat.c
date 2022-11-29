
int mat[SIZE][SIZE];

void fillMat()
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
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

int shortestPath(int mat[][],int i, int j)
{
    for (int k = 0; k < SIZE; k++)
    {
        for (int m = 0; m < SIZE; m++)
        {
            for (int h = 0; h < SIZE; h++)
            {
                if(mat[m][k] + mat[k][h] < mat[m][h]){
                    mat[m][h] = mat[m][k] + mat[k][h];
                }
                
            }
        }
    }
    return mat[i][j];
}

void FloydWarshall()
{
    int i, j;
    scanf("%d%d", &i, &j);

    if (mat[i][j] == 0)
    {
        printf("-1");
    }
    else
    {
        printf("%d", shortestPath(mat,i,j));
    }
}