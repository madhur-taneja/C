Ques:
WAP to binary search a number using recursive function.

#include <stdio.h>
#include <math.h>

int binSearch(int arr[], int s, int L, int R) {
        if(R<L)
                return -1;
        int mid = (L+R)/2;
        if(arr[mid] == s)
                return mid;
        else if(arr[mid] > s)
                return binSearch(arr, s, L, mid-1);
        return binSearch(arr, s, mid+1, R);
}

int main()
{
        int i, n, arr[100], s, L, R, res = 0, mid = 0;

        printf("Enter size(upto 100) of array\n");
        scanf("%d", &n);
        printf("Enter elements of array\n");
        for(i = 0 ;i < n; i++ )
                scanf("%d", &arr[i]);
        printf("Enter the number you want to find\n");
        scanf("%d", &s);
        L = 0;
        R = n-1;
        res = binSearch(arr,s,L,R);

        if(res == -1)
        {
                printf("The array is unsorted and number could n't be found\n");
        }
        else
        {
                printf("The number is at %d position\n", res);
        }

}
