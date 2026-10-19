#include <stdio.h>

int main()
{
    int shifts[4][3];
    int i, j, index;

    printf("Enter the 3 x 3 production data:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &shifts[i][j]);
        }
    }

    printf("Enter row index for insertion (0 to 3): ");
    scanf("%d", &index);

    if (index < 0 || index > 3)
    {
        printf("Invalid index!\n");
        return 0;
    }

    for (i = 2; i >= index; i--)
    {
        for (j = 0; j < 3; j++)
        {
            shifts[i + 1][j] = shifts[i][j];
        }
    }

    printf("Enter 3 new production values:\n");

    for (j = 0; j < 3; j++)
    {
        scanf("%d", &shifts[index][j]);
    }

    printf("\nUpdated 4 x 3 Matrix:\n");

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", shifts[i][j]);
        }

        printf("\n");
    }

    return 0;
}