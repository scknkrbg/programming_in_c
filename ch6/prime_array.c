/*
    Generating prime numbers with arrays.
*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int num, i, t, primeIndex = 2;
    printf("Enter the upper boundary :");
    scanf("%i", &num);
    int prime[num];
    prime[0] = 2;
    prime[1] = 3;
    
    for (i = 5; i <= num; i += 2)
    {
        bool isPrime = true;
        
        for (t = 1; isPrime && i / prime[t] >= prime[t]; ++t)
        {
            if(i % prime[t] == 0)
            isPrime = false;
        }
       
        if(isPrime == true)
        {
            prime[primeIndex] = i;
            ++primeIndex;
        }
    }
    
    for (i = 0; i < primeIndex; ++i)
    {
        printf("%i  ", prime[i]);
    }
    printf("\n");
    
    return 0;
}