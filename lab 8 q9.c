#include<stdio.h>

int main(){
	int i,j,k;
	int m,n,o;
	
	printf("Enter the number of cities \n");
	scanf("%d" ,& k);
	printf("Enter the number of days \n");
	scanf("%d" , & i);
	printf("Enter times \n");
	scanf("%d" ,&j);
	int temperature[k][i][j];
	
	printf("Enter the temperatures recorded of each city at different days and time \n");
	for ( m = 0; m < k; m++){
		for ( n = 0; n < i ; n++){
			for ( o = 0 ; o < j ; o++){
				scanf("%d" , & temperature[m][n][o] );
			}
		}
	}
	
	int highest = 0 ;
	m =0;
	while(m< k){
		for ( n =0 ; n < i ; n++){
			highest = temperature[m][0][0];
			for (o = 0; o< j ; o++){
				if( temperature[m][n][o] > highest){
					highest = temperature[m][n][o] ;
					
			}
		}
	    }
		printf("The highest temperature of city %d is %d" , m+1 , highest );
		m++;
	}
	
	
	return 0;
	
}
