#include<stdio.h>
#include<conio.h>
int main (){
    int n, i;
long long next[1001]={2,5,13};
// clrscr() ;
for(i=3;i<1000;i++)
next[i]=2*next[i-1]+next[i-2]+next[i-3];
while (scanf ("%d" ,&n) != EOF)
printf("%lld\n\n",next[n-1]);
return(0);
}

/*----------OUT PUT-----------
2
5
3
13
5
84
*/      