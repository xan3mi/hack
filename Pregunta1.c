#include <stdio.h>
#include <stdlib.h>

#define N 555

int main(){
	float arr[N];
	int i=0;
	
	for(i; i<N; i++){ 
	    arr[i]=rand()/(float)RAND_MAX; 
	    printf("%.3f \t", arr[i]);
	}
	
	getchar();
	return 0;
}

