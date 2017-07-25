#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int i,n,temp=0; 
    
    scanf("%d",&n);
    char* s = (char *)malloc(10240 * sizeof(char));
    scanf("%s",s);
    int k; 
    scanf("%d",&k);
    
    temp = k/26;
    if(temp >= 1)
        {
        k = k - temp*26;
    }
    for(i=0;i<n;i++)
        {
        if(s[i] >= 'A' && s[i] <= 'Z')
            {
            int c = s[i];
            c = s[i] + k;
            if(c >= 65 && c <= 90)
                {
                /*temp = s[i] - 90;
                s[i] = 64 + temp;*/ 
                s[i] += k;
            }
            else
                {
                //s[i] = s[i] -(26-k);
                s[i] = 64 + (c%90);
            }
        }
        else if(s[i] >= 'a' && s[i] <= 'z')
            {
            int c = s[i];
            c = s[i] + k;
            if(c >= 97 && c <= 122)
                {
                /*temp = s[i] - 122;
                s[i] = 96 + temp;*/
                s[i] +=k;
            }
            else
                {
                //s[i] = s[i] -(26-k);
                s[i] = 96 + (c%122);
            }
        }
    }
    printf("%s",s);
    
    return 0;
}
