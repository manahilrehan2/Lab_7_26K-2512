#include <stdio.h>

int main()
{
    char paragraph[300];
    char sentences[3][100];
    int i, j, k = 0, vowels;

    printf("Enter 3 sentences separated by semicolons: ");
    scanf(" %299[^\n]", paragraph);

    for (i = 0; i < 3; i++)
    {
        j = 0;

        while (paragraph[k] != ';' && paragraph[k] != '\0')
        {
            sentences[i][j] = paragraph[k];
            j++;
            k++;
        }

        sentences[i][j] = '\0';

        if (paragraph[k] == ';')
            k++;
    }

    for (i = 0; i < 3; i++)
    {
        vowels = 0;

        for (j = 0; sentences[i][j] != '\0'; j++)
        {
            if (sentences[i][j] == 'a' ||
                sentences[i][j] == 'e' ||
                sentences[i][j] == 'i' ||
                sentences[i][j] == 'o' ||
                sentences[i][j] == 'u' ||
                sentences[i][j] == 'A' ||
                sentences[i][j] == 'E' ||
                sentences[i][j] == 'I' ||
                sentences[i][j] == 'O' ||
                sentences[i][j] == 'U')
            {
                vowels++;
            }
        }

        printf("\nSentence: %s\n", sentences[i]);
        printf("Vowels: %d\n", vowels);
    }

    return 0;
}