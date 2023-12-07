#include <stdio.h>
#include <stdlib.h>

int main(void)
{

size_t i;
    int no_elem, no_elem2, sum;

    size_t arr[5];
    size_t arr_size = sizeof(arr) / sizeof(arr[0]);

    for (i = 0; i < arr_size; i++)
    {
        /* code */
        printf("input Element [%zu] ", i);
        int no_read = scanf("%10zu", &arr[i]);

    }

    size_t arr2[5];
    size_t arr_size2 = sizeof(arr2) / sizeof(arr[0]);

    for (i = 0; i < arr_size2; i++)
    {
        /* code */
        printf("input Element [%zu] ", i);
        int no_read = scanf("%10zu", &arr2[i]);

    }

    size_t arr3[15];

    for (i = 0; i < arr_size; i++)
    {
        /* code */
        arr3[i]  = arr[i] + arr2[i];




    }

     for (i = 0; i < arr_size; i++)
    {
        /* code */
       printf("array : [%zu]\n", arr3[i]);
    }

    return 0;
}