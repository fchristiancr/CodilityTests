//https://app.codility.com/demo/results/trainingHYMT7M-AGF/
#include <stdio.h>


    
 
/* Driver function to test above function */
int main()
{
    int result = 0;
    int A [] = {9,3,9,3,9,7,9};
    int N = 7;

    for (int i = 0; i<N; i++){
        result = result ^ A[i];
    }

    printf("Odd: %d",result);
}