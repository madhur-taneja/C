// Ques:
// Julius Caesar protected his confidential information by encrypting it in a cipher. Caesar's cipher rotated every letter in a string by a fixed number, K, making it unreadable by his enemies. Given a string, S, and a number, K, encrypt S and print the resulting string. The cipher only encrypts letters; symbols, such as -, remain unencrypted. The first line contains an integer, N, which is the length of the unencrypted string. The second line contains the unencrypted string, S. The third line contains the integer encryption key, K, which is the number of letters to rotate.
// 0 <= N <= 100
// 0 <= K <= 100
// S is a valid ASCII string and doesn't contain any spaces. (Hackerrank Algorithm)
        
// CODE:

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
