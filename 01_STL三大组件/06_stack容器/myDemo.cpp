#define _CRT_SECURE_NO_WARNING
#include <iostream>
using namespace std;
#include <stack>

void test01()
{
	stack<int>s;
	s.push(10);
	s.push(30);
	s.push(20);
	s.push(40);

	while (s.size())
	{
		cout << "栈顶为" << s.top() << endl;
		s.pop();
	}
	cout << s.size() << endl;
}

int main() {
	test01();

	system("pause");
	return EXIT_SUCCESS;
}