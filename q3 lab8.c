#include <stdio.h>
#include <stdlib.h> // For abs()

int main() {
    int joints, movements;
    int i,j,k;

    // Define constants for x, y, z coordinates
    const int coordinates = 3;

    // Get dimensions from user
    printf("Enter number of robot joints: ");
    scanf("%d", &joints);

    printf("Enter number of movements per joint: ");
    scanf("%d", &movements);

    // Declare the 3D array
    int readings[joints][movements][coordinates];

    // Input readings
    printf("\nEnter movement readings (x, y, z) for each joint and movement:\n");
    for ( i = 0; i < joints; i++) {
        for ( j = 0; j < movements; j++) {
            for ( k = 0; k < coordinates; k++) {
                printf("Joint %d, Movement %d, Coordinate %c: ", i + 1, j + 1, 'X' + k);
                scanf("%d", &readings[i][j][k]);
            }
        }
    }

    // Normalize readings by converting negatives to absolute values
    for ( i = 0; i < joints; i++) {
        for (j = 0; j < movements; j++) {
            for ( k = 0; k < coordinates; k++) {
                if (readings[i][j][k] < 0) {
                    readings[i][j][k] = abs(readings[i][j][k]);
                }
            }
        }
    }

    // Display normalized readings
    printf("\nNormalized Movement Readings:\n");
    for (i = 0; i < joints; i++) {
        for ( j = 0; j < movements; j++) {
            printf("Joint %d, Movement %d: ", i + 1, j + 1);
            for ( k = 0; k < coordinates; k++) {
                printf("%c=%d ", 'X' + k, readings[i][j][k]);
            }
            printf("\n");
        }
    }

    return 0;
}
