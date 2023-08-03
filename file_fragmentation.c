#include<bits\stdc++.h>
using namespace std;
bool V[305];
int n;
string file[300];
bool check(int choose, string patten){
	memset(V, false, sizeof(V));
	V[0] = V[choose] = true;
	int cnt = 0;
	for (int i = 1; i < n; i++)
		if (!V[i])
			for (int j = i + 1; j < n; j++)
				if (!V[j])
					if (file[i] + file[j] == patten || file[j] + file[i] == patten)
						V[i] = V[j] = true, cnt++;
	return cnt == n / 2 - 1;
}
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	getchar();
	while (t--){
		n = 0;
		char str[300];
		while (gets(str) && str[0] != '\0')
			file[n++] = str;
		string ans = "";
		for (int i = 1; i < n; i++){
			if (check(i, file[0] + file[i]))
				ans = file[0] + file[i];
			if (check(i, file[i] + file[0]))
				ans = file[i] + file[0];
		}
		printf("%s\n", ans.c_str());
		if (t)	putchar('\n');
	}
	return 0;
}








// #include <stdio.h>
// #include <string.h>
// char frag[144][256];
// int flen[144], file_len;
// char file[1024];
// int main()
// {
// }
// char A[256], B[256];
// int T, i, j, p, q;
// scanf(" %d ", &T);
// while (getchar() ! = ' \n ')
//     ;
// while (getchar() ! = '\n')
//     ;
// while (T - -)
// {
//     int n = 0, mxlen = 0, rnnlen = 256;
//     while (gets(frag[n]) && frag[n][0])
//     {
//         if (flen[n] > mxlen)
//             mxlen = flen[n];
//         if (flen[n] < mnlen)
//             mnlen flen[n];
//         n++;
//     }
//     file len = mxlen + mnlen;
//     for (i = 0; i < n; i++)
//     {
//         if (flen[i] == mxlen)
//             for (j = 0; j < n; j++)
//             {
//                 if (flen[i] + flen[j] == file len)
//                 {
//                     sprintf(file, " %s%s", frag - [i], frag[j]);
//                     strcpy(A, file);
//                     for (p = 0; p <= n; p++)
//                     {
//                         int ok = 0;
//                         for (q = 0; q <= n && !ok; q++)
//                         {
//                             if (flen[p] + flen[q] == file len)
//                             {
//                                 strcpy(B, frag[p]);
//                                 strcat(B, frag[q]);
//                                 if (strcmp(A, B) == 0)
//                                     ok = l;
//                                 strcpy(B, frag[q]);
//                                 strcat(B, frag[p]);
//                                 if (strcmp(A, B) == 0)
//                                     ok = 1;
//                             }
//                         }
//                         if (!ok)
//                             break;
//                     }
//                     if (p == n)
//                     {
//                         i = n + l, j = n + l;
//                         printf("\n%s\n\n", file);
//                     }
//                 }
//             }
//     }
//     if (T)
//         printf("");
// }
// return 0;
// }