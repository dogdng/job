#include <stdio.h>
int n, m;
int que[2][30];
int main() {
	scanf_s("%d %d", &n,&m);
	que[0][0] = 1;
	int i = 0;
	for (; i < m; i++) {
		for (int j = 0; j < n; j++) {
			que[(i + 1) % 2][j] = que[i % 2][(j + 1) % n] + que[i % 2][(j - 1 + n) % n];
		}
	}
	printf("%d", que[i % 2][0]);
	return 0;
}