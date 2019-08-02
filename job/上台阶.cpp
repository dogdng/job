///有一楼梯共m级，刚开始时你在第一级，若每次只能跨上一级或二级，要走上第m级，共有多少走法？
///输入
///输入数据首先包含一个整数n(1 <= n <= 100)，表示测试实例的个数，然后是n行数据，每行包含一个整数m，（1 <= m <= 40), 表示楼梯的级数。
///输出
///对于每个测试实例，请输出不同走法的数量。
#include <iostream>

using namespace std;

int main() {

	int m=0,n = 0;
	int stair[40];
	cin >> n;
	while (n--) {
		stair[0] = 1;
		stair[1] = 1;
		cin >> m;
		if (m > 1) {
			for (int i = 2; i < m; i++) {
				stair[i] = stair[i - 1] + stair[i - 2];
			}
		}
		cout << stair[m-1];
	}
	return 0;
}
