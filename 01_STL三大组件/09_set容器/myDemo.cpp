#define _CRT_SECURE_NO_WARNING
#include <iostream>
using namespace std;
#include <set>
// 关联式容器

void printSet(set<int>& s1)
{
	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++)
	{
		cout << *it << endl;
	}
}

void test01()
{
	set<int>s1;
	s1.insert(5);
	s1.insert(2);
	s1.insert(3);
	s1.insert(1);
	s1.insert(6);
	printSet(s1);
	cout << endl;
	s1.erase(s1.begin());
	s1.erase(3);
	printSet(s1);
}

//void test02()
//{
//	set<int>s1;
//	s1.insert(5);
//	s1.insert(2);
//	s1.insert(3);
//	s1.insert(1);
//	s1.insert(6);
//
//	set<int>::iterator pos = s1.find(7);
//	if (pos != s1.end())
//	{
//		cout << "找到，值为" << *pos << endl;
//	}
//	else
//	{
//		cout << "未找到" << endl;
//	}
//
//	// 返回第一个>=key的迭代器
//	set<int>::iterator it = s1.lower_bound(3);
//	if (it != s1.end())
//	{
//		cout << "找到了，值为:" << *it << endl;
//	}
//	else
//	{
//		cout << "未找到" << endl;
//	}
//
//	// upper_bound ：返回第一个<=key的迭代器，上边界
//
//	// 返回上下限的两个迭代器
//	pair<set<int>::iterator, set<int>::iterator> ret = s1.equal_range(3);
//	// 获取第一个值
//	if (ret.first != s1.end())
//	{
//		cout << "找到equal range lower值：" << *(ret.first) << endl;
//	}
//
//	if (ret.second != s1.end())
//	{
//		cout << "找到equal range upper值：" << *(ret.second) << endl;
//	}
//}

// 仿函数
class myCompare
{
public:
	bool operator()(int v1, int v2) const
	{
		return v1 > v2;
	}
};

void test03()
{
	set<int, myCompare>s1;
	s1.insert(5);
	s1.insert(2);
	s1.insert(3);
	s1.insert(1);
	s1.insert(6);

	for (set<int, myCompare>::iterator it = s1.begin(); it != s1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

class Person
{
public:
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	string m_name;
	int m_age;
};

// 指定排序规则
class myComparePerson
{
public:
	bool operator()(Person const &p1, Person const &p2) const
	{
		if (p1.m_age > p2.m_age)
			return true;
		return false;
	}
};

void test05()
{
	set<Person, myComparePerson> s1;
	Person p1("张三", 12);
	Person p2("李四", 6);
	Person p3("王五", 8);
	Person p4("二狗i", 19);

	s1.insert(p1);
	s1.insert(p2);
	s1.insert(p3);
	s1.insert(p4);

	// 显示
	for (set<Person, myComparePerson>::iterator it = s1.begin(); it != s1.end(); it++)
	{
		cout << "姓名：" << (*it).m_name << "，年龄： " << (*it).m_age << endl;
	}
}

int main() {
	test01();
	//test02();
	//test03();
	test05();
	system("pause");
	return EXIT_SUCCESS;
}