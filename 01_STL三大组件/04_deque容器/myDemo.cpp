#define _CRT_SECURE_NO_WARNING
#include <iostream>
using namespace std;
#include <deque>
#include <algorithm>

void printDeque(deque<int>&d)
{
	for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	deque<int>d;

	d.push_back(10);
	d.push_back(40);
	d.push_back(30);
	d.push_back(20);

	printDeque(d);

	deque<int>d2(d.begin(), d.end());
	d2.push_back(10000);
	d.swap(d2);

	printDeque(d);

	if (d2.empty())
	{
		cout << "empty" << endl;
	}
	else
	{
		cout << "not empty" << endl;
	}
}

// 排序规则
bool myCompare(int v1, int v2)
{
	return v1 > v2;
}

void test03()
{
	deque<int>d;
	d.push_back(10);
	d.push_back(50);
	d.push_back(20);
	d.push_back(30);
	d.push_back(5);

	printDeque(d);

	sort(d.begin(), d.end(), myCompare);
	printDeque(d);

}

int main() {

	test01();
	test03();
	system("pause");
	return EXIT_SUCCESS;
}