#include <stdio.h>

#define STUDENTS 5
#define SUBJECTS 5

// Function to calculate total marks
int calculateTotal(int marks[]) {
    int total = 0;

    for (int i = 0; i < SUBJECTS; i++) {
        total = total + marks[i];
    }

    return total;
}

// Function to calculate result
int checkResult(int marks[]) {
    for (int i = 0; i < SUBJECTS; i++) {
        if (marks[i] < 35) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int roll[STUDENTS];
    char name[STUDENTS][50];
    int marks[STUDENTS][SUBJECTS];
    int total;
    float average, percentage;

    // Input student details
    for (int i = 0; i < STUDENTS; i++) {
        printf("\nEnter roll number: ");
        scanf("%d", &roll[i]);

        printf("Enter student name: ");
        scanf(" %49[^\n]", name[i]);

        printf("Enter marks in 5 subjects:\n");

        for (int j = 0; j < SUBJECTS; j++) {
            do {
                printf("Subject %d: ", j + 1);
                scanf("%d", &marks[i][j]);

                if (marks[i][j] < 0 || marks[i][j] > 100) {
                    printf("Enter marks between 0 and 100.\n");
                }
            } while (marks[i][j] < 0 || marks[i][j] > 100);
        }
    }

    // Display result table
    printf("\n---------------- STUDENT RESULT SHEET ----------------\n");

    printf("%-8s %-15s", "Roll No", "Name");

    for (int j = 0; j < SUBJECTS; j++) {
        printf("%-8s", j == 0 ? "Sub1" :
                        j == 1 ? "Sub2" :
                        j == 2 ? "Sub3" :
                        j == 3 ? "Sub4" : "Sub5");
    }

    printf("%-8s %-8s %-8s %-8s\n",
           "Total", "Average", "Percent", "Result");

    for (int i = 0; i < STUDENTS; i++) {
        total = calculateTotal(marks[i]);
        average = total / 5.0;
        percentage = (total / 500.0) * 100;

        printf("%-8d %-15s", roll[i], name[i]);

        for (int j = 0; j < SUBJECTS; j++) {
            printf("%-8d", marks[i][j]);
        }

        printf("%-8d %-8.2f %-8.2f %-8s\n",
               total, average, percentage,
               checkResult(marks[i]) ? "PASS" : "FAIL");
    }

    return 0;
}