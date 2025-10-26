#include <stdio.h>

int main() {
    int i, j, k, rows;
    char ch = 'A';

   
    printf("Enter the number of rows for the Alphabet Pyramid: ");
    scanf("%d", &rows);

    
    for (i = 1; i <= rows; i++) {
        
        for (j = i; j < rows; j++) {
            printf(" ");
        }

   
        ch = 'A';
        for (k = 1; k <= i; k++) {
            printf("%c", ch++);
        }

       
        ch -= 2; 
        for (k = 1; k < i; k++) {
            printf("%c", ch--);
        }

        printf("\n");
    }

    return 0;
}

