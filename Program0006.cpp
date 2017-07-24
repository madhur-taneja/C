Ques:
WAP to find out the sign of an input number using bitwise operators. Return 1 if +ve, -1 if -ve and 0 if 0.

CODE:

#include <stdio.h>

int main()
{
    int x,ans=0;

    printf("Enter a number\n");
    scanf("%d",&x);

    ans = (x>>31) | !(!x);
    printf("%d\n",ans);
    return ans;
}
