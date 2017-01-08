/*
  Simple programmable calculator.
*/

#include <stdio.h>
int main(int argc, char const *argv[])
  {
    char ops;
    float init; 
    float num;
   // int res;
    printf("To start type the intial number and 'S' operator.\n");
    printf("Then you can do basic four calculationa with operators");
    printf("(+, -, *, /). i.e: 10 + (adds 10 to initial number.) \n");
    printf("To stop type 'E'.\n\n");    
    printf("Now, type the number and operator!\n");
   
     
    while(ops != 'E')
    {  
        scanf("%f %c", &num, &ops);
        init = ops == 'S' ? num : init;
        switch (ops)
        {
            case 'S':
            printf("%.2f\n", init );
            break;

            case '+':
            printf("%.2f %c %.2f = %.2f\n", init, ops, num, init + num);
            init += num;
            break;
       
            case '-':
            printf("%.2f %c %.2f = %.2f\n", init, ops, num, init - num);
            init -= num;
            break;
        
            case '/':
            num == 0 ? printf("Division by zero error!\n") :
            printf("%.2f %c %.2f = %.2f\n", init, ops, num, (float) init / num); 
            init = (num == 0) ? init : (float) init / num;
            break;
       
            case '*':
            printf("%.2f %c %.2f = %.2f\n", init, ops, num, (float) init * num);
            init *= num;
            break;
        
            case 'E':
            break;

            default:
            printf("Unknown operator!\n");
            break;
        }
     }
     printf("ops = %c\n", ops);
     
  
 
    return 0;
  }