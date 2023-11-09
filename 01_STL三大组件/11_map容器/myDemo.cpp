#define _CRT_SECURE_NO_WARNING
#include <iostream>
using namespace std;
#include <map>

void test01()
{
	map<int, int> m;
	// 插入值
	m.insert(make_pair(2, 20));
	m[4] = 60;
	m[1] = 10;

	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key:" << it->first << " value" << it->second << endl;
	}
}

int main() {

	test01();
	system("pause");
	return EXIT_SUCCESS;
}