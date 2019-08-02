#include <iostream>
#include <string>
using namespace std;
//说起约德尔人的未来，黑默丁格曾经提出了一个约德尔测试，将约德尔人的历史的每个阶段都用一个字符表达出来。
//(包括可写字符, 不包括空格。)。然后将这个字符串转化为一个01串。转化规则是如果这个字符如果是字母或者数字，这个字符变为1, 其它变为0。
//然后将这个01串和黑默丁格观测星空得到的01串做比较，得到一个相似率。相似率越高, 则约德尔的未来越光明。
int main() {
	string str ("@!%12dgsa");
	string comp("010111100");
	int one = 0;
	//getline(cin, str);
	//getline(cin, comp);
	for (int i = 0; i < str.length(); i++) {
		if ((str[i] >= 'a'&& str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9')) {
			if (comp[i] == '1') {
				one++;
			}
		}
		else {
			if (comp[i] == '0') {
				one++;
			}
		}
	}
	printf("%.2f", (float)one*100 / (float)str.length());
	printf("%%");
	return 0;
}