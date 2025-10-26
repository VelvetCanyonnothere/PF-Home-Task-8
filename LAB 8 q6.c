#include<stdio.h>

int main(){
	int m,n;
	int i,j;
	
	printf("Enter the number of rows \n");
	scanf("%d", &m);
	printf("Enter the number of columns \n");
	scanf("%d" ,&n);
	
	int matrix[m][n];
	printf("Enter the matrix elements only 0 or 1 \n");
	for (i =0 ;i< m ; i++){
		for ( j = 0; j< n ; j++){
			scanf("%d" , &matrix[i][j]);
			
		}
	}
	int flag = 1;
	for ( i =0 ; i< m ;i++){
		for( j =0; j<n ; j++){
			if( i==j && matrix[i][j] != 1 ){
				flag = 0;
				break;
			}
			else if (i!= j && matrix[i][j] != 0){
				flag = 0;
				break;
			}
		}
		if (flag ==0){
			break;
		}
	}
	
	if (flag ==1){
		printf("Correct seating arrangement \n");
			
	}
	else{
		printf("Seating arrangement incorrect as not an identity matrix \n");
	}
	
	return 0;
	
}
