#include <stdio.h>

int main()
{
    char secret_messages[3][100];
    int i, j;
    int words, spaces, ch;

    for (i = 0; i < 3; i++)
    {
        printf("Enter message %d: ", i + 1);

        scanf(" %99[A-Z ]", secret_messages[i]);

        while ((ch = getchar()) != '\n' && ch != EOF)
        {
        }
    }

    for (i = 0; i < 3; i++)
    {
        words = 0;
        spaces = 0;

        for (j = 0; secret_messages[i][j] != '\0'; j++)
        {
            if (secret_messages[i][j] == ' ')
                spaces++;

            if (secret_messages[i][j] != ' ' &&
                (j == 0 || secret_messages[i][j - 1] == ' '))
            {
                words++;
            }
        }

        printf("\nMessage: %s\n", secret_messages[i]);
        printf("Spaces: %d\n", spaces);
        printf("Words: %d\n", words);
    }

    return 0;
}