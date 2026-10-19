#include <stdio.h>

int main()
{
    char word_grid[3][100];
    char longest[100];
    int i, j, k, length, start;
    int max_length = 0;
    int row = 0, col = 0, word_col;

    for (i = 0; i < 3; i++)
    {
        printf("Enter 3 words for row %d: ", i);
        scanf(" %99[^\n]", word_grid[i]);
    }

    for (i = 0; i < 3; i++)
    {
        length = 0;
        word_col = 0;

        for (j = 0; ; j++)
        {
            if (word_grid[i][j] != ' ' &&
                word_grid[i][j] != '\0')
            {
                if (length == 0)
                    start = j;

                length++;
            }
            else
            {
                if (length > max_length)
                {
                    max_length = length;
                    row = i;
                    col = word_col;

                    for (k = 0; k < length; k++)
                    {
                        longest[k] = word_grid[i][start + k];
                    }

                    longest[length] = '\0';
                }

                if (word_grid[i][j] == '\0')
                    break;

                length = 0;
                word_col++;
            }
        }
    }

    printf("\nLongest word: %s\n", longest);
    printf("Length: %d\n", max_length);
    printf("Row Index: %d\n", row);
    printf("Column Index: %d\n", col);

    return 0;
}