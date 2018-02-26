//Ques:
//Maximum Difference in an Array
//The maximum difference between elements in some array, a, is defined as the largest difference between any a[i] and a[j] where i < j //and a[i] < a[j]. For example, if a = [4, 1, 2, 3], the maximum difference would be a[3] − a[1] = 3 − 1 = 2 because this is the largest //difference between any two elements satisfying the aforementioned criteria.
 
//Complete the maxDifference function in the editor below. It has 1 parameter: an array of integers, a. It must return an integer //denoting the maximum difference between any pair of elements in a; if no such number exists (e.g., if a is in descending order and all //a[j] < a[i]), return −1 instead.

//Constraints
//1 ≤ n ≤ 2 × 105
//−106 ≤ a[i] ≤ 106 ∀ i ∈ [0, n − 1]

//CODE:

/*
 * Complete the function below.
 */
int maxDifference(int a_size, int* a) {
    int i, j, diff = 0, mDiff = -1; 
    
    for(i = 0; i < a_size; i++) {
        for(j = i+1; j < a_size; j++) {
            if(a[i] < a[j]) {
                diff = a[j] - a[i];
                if(diff > mDiff && diff != 0)
                    mDiff = diff;
            }
        }
    }
    if(mDiff == 0)
        return -1;
    else
        return mDiff;
}

int main() {
    char *output_path = getenv("OUTPUT_PATH");
    FILE *f;
    if (output_path != NULL) {
    	f = fopen(output_path, "w");
    }
    else {
    	f = stdout;
    }
    
    int res;
    
    int _a_size = 0;
    int _a_i;
    scanf("%d\n", &_a_size);
    int _a[_a_size];
    for(_a_i = 0; _a_i < _a_size; _a_i++) {
        int _a_item;
        scanf("%d", &_a_item);
        
        _a[_a_i] = _a_item;
    }
    
    res = maxDifference(_a_size, _a);
    fprintf(f, "%d\n", res);
    
    fclose(f);
    return 0;
}
