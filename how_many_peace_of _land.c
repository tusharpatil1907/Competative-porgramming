#include <stdio.h>
#include <conio.h>
int main () {
int S,i;
int N,Line;
long long Pieces;
// clrscr();
scanf("%d",&S);
for(i=1;i<=S;i++)
{
scanf("%d", &N);
Line = N*(N-1)/2;
Pieces = N*(N-1)*(N-2)*(N-3)/24 + Line +1;
printf("%d\n\n",Pieces);
}
getch() ;
return 0;
}

/*----------OUT PUT-----------
4
1
1
2
2
3
4
4
8
1
6
31
*/