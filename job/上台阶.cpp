///有一楼梯共m级，刚开始时你在第一级，若每次只能跨上一级或二级，要走上第m级，共有多少走法？
///输入
///输入数据首先包含一个整数n(1 <= n <= 100)，表示测试实例的个数，然后是n行数据，每行包含一个整数m，（1 <= m <= 40), 表示楼梯的级数。
///输出
///对于每个测试实例，请输出不同走法的数量。
#include <iostream>

using namespace std;
int m;
int way=0;
int upStair(int count) {
	if (count == m) {
		way++;
		return 0;
	}
	if (count > m) {
		return 0;
	}
	upStair(count + 1);
	upStair(count + 2);
}
int main() {

	int n = 0;
	cin >> n;
	while (n--) {
		way = 0;
		cin >> m;
		upStair(1);
		cout << way;
	}
	return 0;
}