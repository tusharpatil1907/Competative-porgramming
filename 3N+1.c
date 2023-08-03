#include <stdio.h>
#include <conio.h>
// add clrscr and getch if running in turbo compiler
int main()
{
    int n = 0, i = 0, j = 0, mcl = 0, temp, cl = 0;
    // clrscr();
    printf("\n  Enter a value of i: ");
    scanf("%d", &i);
    printf("\n Enter a value of j: ");
    scanf("%d", &j);

    temp = i;
    while (temp <= j)
    {
        n = temp;
        do
        {
            if (n % 2 == 0)
            {
                n = n / 2;
            }
            else
            {
                n = (3 * n) + 1;
            }
            cl++;

        } while (n != 1);

        if (cl > mcl)
        {
            mcl = cl;
        }
        temp++;
        cl = 1;
    }
    printf("\n %d %d %d \n",i,j,mcl);
    getch();
    return 0;
}
