#include<iostream>
using namespace std;
int main() {
	int n, num;
	cin >> n;
	while (n--) {
		int col[5001];
		cin >> num;
		for (int i = 1; i <= num; i++) {
			col[i] = i;
		}
		while (num > 3) {
			num -= num / 2;
			for (int i = 2; i <= num; i++) {
				col[i] = col[i * 2 - 1];
			}
			if (num <= 3)break;
			num -= num / 3;
			for (int i = 2; i <= num; i++) {
				col[i + 1] = col[i + i / 2 + 1];
			}
		}
		for (int i = 1; i <= num; i++) {
			printf("%d ", col[i]);
		}
	}
	return 0;
}