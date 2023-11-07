#define _CRT_SECURE_NO_WARNING
#include <iostream>
using namespace std;
#include <string.h>
#include <stdexcept>
void test01()
{
	string str;
	string str2(str);
	string str3 = str;

	string str4 = "abcd";
	string str5(10, 'a');

	cout << str5 << endl;

	// 基本赋值
	str = "hello";

	str3.assign("abced", 4);
	cout << str3 << endl;

	string str6;
	str6.assign(str, 1, 3);
	cout << str3 << endl;
}

void test02()
{
	string s = "hello world";

	for (int i = 0; i < s.size(); i++)
		//cout << s[i] << endl;
		cout << s.at(i) << endl;
	try
	{
		//cout << s[100] << endl;
		cout << s.at(100) << endl;
	}
	catch (out_of_range& e)
	{
		cout << e.what() << endl;
	}
	catch (...)
	{
		cout << "越界异常" << endl;
	}

}

void test03()
{
	string s1 = "我";
	string s2 = "nbei";
	s2 += s1;
	s2.append("ok");
	
	s2.replace(1, 3, "1111");

	cout << s2 << endl;
}

void test05()
{
	string s1 = "abcde";

	string s2 = s1.substr(1, 3);

	cout << s2 << endl;

	string email = "zhengyc@qq.com";
	int pos = email.find("@");
	cout << pos << endl;
	string user_name = email.substr(0, pos);
	cout << "username:" << user_name << endl;
}

void test06()
{
	string s = "abc";
	const char* p = s.c_str();

	string s2(p);
}

void test09()
{
	string s = "abCDeFg";
	for (int i = 0; i < s.size(); i++)
	{
		s[i] = toupper(s[i]);
	}
	cout << s << endl;
}

int main() {

	test01();
	test02();
	test03();
	test05();
	test09();
	system("pause");
	return EXIT_SUCCESS;
}