// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define max(a, b) (((a) > (b)) ? (a) : (b))

int comparator(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

int maxProduct(int A[], int N){
    if (N<3){
        return -1;
    }else{
        qsort(A, N, sizeof(int), comparator);

        return max((A[0]*A[1]*A[2]),(A[N-1]*A[N-2]*A[N-3]));
    }

}

int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int max = maxProduct(A,N);

    return max;
}