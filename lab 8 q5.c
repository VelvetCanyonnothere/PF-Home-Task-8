#include <stdio.h>

int main() {
    int height, width;
    int i,j,k;

    printf("Enter image height: ");
    scanf("%d", &height);
    printf("Enter image width: ");
    scanf("%d", &width);

    
    int image[height][width][3];

   
    printf("Enter RGB values for each pixel:\n");
    for (i = 0; i < height; i++) {
        for ( j = 0; j < width; j++) {
            printf("Pixel (%d,%d) - R: ", i, j);
            scanf("%d", &image[i][j][0]);
            printf("Pixel (%d,%d) - G: ", i, j);
            scanf("%d", &image[i][j][1]);
            printf("Pixel (%d,%d) - B: ", i, j);
            scanf("%d", &image[i][j][2]);
        }
    }


    int total = 0;
    int count = height * width * 3;

    for (i = 0; i < height; i++) {
        for ( j = 0; j < width; j++) {
            for ( k = 0; k < 3; k++) {
                total += image[i][j][k];
            }
        }
    }

    float average = (float)total / count;
    printf("\nAverage color intensity: %.2f\n", average);

    return 0;
}
