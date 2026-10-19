#include <stdio.h>

int main()
{
    char username[3][30];
    char status[3][30];
    char timestamp[3][30];
    int i, j;
    int count = 0;

    for (i = 0; i < 3; i++)
    {
        printf("Enter log %d (username,status,timestamp): ", i + 1);
        scanf(" %29[^,],%29[^,],%29[^\n]",username[i], status[i], timestamp[i]);
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; username[i][j] != '\0'; j++)
        {
            if (username[i][j] >= 'A' && username[i][j] <= 'Z')
                count = count + 1;
        }

        for (j = 0; status[i][j] != '\0'; j++)
        {
            if (status[i][j] >= 'A' && status[i][j] <= 'Z')
                count = count + 1;
        }

        for (j = 0; timestamp[i][j] != '\0'; j++)
        {
            if (timestamp[i][j] >= 'A' && timestamp[i][j] <= 'Z')
                count = count + 1;
        }
    }

    printf("\nTotal uppercase letters: %d\n", count);
    return 0;
}