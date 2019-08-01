#include <iostream>

using namespace std;

int main() {
	int day;
	while (1) {
		int result = 1;
		int increase = 1;
		cin >> day;
		int j = 1;
		for (int i = day-1; i > 0; i--) {
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
		cout << result << endl;
	}
	return 0;
}