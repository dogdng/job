#include <iostream>

using namespace std;

int main() {
	int day;
	while (cin >> day) {
		int result = 1;
		int increase = 1;
		int j = 1;
		for (int i = day - 1; i > 0; i--) {
			if (j) {
				result++;
				j--;
			}
			else {
				result--;
				increase++;
				j = increase;
			}
		}
		printf("%d", result);
	}
	return 0;
}