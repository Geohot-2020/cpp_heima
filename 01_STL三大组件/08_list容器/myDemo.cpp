#define _CRT_SECURE_NO_WARNING
#include <iostream>
using namespace std;
#include <list>
#include <string>

void printList(list<int>& L)
{
	for (list<int>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << endl;
	}
}

// 双向循环链表
// list iterator不支持随机访问
void test01()
{
	list<int>myList;
	for (int i = 0; i < 10; i++)
	{
		myList.push_back(i);
	}

	printList(myList);

	// 插入数据
	list<int>L3;
	L3.push_back(10);
	L3.push_front(20);
	printList(L3);

	L3.pop_back();	//头删
	L3.pop_front();	//尾删

	L3.insert(L3.begin(), 1000);
	printList(L3);

	L3.remove(1000);
	printList(L3);
}

bool myCompare(int v1, int v2)
{
	return v1 > v2;
}

// 翻转排序
void test02()
{
	list<int>myList;
	for (int i = 0; i < 10; i++)
	{
		myList.push_back(i);
	}
	myList.insert(myList.begin(), 5);
	myList.reverse();
	printList(myList);

	// 不能用系统提供的sort算法
	// 但类的内部有
	myList.sort(myCompare);
	printList(myList);

}

// 自定义数据类型
class Person
{
public:
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}

	// 重载 == 让remove可以删除自定义person类型
	bool operator== (const Person& p)
	{
		if (this->m_name == p.m_name && this->m_age == p.m_age)
		{
			return true;
		}
		else
			return false;
	}

	string m_name;
	int m_age;
};

bool myComparePerson(Person& p1, Person& p2)
{
	if (p1.m_age < p2.m_age)
		return true;
	return false;
}

void test05()
{
	list<Person> L;

	Person p1("张三", 13);
	Person p2("李四", 4);
	Person p3("王五", 20);

	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);

	L.sort(myComparePerson);

	// 删除李四
	L.remove(p3);
	



	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "name:" << (*it).m_name << ",age: " << (*it).m_age << endl;
	}


	
}

int main() {
	//test01();
	//test02();
	test05();
	system("pause");
	return EXIT_SUCCESS;
}