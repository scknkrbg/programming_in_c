/*
    Converts integers to different bases using arrays.
*/

#include <stdio.h>

int main(void)
{
    int num, base, mod, digit, counter = 0;
    long int conv[64];
    
    const char baseIntegers[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 
    'A', 'B', 'C', 'D', 'E', 'F'};
    
    printf("Enter the number : ");
    scanf("%i", &num);
    printf("Enter the base : ");
    scanf("%i", &base);
    
    do {
        conv[counter] = num % base;
        num /= base;
        ++counter;
    } while (num != 0);
    
    printf("Converted number : ");
    
    for (--counter; counter >=0; --counter)
    {
        digit = conv[counter];
        printf("%c", baseIntegers[digit]);
    }
    
    printf("\n");
        
    return 0;
    
    
}