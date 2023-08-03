// Program for minesweeper.c
#include <stdio.h> //Header Files
#include <conio.h>
int main() // Main Function
{
    char row[100]; // Declaration of Variables ,Array
    int mine[100][100], field[100][100], m, n, i, j, fn = 1;
    // clrscr();
    while (1)
    {
        printf("\n");
        scanf("%d %d", &n, &m); // input n=Lines, m=Cols
        if (n == 0 && m == 0)   // Terminate if n=m=0 Break;
        {
            break;
        }
        for (i = 0; i < n; i++)
        {
            scanf("%s", row); // input lines in the form of * and .
            for (j = 0; j < m; j++)
            {
                mine[i][j] = row[j];
            }
        }
        for (i = 0; i < n; i++) // Initialize Field
        {
            for (j = 0; j < m; j++)
            {
                field[i][j] = 0;
            }
        }

        for (i = 0; i < n; i++) // Generate Field
        {
            for (j = 0; j < m; j++)
            {
                if (mine[i][j] == '*') // if Field Contains '.' ignore if contains'*' check adjacent 8
                {
                    field[i - 1][j - 1]++;
                    field[i - 1][j]++;
                    field[i - 1][j + 1]++;
                    field[i][j - 1]++;
                    field[i][j + 1]++;
                    field[i + 1][j - 1]++;
                    field[i + 1][j]++;
                    field[i + 1][j + 1]++;
                }
            }
        }
        for (i = 0; i < n; i++) // print mine '*' in output field
        {

            for (j = 0; j < m; j++)
            {
                if (mine[i][j] == '*')
                {
                    field[i][j] = mine[i][j];
                }
            }
        }
        printf("\n Field # %d:\n", fn);
        for (i = 0; i < n; i++) // Display Field
        {
            for (j = 0; j < m; j++)
            {
                if (field[i][j] == '*')
                {
                    printf("%c", field[i][j]);
                }
                else
                {
                    printf("%c", field[i][j] + 48);
                }
            }
            printf("\n");
        }
        fn++;
    }
    return 0;
}