#define _CRT_SECURE_NO_WARNING
#include <iostream>
using namespace std;
#include <queue>

void test01()
{
	queue<int> q;
	q.push(10);
	q.push(30);
	q.push(20);
	q.push(40);

	while (!q.empty())
	{
		cout << "队头：" << q.front() << endl;
		cout << "队尾：" << q.back() << endl;
		q.pop();
	}
}

int main() {

	test01();
	system("pause");
	return EXIT_SUCCESS;
}