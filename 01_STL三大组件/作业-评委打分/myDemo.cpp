#define _CRT_SECURE_NO_WARNING
#include <iostream>
using namespace std;
#include <vector>
#include <string>

class Person
{
public:
	Person(string name, int score)
	{
		this->m_Name = name;
		this->m_score = score;
	}
	string m_Name;	// 人名
	int m_score;	// 平均分
};

void createPerson(vector<Person>& v)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "选手";
		name += nameSeed[i];

		int score = 0;
		Person p(name, score);
		v.push_back(p);
	}
}

int main() {
	// 创建容器，选手
	vector<Person>v;

	// 创建五名选手
	createPerson(v);

	// 测试
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名：" << (*it).m_Name << endl;
	}

	system("pause");
	return EXIT_SUCCESS;
}