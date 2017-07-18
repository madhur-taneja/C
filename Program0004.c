Ques:
WAP to find the time taken by a program to perform selection sorting using 'gettimeofday' function.

CODE:

#include <stdio.h>
#include <assert.h>
#include <sys/time.h>

void exch(long int a[], long int i, long int min);

void selectionSorting(long int a[], long int size)
{
    long int i, j, min;
    for(i = 0; i < size; i++)
    {
        min = i;
        for(j = i+1; j < size; j++)
        {
            if(a[j] < a[min])
            {
                min = j;
            }
        }
        exch(a, i, min);
    }
}

void exch(long int a[], long int i, long int min)
{
    long int temp = a[i];
    a[i] = a[min];
    a[min] = temp;
}

void input(long int a[], long int i, long int j, long int size)
{
    for(i = 0, j = size; i < size && j > 0; i++, j--)
    {
        a[i] = j;
    }
}

int main()
{
    long int i = 0, j, size = 32000;
    long int a[size];
    struct timeval t1,t2;
    
    input(a, i, j, size);
    gettimeofday(&t1, NULL);
    selectionSorting(a, size);
    gettimeofday(&t2, NULL);

    double elapsed = (t2.tv_sec - t1.tv_sec) * 1000000L + (t2.tv_usec - t1.tv_usec);

    printf("%lf\n",elapsed);
    return 0;
}
