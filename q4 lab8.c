#include<stdio.h>

int main(){
	int n,k,i,j;
	int count = 0;
	int size;
	
	printf("Enter the number of rows in matrix:\n");
	scanf("%d" ,&n);
	printf("Enter the number of columns of matrix: \n");
	scanf("%d" ,&k);
	int sparse[n][k];
	for( i =0 ; i< n ; i++){
		for ( j = 0 ; j < k; j++){
			printf("enter the element of matrix:");
			scanf("%d" ,&sparse[i][j]);
			
		}
	}
	
	for ( i =0 ; i<n; i++){
		for(j = 0; j < k ; j++){
			if (sparse[i][j] == 0){
				count++; 
			}
		}
	}
	size = n*k;
	if(count >= size/2 ){
		printf("The matrix is a sparse matrix \n");
		
	}
	else{
		printf("This matrix is not a sparse matrix \n");
	}
	return 0;
	
		
}
