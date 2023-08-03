#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int n, T[1000], S[1000];
		int ans[1000], day = 0;
		scanf("%d", &n);
		for (int i = 0; i < n; i++)
			scanf("%d%d", T + i, S + i), ans[i] = i;
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n - 1; j++){
				if (T[ans[j]] * S[ans[j + 1]] > S[ans[j]] * T[ans[j + 1]])
					swap(ans[j], ans[j + 1]);
				else if (T[ans[j]] * S[ans[j + 1]] == S[ans[j]] * T[ans[j + 1]] && ans[j] > ans[j + 1])
					swap(ans[j], ans[j + 1]);
			}
		}
		printf("%d", ans[0] + 1);
		for (int i = 1; i < n; i++)
			printf(" %d", ans[i] + 1);
		putchar('\n');
		if (t != 0)
			putchar('\n');
	}
	return 0;
}

/*----------OUT PUT-----------
1
4
3 4
1 1000
2 2
5 5
2 1 3 4
*/