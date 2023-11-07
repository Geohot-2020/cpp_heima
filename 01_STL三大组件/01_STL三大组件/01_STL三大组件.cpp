#define _CRT_SECURE_NO_WARNING
#include <iostream>
using namespace std;

#include <string.h>

// ����vector
#include <vector>

// ϵͳ�㷨
#include <algorithm>


// ������ �������� �����ָ��
// ��ָͨ��Ҳ�ǵ�����
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
	// ��������
	vector<int> v;	// ����һ�����int�������ݵ�����
	// �������м�����
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	// ������ ������
	vector<int>::iterator itBegin = v.begin(); // itBeginָ����ʼλ��
	
	vector<int>::iterator itEnd = v.end();	// ���һ��λ�õ���һ��

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

// �����Զ�����������
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
	Person p1("����", 18);
	Person p2("����", 20);
	Person p3("����", 30);
	Person p4("����", 22);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "����:" << (*it).m_Name << "����:" << it->m_Age << endl;
	}
}

void test04()
{
	vector<Person *> v;
	Person p1("����", 18);
	Person p2("����", 20);
	Person p3("����", 30);
	Person p4("����", 22);

	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);

	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << (*it)->m_Name << endl;
	}
}

// ����Ƕ������
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

	//����
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