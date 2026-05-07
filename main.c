#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr1,*ptr2;
    int n=5;

    printf("Array size:%d\n",n);

    // Allocate memory using malloc
    ptr1=(int *)malloc(n*sizeof(int));

    // Allocate memory using calloc (initializes to 0)
    ptr2=(int *)calloc(n,sizeof(int));

    if(ptr1==NULL || ptr2==NULL)
    {
        printf("Memory allocation failed.\n");
        exit(0);
    }
    else
    {
        printf("malloc:memory allocated successfully.\n");
        free(ptr1);
        printf("malloc:memory freed successfully.\n");

        printf("calloc:memory allocated successfully.\n");
        free(ptr2);
        printf("calloc:memory freed successfully.\n");
    }
    return 0;
}

