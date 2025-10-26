#include <stdio.h>

int main() {
    int wards, patients, vitals;
    int i, j, k;
    float data[10][10][10];  

   
    printf("Enter number of wards: ");
    scanf("%d", &wards);
    printf("Enter number of patients per ward: ");
    scanf("%d", &patients);
    printf("Enter number of vital signs per patient: ");
    scanf("%d", &vitals);

    
    for (i = 0; i < wards; i++) {
        printf("\n--- Enter readings for Ward %d ---\n", i + 1);
        for (j = 0; j < patients; j++) {
            printf("Patient %d:\n", j + 1);
            for (k = 0; k < vitals; k++) {
                printf("  Vital Sign %d: ", k + 1);
                scanf("%f", &data[i][j][k]);
            }
        }
    }

  
    for (i = 0; i < wards; i++) {
        printf("\n===== Ward %d Report =====\n", i + 1);

       
        for (j = 0; j < patients; j++) {
            float rowSum = 0;
            for (k = 0; k < vitals; k++) {
                rowSum += data[i][j][k];
            }
            printf("Total vital readings for Patient %d: %.2f\n", j + 1, rowSum);
        }

        for (k = 0; k < vitals; k++) {
            float colSum = 0;
            for (j = 0; j < patients; j++) {
                colSum += data[i][j][k];
            }
            printf("Total of Vital Sign %d across all patients: %.2f\n", k + 1, colSum);
        }
    }

    return 0;
}

