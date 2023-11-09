#define _CRT_SECURE_NO_WARNING
#include <iostream>
using namespace std;

void test01()
{
	// 第一种
	pair<string, int> p(string("Tom"), 100);
	cout << "姓名：" << p.first << endl;
	cout << "年龄：" << p.second << endl;
}

int main() {
	test01();

	system("pause");
	return EXIT_SUCCESS;
}