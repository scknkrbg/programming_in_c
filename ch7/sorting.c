/* 
    Sorting the arrays.
*/

#include "stdio.h"

void sort(int array[], int n)
{
    int i, j, temp;
    
    printf("Pre-sort : ");
    for(i = 0; i < n; ++i)
        printf("%i ", array[i]);
    printf("\n");
    
    for(i = 0; i < n - 1; ++i)
    {
        for(j = i + 1; j < n; ++j)
        {  
            if(array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    printf("After-sort : ");
    
    for(i = 0; i < n; ++i)
    {
        printf("%i ", array[i]);
    }
    printf("\n");
}

int main(void)
{
    int a[] = {-1, 33, 53, -23, 54, -233, 45};
    
    sort(a,7);
    
    return 0;
}