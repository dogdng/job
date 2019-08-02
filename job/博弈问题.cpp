#include <iostream>

using namespace std;

int main() {
	int n, m, x;
	int p, q;
	cin >> n;
	cin >> m;
	cin >> x;
	cin >> p;
	cin >> q;
	float y = ((float)(x*p)) / ((float)(q*n + q - n * p));
	if (y < 1)y = 1;
	if (y > m)y = m;
	printf("%.2f", y);
	return 0;
}