///��һ¥�ݹ�m�����տ�ʼʱ���ڵ�һ������ÿ��ֻ�ܿ���һ���������Ҫ���ϵ�m�������ж����߷���
///����
///�����������Ȱ���һ������n(1 <= n <= 100)����ʾ����ʵ���ĸ�����Ȼ����n�����ݣ�ÿ�а���һ������m����1 <= m <= 40), ��ʾ¥�ݵļ�����
///���
///����ÿ������ʵ�����������ͬ�߷���������
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