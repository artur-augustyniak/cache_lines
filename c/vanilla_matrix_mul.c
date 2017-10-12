#include <stdio.h>
#include <stdlib.h>

#define N  1000


double** make_matrix(int c, int r)
{
	double** handle = malloc(c * sizeof(double*));
	if(!handle){
		perror("column malloc failed");
		return NULL;
	}
	for(int i = 0; i < c; i++){
		handle[i] = malloc(r * sizeof(double *));
		if(!handle[i])
		{
		  perror("row malloc failed");
		  return NULL;
		}
	    for(int j=0; j < r; j++){
			handle[i][j] = ((double)rand()/(double)RAND_MAX);
		}
	}
	return handle;
}

int main(void)
{

	double** matrix_a = make_matrix(N, N);
	double** matrix_b = make_matrix(N, N);
	double** res = make_matrix(N, N);

	for (int i = 0; i < N; ++i)
		for (int j = 0; j < N; ++j)
			for (int k = 0; k < N; ++k)
			res[i][j]  += matrix_a[i][k] * matrix_b[j][k];

	
	/*for(int i= 0; i < N; i++){
		printf("%f\n", matrix_a[i][i]);
	}*/

		
	return 0;
}
