#include <stdio.h>

int main() {
    int n, i, j;
    float marks, total, percentage;
    char grade;
    char name [50];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("\n--- Student %d ---\n", i);
        total = 0;
        printf ("enetr name");
        scanf ("%s",name);

        
        for (j = 1; j <= 5; j++) {
            printf("Enter marks for Subject %d: ", j);
            scanf("%f", &marks);
            total += marks;
        }

    
        percentage = total / 5.0;

        
        if (percentage >= 90) {
            grade = 'A';
        } else if (percentage >= 75) {
            grade = 'B';
        } else if (percentage >= 60) {
            grade = 'C';
        } else if (percentage >= 40) {
            grade = 'D';
        } else {
            grade = 'F';
        }

    
        printf("\nResult for Student %d:\n", i);
        printf("Total Marks : %.2f / 500\n", total);
        printf("Percentage  : %.2f%%\n", percentage);
        printf("Grade       : %c\n", grade);

        if (grade == 'F') {
            printf("Status      : FAIL\n");
        } else {
            printf("Status      : PASS\n");
        }
    }

    return 0;
}
