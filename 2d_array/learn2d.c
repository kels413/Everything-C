#include <stdio.h>
#include <stdlib.h>

#define max 500 if max > 500 \
                    printf("this is greater")

/*Drivers Code*/
int main(void)
{
    int array2d[][5] =
        {
            {1, 2, 3, 4, 5},
            {1, 2, 3, 4, 5},
            {1, 2, 3, 4, 5},
            {1, 2, 3, 4, 5},
        };


    for (int i = 0; i < 4; i++)
    {
        /* code */

        for (int j = 0; j < 5; j++)
        {
            /* code */

            printf("[%d]\t", array2d[i][j]);
        }
        printf("\n");
    }





















    return 0;
}