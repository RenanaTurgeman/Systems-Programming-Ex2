#include <stdio.h>
#define SIZE 10
#include "my_mat.h"

int main()
{
    char c;
    scanf("%c", &c);
    while (c != 'D')
    {
        if (c == 'A')
        {
            //fillMat();
        }else if(c =='B'){
            //pathExist
        }else if(c == 'C'){
            //FloydWarshall
        }
        scanf("%c", &c);
    }
    return 0;
}