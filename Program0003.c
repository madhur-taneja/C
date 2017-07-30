// Ques:
// WAP to check if number is prime or not but by optimizing the code to reduce the time complexity.

// CODE:

#include <stdio.h>
#include <math.h>

int main()
{
        int i, n, flag = 0, sr=0;
        printf("Enter a number to check if it is prime or not\n");
        scanf("%d", &n);

        sr = sqrt(n);
        if( n % 2 != 0)
        {
                for(i=3;i<=sr;)
                {
                        if(n % i != 0)
                        {
                                flag = 1;
                        }
                        else
                        {
                                flag = 0;
                                break;
                        }
                        i += 2;
                }
                if(flag == 1)
                {
                        printf("Number is prime\n");
                }
                else
                {
                        printf("Number is not prime\n");
                }
        }
        else
        {
                printf("Number is not a prime\n");
        }
}
