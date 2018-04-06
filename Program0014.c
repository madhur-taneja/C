// Ques:
// The following code is supposed to rotate the array A by B positions.

// Input:
// So, for example,

// A : [1 2 3 4 5 6]
// B : 1

// The output :

// [2 3 4 5 6 1]

// However, there is a small bug in the problem. Fix the bug and submit the problem.
// InterviewBit (Arrays->Array Bug)

// CODE:

/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer
 * 
 * @Output Integer array. You need to malloc memory, and fill the length in len1
 */
int* rotateArray(int* A, int n1, int B, int *len) {
	int *ret = (int *)malloc(n1 * sizeof(int));
	*len = n1;
	int i,b;
	B = B%n1;
	for (i = 0; i < n1; i++)
	{
	    if(i+B>=n1)
	    {
	        b = (i+B)-n1;
	        ret[i] = A[b];
	    }
	    else
	    {
	         ret[i] = A[i + B];
	    }
	    
	}
	return ret;
}
