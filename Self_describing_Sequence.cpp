
// c program


// #include <stdio.h>
// #include <conio.h>
// int Set[30000] = {0, 1, 2, 4, 6, 9};
// int main()
// {
//     int remember, i, n;
//     // c1rscr();
//     remember = 1;
//     for (i = 6; i < 30000; i++)
//     {
//         int Temp = Set[i - 1];
//         int j;
//         for (j = remember; j < i; j++)
//         {
//             if (Set[j + 1] >= i)
//                 break;
//         }

//         Set[i] Temp + j;
//         remember = j;
//     }
//     while (scanf("%d", &n))
//     {
//         if (n == 0)
//             break;
//         for (i = 1; i < 30000; i++)
//         {
//             if (Set[i + 1] > n)
//                 break;
//         }
//         printf("%d\n\n", i);
//     }
//     return 0;
// }



// c++ program

#include<iostream>
#include<vector>
#define lim 673368
using namespace std;
long long f[lim] = { 1, 1, 2, 2 };
long long i, j, x, sz=4;
long long cur, bound, n;
int main(){
	for( i=3; sz<lim; ++i ){
		for( j=0; j<f[i] && sz<lim; ++j ){
			f[sz++] = i;
		}
	}
	while( cin >> n, n ){
		if( n<lim ){
			cout << f[n] << endl;
			continue;
		}
		x = 3;
		cur = 4;
		bound = 6;
		while( bound+x*f[x] < n ){
			bound += x*f[x];
			cur += f[x];
			++x;
		}
		cout << ( cur + (n-bound)/x ) << endl;
	}
}

/*----------OUT PUT-----------
1
1
5
3
8
4
100
21
9999
356
123456
1684

*/