#include <stdio.h>

int main()
{
    char student_names[3][50];
    int marks[3][3];
    int i, j, total;
    float average;

    for (i = 0; i < 3; i++)
    {
        printf("Enter student name: ");
        scanf(" %49[^\n]", student_names[i]);

        total = 0;

        for (j = 0; j < 3; j++)
        {
            printf("Enter marks for subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);

            total = total + marks[i][j];
        }
    }

    printf("\n--- Student Report ---\n");
    for (i = 0; i < 3; i++)
    {
        total = 0;

        for (j = 0; j < 3; j++)
        {
            total = total + marks[i][j];
        }

        average = total / 3.0;

        printf("Name: %s\n", student_names[i]);
        printf("Average Marks: %.2f\n\n", average);
    }




}