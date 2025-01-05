#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[16] = "isrveawhobpnutfg";

    char str[6] = "giants";
    char **possible_chars = malloc(sizeof(char *) * 7);
    possible_chars[6] = NULL;
    for (int j = 0; j < 6; j++)
    {
        int count = 0;
        for (int i = 33; i <= 126; i++)
        {
            if (str[j] == arr[i & 0b00001111] && ((i > 64 && i < 91) || (i > 96 && i < 123)))
                count++;
        }
        possible_chars[j] = malloc(sizeof(char) * (count + 1));
        possible_chars[j][count] = '\0';
    }


    for (int j = 0; j < 6; j++)
    {

        int k = 0;
        for (int i = 33; i <= 126; i++)
        {
            
            if (str[j] == arr[i & 0b00001111] && ((i > 64 && i < 91) || (i > 96 && i < 123)))
            {
                possible_chars[j][k] = i;
                k++;
            }
        }
    }

    // for (int i = 0; possible_chars[i] != NULL; i++)
    //     printf("%s\n", possible_chars[i]);

    for (int i = 0; possible_chars[0][i] != '\0'; i++) {
        for (int j = 0; possible_chars[1][j] != '\0'; j++) {
            for (int k = 0; possible_chars[2][k] != '\0'; k++) {
                for (int l = 0; possible_chars[3][l] != '\0'; l++) {
                    for (int m = 0; possible_chars[4][m] != '\0'; m++) {
                        for (int n = 0; possible_chars[5][n] != '\0'; n++) {
                            printf("%c%c%c%c%c%c,", possible_chars[0][i], possible_chars[1][j], possible_chars[2][k], possible_chars[3][l], possible_chars[4][m], possible_chars[5][n]);
                        }
                    }
                }
            }
        }
    }
}