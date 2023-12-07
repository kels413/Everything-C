#include <stdio.h>
#include <stdlib.h>

/*Read an array from user and count the even and odd number in their element*/
int main(void)
{
    size_t i;
    int no_elem;
    int count = 0;

    printf("How many element to print ? ");
    scanf("%d", &no_elem);

    size_t *arr = malloc(sizeof(int) * no_elem);

    if(arr == NULL)
    {
        fprintf(stderr, "Memory Allcation Failed!");
        exit(EXIT_SUCCESS);
    }

    for (i = 0; i < no_elem; i++)
    {
        /* code */
        printf("input Element [%zu] ", i);
        int no_read = scanf("%10zu", &arr[i]);

    }


    printf("The elements are:\n");

    /*printing the Elements*/



    for (i = 0; i < no_elem; i++)
    {

        /* code */
        if(*(arr + i) % 2 == 0)
            printf("Even Number [%zu]\n", *(arr + i));

        else
            printf("Odd Number [%zu]\n", *(arr + i));
    }


    free(arr);
    arr = NULL;  // not really neccessary since the program terminates immediately. (buh its a good practice)
    return 0;

}