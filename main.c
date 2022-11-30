#include <stdio.h>
#include "my_mat.h"

int main()
{
    char c;
    scanf("%c", &c);
    while (c != 'D')
    {
        if (c == 'A')
        {
            fillMat();
        }else if(c =='B'){
            pathExist();
        }else if(c == 'C'){
            shortestPath();
        }
        scanf("%c", &c);
    }
    return 0;
}