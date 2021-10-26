//https://app.codility.com/demo/results/trainingHYMT7M-AGF/


int solution(int A[], int N) {
    int result = 0;
    
	/*Checking that N is withing Range*/
    if(N>0 && N<1000000){
        for(int i = 0; i < N; i++){
        result = result ^ A[i];
    }

    return result;
	
    }
	/*Return error if out of range*/
    else{
        return -1;
    }
    
}