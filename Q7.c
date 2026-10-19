#include <stdio.h>

int main()
{
    float sensor_data[3][4];
    int i, j, index;

    printf("Enter temperature readings for 3 days and 4 sensors:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%f", &sensor_data[i][j]);
        }
    }

    printf("Enter column index to delete (0 to 3): ");
    scanf("%d", &index);

    if (index < 0 || index > 3)
    {
        printf("Invalid index!\n");
        return 0;
    }

    for (i = 0; i < 3; i++)
    {
        for (j = index; j < 3; j++)
        {
            sensor_data[i][j] = sensor_data[i][j + 1];
        }
    }

    printf("\nUpdated 3 x 3 Matrix:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%.2f\t", sensor_data[i][j]);
        }

        printf("\n");
    }

    return 0;
}