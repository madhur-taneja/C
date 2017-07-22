Ques:
WAP to find the unique numbers in an array.

CODE:

#include <stdio.h>

// This program is taking hardcoded values.

int main()
{
    int i, j, temp=0, count=1, a[5] = {1, 3, 3, 2, 1};

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5-i-1; j++)
        {
            if(a[j] > a[j+1])
            {
                 temp = a[j];
                 a[j] = a[j+1];
                 a[j+1] = temp;
            }
        }
    }

    for(i = 0; i < 5 ; )
    {
        count = 1;
        for(j = i+1; j < 5; j++)
        {
            if( a[i] == a[j])
            {
                count++;
            }
        }
        if( count == 1)
        {
            printf("%d \n", a[i]);
        }
        i += count;
    }
}
