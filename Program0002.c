Ques:
WAP to sort elements of an array using insertion sorting method and modular approach.

CODE:

#include <stdio.h>

void insertionsorting(int [], int);
void swapping(int [], int , int);

void insertionsorting(int a[], int size)
{
    int i, j;
    for(i = 1; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
             if(a[i] < a[j])
             {
                 swapping(a, i, j);
             }
        }
    }
}

void swapping(int a[], int i, int j)
{
    int temp;
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

int main()
{
    int i, size;
    printf("Enter size of array\n");
    scanf("%d", &size);

    int a[size];

    printf("Enter elements of array\n");
    for(i = 0; i < size; i++)
    scanf("%d", &a[i]);

    insertionsorting(a, size);

    printf("Sorted Array is\n");
    for(i = 0; i < size; i++)
    printf("%d ",a[i]);

    return 0;
}
