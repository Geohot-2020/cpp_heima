#define _CRT_SECURE_NO_WARNING
#include <iostream>
using namespace std;

#include <string.h>

// 容器vector
#include <vector>

// 系统算法
#include <algorithm>


// 迭代器 遍历功能 理解用指针
// 普通指针也是迭代器
void test01()
{
	int array[5] = { 1, 3, 5, 6, 8 };

	int* p = array;

	for (int i = 0; i < 5; i++)
	{
		//cout << array[i] << endl;
		cout << *(p++) << endl;
	}
}

void myPrint(int v)
{
	cout << v << endl;
}

void test02()
{
	// 声明容器
	vector<int> v;	// 声明一个存放int类型数据的容器
	// 向容器中加数据
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	// 遍历， 迭代器
	vector<int>::iterator itBegin = v.begin(); // itBegin指向起始位置
	
	vector<int>::iterator itEnd = v.end();	// 最后一个位置的下一个

	//while (itBegin != itEnd)
	//{
	//	cout << *itBegin << endl;

	//	itBegin++;
	//}


	//for ( vector<int>::iterator it = v.begin(); it != v.end(); it++)
	//{
	//	cout << *it << endl;
	//}

	for_each(v.begin(), v.end(), myPrint);

}

// 操作自定义数据类型
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

void test03()
{
	vector<Person> v;
	Person p1("张三", 18);
	Person p2("李四", 20);
	Person p3("王五", 30);
	Person p4("二狗", 22);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名:" << (*it).m_Name << "年龄:" << it->m_Age << endl;
	}
}

void test04()
{
	vector<Person *> v;
	Person p1("张三", 18);
	Person p2("李四", 20);
	Person p3("王五", 30);
	Person p4("二狗", 22);

	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);

	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << (*it)->m_Name << endl;
	}
}

// 容器嵌套容器
void test05()
{
	vector<vector<int>> v;
	
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;

	for (int i = 0; i < 5;  i++)
	{
		v1.push_back(i);
		v2.push_back(i + 10);
		v3.push_back(i + 100);
	}

	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);

	//遍历
	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
	{
		for (vector<int>::iterator it1 = (*it).begin(); it1 != (*it).end(); it1++)
		{
			cout << *it1 << endl;
		}
	}
}

int main() {

	//test01();
	//test02();
	//test03();
	//test04();
	test05();
	system("pause");
	return EXIT_SUCCESS;
}