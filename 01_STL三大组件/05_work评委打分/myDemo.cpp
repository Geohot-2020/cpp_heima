#define _CRT_SECURE_NO_WARNING
#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <deque>
#include <algorithm>
#include <ctime>

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

void setScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		// 对五个人进行打分
		deque<int> d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60; // 60-100

			d.push_back(score);
		}
		//// 测试打分
		//for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		//{
		//	cout << (*dit) << " ";
		//}
		//cout << endl;
		
		// 排序,小到大
		sort(d.begin(), d.end());

		// 除最高低
		d.pop_back();
		d.pop_front();

		int sum = 0;	// 总分
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit;
		}
		
		int avg = sum / d.size();	// 平均分

		it->m_score = avg;
	}
}

void showScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名：" << (*it).m_Name << ", 平均分为：" << (*it).m_score << endl;
	}
}

int main() {
	// 随机数种子
	srand((unsigned)time(NULL));

	// 创建容器，选手
	vector<Person>v;

	// 创建五名选手
	createPerson(v);

	// 打分
	setScore(v);

	// 展示平均分
	showScore(v);

	//// 测试
	//for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	//{
	//	cout << "姓名：" << (*it).m_Name << endl;
	//}


	system("pause");
	return EXIT_SUCCESS;
}