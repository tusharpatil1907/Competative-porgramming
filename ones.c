#include<stdio.h>
#include<conio.h>
int main ()
{
int n;
// clrscr() ;
while (scanf("%d", &n) != EOF)
{
int ans, x, remainder=0;
if(n==1 || n%2==0 || n%5==0)
{
printf("Number Should not be 1 or divisinle by2 or 5\n");
continue;
}
else
remainder = 1;
for (ans = 1; remainder; ans++)
{
x = remainder * 10 + 1;
remainder = x%n;
}
printf("%d\n\n", ans);
}
return 0;
}

// I*----------OUT PUT-----------
// 3
// 3
// 7
// 6
// 9901
// 12
// *1