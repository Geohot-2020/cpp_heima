#define _CRT_SECURE_NO_WARNING
#include <iostream>
using namespace std;

#include <vector>

void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
		cout << v.capacity() << endl;	// 容量
	}
}

void printVector(vector<int> &v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test02()
{
	vector<int> v;
	int arr[] = { 2,3,4,1,9 };
	vector<int>v1(arr, arr + sizeof(arr) / sizeof(int));
	vector<int>v2(v1.begin(), v1.end());

	printVector(v2);

	vector<int>v3(10, 100);
	printVector(v3);

	vector<int>v4;
	v4.assign(v3.begin(), v3.end());
	printVector(v4);

	v4.swap(v2);
	printVector(v4);
	cout << v4.size() << endl;


}

// 巧用swap收缩空间
void test03()
{
	vector<int>v;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
	}
	v.resize(3);
	cout << "v的容量：" << v.capacity() << endl;
	cout << "v的大小：" << v.size() << endl;

	// 巧用swap
	vector<int>(v).swap(v);
	cout << "v的容量：" << v.capacity() << endl;
	cout << "v的大小：" << v.size() << endl;
}

void test04()
{
	int* p = NULL;
	int num = 0;
	vector<int> v;
	v.reserve(100000);	// 预留空间
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}
	}

	cout << num << endl;
}

void test06()
{
	// 逆序遍历
	vector<int>v;
	for (int i = 0; i < 10; i++)
		v.push_back(i);
	//printVector(v);
	for (vector<int>::reverse_iterator it = v.rbegin(); it != v.rend(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	// 支持跳跃式访问
	vector<int>::iterator itBegin = v.begin();
	itBegin = itBegin + 3;

}

int main() {

	test01();
	test02();
	test03();
	test04();
	test06();
	system("pause");
	return EXIT_SUCCESS;
}