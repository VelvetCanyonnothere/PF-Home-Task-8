#include<stdio.h>

int main(){
	int m,n,k;
	int i ,j ,r;
	
	printf("Enter the number of floors \n");
	scanf("%d" ,& k);
	printf("Enter the number of rooms \n");
	scanf("%d" ,& m);
	printf("Enter the number of beds \n");
	scanf("%d" , & n);
	
	int building[k][m][n];
	
	
	printf("Enter the number of beds only 0 or 1 \n");
	for(i = 0; i < k; i++){
		for ( j = 0 ; j< m; j++){
			for ( r =0 ; r<n ; r++){
				scanf("%d" , & building[i][j][r]);
			}
		}
	}
	int count = 0;
	
	for(i = 0; i < k; i++){
		for ( j = 0 ; j< m; j++){
			for ( r =0 ; r<n ; r++){
				if (building[i][j][r] == 0){
					count++;
				}
			}
		}
	}
	printf("The number of empty beds are %d" , count);
	return 0;
}
