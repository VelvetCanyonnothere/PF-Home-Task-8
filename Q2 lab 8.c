#include <stdio.h>

int main() {
    int students, subjects;
    int i,j;

    // Ask for number of students and subjects
    printf("Enter number of students: ");
    scanf("%d", &students);

    printf("Enter number of subjects: ");
    scanf("%d", &subjects);

    // Declare the original and transposed matrices
    int marks[students][subjects];
    int transposed[subjects][students];

    // Input marks for each student and subject
    printf("\nEnter the marks (each row for one student):\n");
    for (i = 0; i < students; i++) {
        for ( j = 0; j < subjects; j++) {
            printf("Student %d, Subject %d: ", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    // Transpose the matrix
    for ( i = 0; i < students; i++) {
        for ( j = 0; j < subjects; j++) {
            transposed[j][i] = marks[i][j];
        }
    }

    // Display the transposed matrix
    printf("\nTransposed Marks Table (Subjects as rows):\n");
    for (i = 0; i < subjects; i++) {
        printf("Subject %d: ", i + 1);
        for ( j = 0; j < students; j++) {
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }

    return 0;
}
