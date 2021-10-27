//https://app.codility.com/demo/results/trainingNDWNTM-ZFA/

#include <stdio.h>
 
void rotate(int A[], int N)
{
   int x = A[N-1], i;
   for (i = N-1; i > 0; i--)
      A[i] = A[i-1];
   A[0] = x;
}


int main(){
    int A[] = {3,8,9,7,6},i,j;
    int N = sizeof(A)/sizeof(int);
    int K = 2;

    printf("Given array is\n");
    for (i = 0; i < N; i++)
        printf("%d ", A[i]);

    for (j = 0; j<K; j++){
        rotate(A,N);
    }


    printf("\nRotated array is\n");
    for (i = 0; i < N; i++)
        printf("%d ", A[i]);

    return 0;


}