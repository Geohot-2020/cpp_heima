#include <iostream>
using namespace std;

////全局变量
//int g_a = 10;
//int g_b = 10;
//
////全局常量
//const int c_g_a = 10;
//const int c_g_b = 10;
//
//int main() {
//
//	//局部变量
//	int a = 10;
//	int b = 10;
//
//	//打印地址
//	cout << "局部变量a地址为： " << (int)&a << endl;
//	cout << "局部变量b地址为： " << (int)&b << endl;
//
//	cout << "全局变量g_a地址为： " << (int)&g_a << endl;
//	cout << "全局变量g_b地址为： " << (int)&g_b << endl;
//
//	//静态变量
//	static int s_a = 10;
//	static int s_b = 10;
//
//	cout << "静态变量s_a地址为： " << (int)&s_a << endl;
//	cout << "静态变量s_b地址为： " << (int)&s_b << endl;
//
//	cout << "字符串常量地址为： " << (int)&"hello world" << endl;
//	cout << "字符串常量地址为： " << (int)&"hello world1" << endl;
//
//	cout << "全局常量c_g_a地址为： " << (int)&c_g_a << endl;
//	cout << "全局常量c_g_b地址为： " << (int)&c_g_b << endl;
//
//	const int c_l_a = 10;
//	const int c_l_b = 10;
//	cout << "局部常量c_l_a地址为： " << (int)&c_l_a << endl;
//	cout << "局部常量c_l_b地址为： " << (int)&c_l_b << endl;
//
//	system("pause");
//
//	return 0;
//}

// ​		由编译器自动分配释放, 存放函数的参数值,局部变量等

//​		注意事项：不要返回局部变量的地址，栈区开辟的数据由编译器自动释放
//int* func()
//{
//	int a = 10;
//	return &a;
//}
//
//int main() {
//
//	int* p = func();
//
//	cout << *p << endl;
//	cout << *p << endl;
//
//	system("pause");
//
//	return 0;
//}

//​		由程序员分配释放, 若程序员不释放, 程序结束时由操作系统回收
//
//​		在C++中主要利用new在堆区开辟内存
//int* func()
//{
//	int* a = new int(10);
//	return a;
//}
//
//int main() {
//
//	int* p = func();
//
//	cout << *p << endl;
//	cout << *p << endl;
//
//	system("pause");
//
//	return 0;
//}

// 基本语法
//int* func()
//{
//	int* a = new int(10);
//	return a;
//}
//
//int main() {
//
//	int* p = func();
//
//	cout << *p << endl;
//	cout << *p << endl;
//
//	//利用delete释放堆区数据
//	delete p;
//
//	//cout << *p << endl; //报错，释放的空间不可访问
//
//	system("pause");
//
//	return 0;
//}

// 开辟数组
//堆区开辟数组
//int main() {
//
//	int* arr = new int[10];
//
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i + 100;
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	//释放数组 delete 后加 []
//	delete[] arr;
//
//	system("pause");
//
//	return 0;
//}

//// 引用 数据类型 &别名 = 原名
//int main() {
//
//	int a = 10;
//	int& b = a;
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	b = 100;
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	system("pause");
//
//	return 0;
//}

// 引用必须初始化
//int main() {
//	int a = 10;
//	int b = 20;
//	int& c = a;
//	c = b;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//
//	system("pause");
//
//	return 0;
//}

//// 引用传参
////1. 值传递
//void mySwap01(int a, int b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
////2. 地址传递
//void mySwap02(int* a, int* b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
////3. 引用传递
//void mySwap03(int& a, int& b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//int main() {
//
//	int a = 10;
//	int b = 20;
//
//	mySwap01(a, b);
//	cout << "a:" << a << " b:" << b << endl;
//
//	mySwap02(&a, &b);
//	cout << "a:" << a << " b:" << b << endl;
//
//	mySwap03(a, b);
//	cout << "a:" << a << " b:" << b << endl;
//
//	system("pause");
//
//	return 0;
//}

//返回局部变量引用
//int& test01() {
//	int a = 10; //局部变量
//	return a;
//}
//
//返回静态变量引用
//int& test02() {
//	static int a = 20;
//	return a;
//}
//
//int main() {
//
//	不能返回局部变量的引用
//	int& ref = test01();
//	cout << "ref = " << ref << endl;
//	cout << "ref = " << ref << endl;
//
//	如果函数做左值，那么必须返回引用
//	int& ref2 = test02();
//	cout << "ref2 = " << ref2 << endl;
//	cout << "ref2 = " << ref2 << endl;
//
//	test02() = 1000;
//
//	cout << "ref2 = " << ref2 << endl;
//	cout << "ref2 = " << ref2 << endl;
//
//	system("pause");
//
//	return 0;
//}

////发现是引用，转换为 int* const ref = &a;
//void func(int& ref) {
//	ref = 100; // ref是引用，转换为*ref = 100
//}
//int main() {
//	int a = 10;
//
//	//自动转换为 int* const ref = &a; 指针常量是指针指向不可改，也说明为什么引用不可更改
//	int& ref = a;
//	ref = 20; //内部发现ref是引用，自动帮我们转换为: *ref = 20;
//
//	cout << "a:" << a << endl;
//	cout << "ref:" << ref << endl;
//
//	func(a);
//	return 0;
//}

////引用使用的场景，通常用来修饰形参
//void showValue(const int& v) {
//	//v += 10;
//	cout << v << endl;
//}
//
//int main() {
//
//	//int& ref = 10;  引用本身需要一个合法的内存空间，因此这行错误
//	//加入const就可以了，编译器优化代码，int temp = 10; const int& ref = temp;
//	const int& ref = 10;
//
//	//ref = 100;  //加入const后不可以修改变量
//	cout << ref << endl;
//
//	//函数中利用常量引用防止误操作修改实参
//	int a = 10;
//	showValue(a);
//
//	system("pause");
//
//	return 0;
//}

//int func(int a, int b = 10, int c = 10) {
//	return a + b + c;
//}
//
////1. 如果某个位置参数有默认值，那么从这个位置往后，从左向右，必须都要有默认值
////2. 如果函数声明有默认值，函数实现的时候就不能有默认参数
//int func2(int a = 10, int b = 10);
//int func2(int a, int b) {
//	return a + b;
//}
//
//int main() {
//
//	cout << "ret = " << func(20, 20) << endl;
//	cout << "ret = " << func(100) << endl;
//
//	system("pause");
//
//	return 0;
//}

////函数占位参数 ，占位参数也可以有默认参数
//void func(int a, int) {
//	cout << "this is func" << endl;
//}
//
//int main() {
//
//	func(10, 10); //占位参数必须填补
//
//	system("pause");
//
//	return 0;
//}

////函数重载需要函数都在同一个作用域下
//void func()
//{
//	cout << "func 的调用！" << endl;
//}
//void func(int a)
//{
//	cout << "func (int a) 的调用！" << endl;
//}
//void func(double a)
//{
//	cout << "func (double a)的调用！" << endl;
//}
//void func(int a, double b)
//{
//	cout << "func (int a ,double b) 的调用！" << endl;
//}
//void func(double a, int b)
//{
//	cout << "func (double a ,int b)的调用！" << endl;
//}
//
////函数返回值不可以作为函数重载条件
////int func(double a, int b)
////{
////	cout << "func (double a ,int b)的调用！" << endl;
////}
//
//
//int main() {
//
//	func();
//	func(10);
//	func(3.14);
//	func(10, 3.14);
//	func(3.14, 10);
//
//	system("pause");
//
//	return 0;
//}

////函数重载注意事项
////1、引用作为重载条件
//
//void func(int& a)
//{
//	cout << "func (int &a) 调用 " << endl;
//}
//
//void func(const int& a)
//{
//	cout << "func (const int &a) 调用 " << endl;
//}
//
//
////2、函数重载碰到函数默认参数
//
//void func2(int a, int b = 10)
//{
//	cout << "func2(int a, int b = 10) 调用" << endl;
//}
//
//void func2(int a)
//{
//	cout << "func2(int a) 调用" << endl;
//}
//
//int main() {
//
//	int a = 10;
//	func(a); //调用无const
//	func(10);//调用有const
//
//
//	//func2(10); //碰到默认参数产生歧义，需要避免
//
//	system("pause");
//
//	return 0;
//}

////圆周率
//const double PI = 3.14;
//
////1、封装的意义
////将属性和行为作为一个整体，用来表现生活中的事物
//
////封装一个圆类，求圆的周长
////class代表设计一个类，后面跟着的是类名
//class Circle
//{
//public:  //访问权限  公共的权限
//
//	//属性
//	int m_r;//半径
//
//	//行为
//	//获取到圆的周长
//	double calculateZC()
//	{
//		//2 * pi  * r
//		//获取圆的周长
//		return  2 * PI * m_r;
//	}
//};
//
//int main() {
//
//	//通过圆类，创建圆的对象
//	// c1就是一个具体的圆
//	Circle c1;
//	c1.m_r = 10; //给圆对象的半径 进行赋值操作
//
//	//2 * pi * 10 = = 62.8
//	cout << "圆的周长为： " << c1.calculateZC() << endl;
//
//	system("pause");
//
//	return 0;
//}

////学生类
//class Student {
//public:
//	void setName(string name) {
//		m_name = name;
//	}
//	void setID(int id) {
//		m_id = id;
//	}
//
//	void showStudent() {
//		cout << "name:" << m_name << " ID:" << m_id << endl;
//	}
//public:
//	string m_name;
//	int m_id;
//};
//
//int main() {
//
//	Student stu;
//	stu.setName("德玛西亚");
//	stu.setID(250);
//	stu.showStudent();
//
//	system("pause");
//
//	return 0;
//}

////三种权限
////公共权限  public     类内可以访问  类外可以访问
////保护权限  protected  类内可以访问  类外不可以访问
////私有权限  private    类内可以访问  类外不可以访问
//
//class Person
//{
//	//姓名  公共权限
//public:
//	string m_Name;
//
//	//汽车  保护权限
//protected:
//	string m_Car;
//
//	//银行卡密码  私有权限
//private:
//	int m_Password;
//
//public:
//	void func()
//	{
//		m_Name = "张三";
//		m_Car = "拖拉机";
//		m_Password = 123456;
//	}
//};
//
//int main() {
//
//	Person p;
//	p.m_Name = "李四";
//	//p.m_Car = "奔驰";  //保护权限类外访问不到
//	//p.m_Password = 123; //私有权限类外访问不到
//
//	system("pause");
//
//	return 0;
//}

//// class 默认私有，struct 默认公共
//class C1
//{
//	int  m_A; //默认是私有权限
//};
//
//struct C2
//{
//	int m_A;  //默认是公共权限
//};
//
//int main() {
//
//	C1 c1;
//	//c1.m_A = 10; //错误，访问权限是私有 
//
//	C2 c2;
//	c2.m_A = 10; //正确，访问权限是公共
//
//	system("pause");
//
//	return 0;
//}

//class Person {
//public:
//
//	//姓名设置可读可写
//	void setName(string name) {
//		m_Name = name;
//	}
//	string getName()
//	{
//		return m_Name;
//	}
//
//
//	//获取年龄 
//	int getAge() {
//		return m_Age;
//	}
//	//设置年龄
//	void setAge(int age) {
//		if (age < 0 || age > 150) {
//			cout << "你个老妖精!" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//
//	//情人设置为只写
//	void setLover(string lover) {
//		m_Lover = lover;
//	}
//
//private:
//	string m_Name; //可读可写  姓名
//
//	int m_Age; //只读  年龄
//
//	string m_Lover; //只写  情人
//};
//
//
//int main() {
//
//	Person p;
//	//姓名设置
//	p.setName("张三");
//	cout << "姓名： " << p.getName() << endl;
//
//	//年龄设置
//	p.setAge(50);
//	cout << "年龄： " << p.getAge() << endl;
//
//	//情人设置
//	p.setLover("苍井");
//	//cout << "情人： " << p.m_Lover << endl;  //只写属性，不可以读取
//
//	system("pause");
//
//	return 0;
//}

//class Person
//{
//public:
//	//构造函数
//	Person()
//	{
//		cout << "Person的构造函数调用" << endl;
//	}
//	//析构函数
//	~Person()
//	{
//		cout << "Person的析构函数调用" << endl;
//	}
//
//};
//
//void test01()
//{
//	Person p;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}
//
//1、构造函数分类
// 按照参数分类分为 有参和无参构造   无参又称为默认构造函数
// 按照类型分类分为 普通构造和拷贝构造
//
//class Person {
//public:
//	//无参（默认）构造函数
//	Person() {
//		cout << "无参构造函数!" << endl;
//	}
//	//有参构造函数
//	Person(int a) {
//		age = a;
//		cout << "有参构造函数!" << endl;
//	}
//	//拷贝构造函数
//	Person(const Person& p) {
//		age = p.age;
//		cout << "拷贝构造函数!" << endl;
//	}
//	//析构函数
//	~Person() {
//		cout << "析构函数!" << endl;
//	}
//public:
//	int age;
//};
//
////2、构造函数的调用
////调用无参构造函数
//void test01() {
//	Person p; //调用无参构造函数
//}
//
////调用有参的构造函数
//void test02() {
//
//	//2.1  括号法，常用
//	Person p1(10);
//	//注意1：调用无参构造函数不能加括号，如果加了编译器认为这是一个函数声明
//	//Person p2();
//
//	//2.2 显式法
//	Person p2 = Person(10);
//	Person p3 = Person(p2);
//	//Person(10)单独写就是匿名对象  当前行结束之后，马上析构
//
//	//2.3 隐式转换法
//	Person p4 = 10; // Person p4 = Person(10); 
//	Person p5 = p4; // Person p5 = Person(p4); 
//
//	//注意2：不能利用 拷贝构造函数 初始化匿名对象 编译器认为是对象声明
//	//Person p5(p4);
//}
//
//int main() {
//
//	test01();
//	//test02();
//
//	system("pause");
//
//	return 0;
//}

//class Person {
//public:
//	Person() {
//		cout << "无参构造函数!" << endl;
//		mAge = 0;
//	}
//	Person(int age) {
//		cout << "有参构造函数!" << endl;
//		mAge = age;
//	}
//	Person(const Person& p) {
//		cout << "拷贝构造函数!" << endl;
//		mAge = p.mAge;
//	}
//	//析构函数在释放内存之前调用
//	~Person() {
//		cout << "析构函数!" << endl;
//	}
//public:
//	int mAge;
//};
//
////1. 使用一个已经创建完毕的对象来初始化一个新对象
//void test01() {
//
//	Person man(100); //p对象已经创建完毕
//	Person newman(man); //调用拷贝构造函数
//	Person newman2 = man; //拷贝构造
//
//	//Person newman3;
//	//newman3 = man; //不是调用拷贝构造函数，赋值操作
//}
//
////2. 值传递的方式给函数参数传值
////相当于Person p1 = p;
//void doWork(Person p1) {}
//void test02() {
//	Person p; //无参构造函数
//	doWork(p);
//}
//
////3. 以值方式返回局部对象
//Person doWork2()
//{
//	Person p1;
//	cout << (int*)&p1 << endl;
//	return p1;
//}
//
//void test03()
//{
//	Person p = doWork2();
//	cout << (int*)&p << endl;
//}
//
//
//int main() {
//
//	//test01();
//	//test02();
//	test03();
//
//	system("pause");
//
//	return 0;
//}


//class Person {
//public:
//	无参（默认）构造函数
//	Person() {
//		cout << "无参构造函数!" << endl;
//	}
//	有参构造函数
//	Person(int a) {
//		age = a;
//		cout << "有参构造函数!" << endl;
//	}
//	拷贝构造函数
//	Person(const Person& p) {
//		age = p.age;
//		cout << "拷贝构造函数!" << endl;
//	}
//	析构函数
//	~Person() {
//		cout << "析构函数!" << endl;
//	}
//public:
//	int age;
//};
//
//void test01()
//{
//	Person p1(18);
//	如果不写拷贝构造，编译器会自动添加拷贝构造，并且做浅拷贝操作
//	Person p2(p1);
//
//	cout << "p2的年龄为： " << p2.age << endl;
//}
//
//void test02()
//{
//	如果用户提供有参构造，编译器不会提供默认构造，会提供拷贝构造
//	Person p1; //此时如果用户自己没有提供默认构造，会出错
//	Person p2(10); //用户提供的有参
//	Person p3(p2); //此时如果用户没有提供拷贝构造，编译器会提供
//
//	如果用户提供拷贝构造，编译器不会提供其他构造函数
//	Person p4; //此时如果用户自己没有提供默认构造，会出错
//	Person p5(10); //此时如果用户自己没有提供有参，会出错
//	Person p6(p5); //用户自己提供拷贝构造
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//class Person {
//public:
//	//无参（默认）构造函数
//	Person() {
//		cout << "无参构造函数!" << endl;
//	}
//	//有参构造函数
//	Person(int age, int height) {
//
//		cout << "有参构造函数!" << endl;
//
//		m_age = age;
//		m_height = new int(height);
//
//	}
//	//拷贝构造函数  
//	Person(const Person& p) {
//		cout << "拷贝构造函数!" << endl;
//		//如果不利用深拷贝在堆区创建新内存，会导致浅拷贝带来的重复释放堆区问题
//		m_age = p.m_age;
//		m_height = new int(*p.m_height);
//
//	}
//
//	//析构函数
//	~Person() {
//		cout << "析构函数!" << endl;
//		if (m_height != NULL)
//		{
//			delete m_height;
//		}
//	}
//public:
//	int m_age;
//	int* m_height;
//};
//
//void test01()
//{
//	Person p1(18, 180);
//
//	Person p2(p1);
//
//	cout << "p1的年龄： " << p1.m_age << " 身高： " << *p1.m_height << endl;
//
//	cout << "p2的年龄： " << p2.m_age << " 身高： " << *p2.m_height << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//class Person {
//public:
//
//	////传统方式初始化
//	//Person(int a, int b, int c) {
//	//	m_A = a;
//	//	m_B = b;
//	//	m_C = c;
//	//}
//
//	//初始化列表方式初始化
//	Person(int a, int b, int c) :m_A(a), m_B(b), m_C(c) {}
//	void PrintPerson() {
//		cout << "mA:" << m_A << endl;
//		cout << "mB:" << m_B << endl;
//		cout << "mC:" << m_C << endl;
//	}
//private:
//	int m_A;
//	int m_B;
//	int m_C;
//};
//
//int main() {
//
//	Person p(1, 2, 3);
//	p.PrintPerson();
//
//
//	system("pause");
//
//	return 0;
//}


//class Phone
//{
//public:
//	Phone(string name)
//	{
//		m_PhoneName = name;
//		cout << "Phone构造" << endl;
//	}
//
//	~Phone()
//	{
//		cout << "Phone析构" << endl;
//	}
//
//	string m_PhoneName;
//
//};
//
//
//class Person
//{
//public:
//
//	初始化列表可以告诉编译器调用哪一个构造函数
//	Person(string name, string pName) :m_Name(name), m_Phone(pName)
//	{
//		cout << "Person构造" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person析构" << endl;
//	}
//
//	void playGame()
//	{
//		cout << m_Name << " 使用" << m_Phone.m_PhoneName << " 牌手机! " << endl;
//	}
//
//	string m_Name;
//	Phone m_Phone;
//
//};
//void test01()
//{
//	当类中成员是其他类对象时，我们称该成员为 对象成员
//	构造的顺序是 ：先调用对象成员的构造，再调用本类构造
//	析构顺序与构造相反
//	Person p("张三", "苹果X");
//	p.playGame();
//
//}
//
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//class Person
//{
//
//public:
//
//	static int m_A; //静态成员变量
//
//	//静态成员变量特点：
//	//1 在编译阶段分配内存
//	//2 类内声明，类外初始化
//	//3 所有对象共享同一份数据
//
//private:
//	static int m_B; //静态成员变量也是有访问权限的
//};
//int Person::m_A = 10;
//int Person::m_B = 10;
//
//void test01()
//{
//	//静态成员变量两种访问方式
//
//	//1、通过对象
//	Person p1;
//	p1.m_A = 100;
//	cout << "p1.m_A = " << p1.m_A << endl;
//
//	Person p2;
//	p2.m_A = 200;
//	cout << "p1.m_A = " << p1.m_A << endl; //共享同一份数据
//	cout << "p2.m_A = " << p2.m_A << endl;
//
//	//2、通过类名
//	cout << "m_A = " << Person::m_A << endl;
//
//
//	//cout << "m_B = " << Person::m_B << endl; //私有权限访问不到
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//class Person
//{
//
//public:
//
//	//静态成员函数特点：
//	//1 程序共享一个函数
//	//2 静态成员函数只能访问静态成员变量
//
//	static void func()
//	{
//		cout << "func调用" << endl;
//		m_A = 100;
//		//m_B = 100; //错误，不可以访问非静态成员变量
//	}
//
//	static int m_A; //静态成员变量
//	int m_B; // 
//private:
//
//	//静态成员函数也是有访问权限的
//	static void func2()
//	{
//		cout << "func2调用" << endl;
//	}
//};
//int Person::m_A = 10;
//
//
//void test01()
//{
//	//静态成员变量两种访问方式
//
//	//1、通过对象
//	Person p1;
//	p1.func();
//
//	//2、通过类名
//	Person::func();
//
//
//	//Person::func2(); //私有权限访问不到
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}


//class Person
//{
//
//public:
//
//	static int m_A; //静态成员变量
//
//	//静态成员变量特点：
//	//1 在编译阶段分配内存
//	//2 类内声明，类外初始化
//	//3 所有对象共享同一份数据
//
//private:
//	static int m_B; //静态成员变量也是有访问权限的
//};
//int Person::m_A = 10;
//int Person::m_B = 10;
//
//void test01()
//{
//	//静态成员变量两种访问方式
//
//	//1、通过对象
//	Person p1;
//	p1.m_A = 100;
//	cout << "p1.m_A = " << p1.m_A << endl;
//
//	Person p2;
//	p2.m_A = 200;
//	cout << "p1.m_A = " << p1.m_A << endl; //共享同一份数据
//	cout << "p2.m_A = " << p2.m_A << endl;
//
//	//2、通过类名
//	cout << "m_A = " << Person::m_A << endl;
//
//
//	//cout << "m_B = " << Person::m_B << endl; //私有权限访问不到
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//class Person
//{
//
//public:
//
//	//静态成员函数特点：
//	//1 程序共享一个函数
//	//2 静态成员函数只能访问静态成员变量
//
//	static void func()
//	{
//		cout << "func调用" << endl;
//		m_A = 100;
//		//m_B = 100; //错误，不可以访问非静态成员变量
//	}
//
//	static int m_A; //静态成员变量
//	int m_B; // 
//private:
//
//	//静态成员函数也是有访问权限的
//	static void func2()
//	{
//		cout << "func2调用" << endl;
//	}
//};
//int Person::m_A = 10;
//
//
//void test01()
//{
//	//静态成员变量两种访问方式
//
//	//1、通过对象
//	Person p1;
//	p1.func();
//
//	//2、通过类名
//	Person::func();
//
//
//	//Person::func2(); //私有权限访问不到
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//class Person {
//public:
//	Person() {
//		mA = 0;
//	}
//	//非静态成员变量占对象空间
//	int mA;
//	//静态成员变量不占对象空间
//	static int mB;
//	//函数也不占对象空间，所有函数共享一个函数实例
//	void func() {
//		cout << "mA:" << this->mA << endl;
//	}
//	//静态成员函数也不占对象空间
//	static void sfunc() {
//	}
//};
//
//int main() {
//
//	cout << sizeof(Person) << endl;
//
//	system("pause");
//
//	return 0;
//}

//class Person
//{
//public:
//
//	Person(int age)
//	{
//		//1、当形参和成员变量同名时，可用this指针来区分
//		this->age = age;
//	}
//
//	Person& PersonAddPerson(Person p)
//	{
//		this->age += p.age;
//		//返回对象本身
//		return *this;
//	}
//
//	int age;
//};
//
//void test01()
//{
//	Person p1(10);
//	cout << "p1.age = " << p1.age << endl;
//
//	Person p2(10);
//	p2.PersonAddPerson(p1).PersonAddPerson(p1).PersonAddPerson(p1);
//	cout << "p2.age = " << p2.age << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}


////空指针访问成员函数
//class Person {
//public:
//
//	void ShowClassName() {
//		cout << "我是Person类!" << endl;
//	}
//
//	void ShowPerson() {
//		if (this == NULL) {
//			return;
//		}
//		cout << mAge << endl;
//	}
//
//public:
//	int mAge;
//};
//
//void test01()
//{
//	Person* p = NULL;
//	p->ShowClassName(); //空指针，可以调用成员函数
//	p->ShowPerson();  //但是如果成员函数中用到了this指针，就不可以了
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//class Person {
//public:
//	Person() {
//		m_A = 0;
//		m_B = 0;
//	}
//
//	//this指针的本质是一个指针常量，指针的指向不可修改
//	//如果想让指针指向的值也不可以修改，需要声明常函数
//	void ShowPerson() const {
//		//const Type* const pointer;
//		//this = NULL; //不能修改指针的指向 Person* const this;
//		//this->mA = 100; //但是this指针指向的对象的数据是可以修改的
//
//		//const修饰成员函数，表示指针指向的内存空间的数据不能修改，除了mutable修饰的变量
//		this->m_B = 100;
//	}
//
//	void MyFunc() const {
//		//mA = 10000;
//	}
//
//public:
//	int m_A;
//	mutable int m_B; //可修改 可变的
//};
//
//
////const修饰对象  常对象
//void test01() {
//
//	const Person person; //常量对象  
//	cout << person.m_A << endl;
//	//person.mA = 100; //常对象不能修改成员变量的值,但是可以访问
//	person.m_B = 100; //但是常对象可以修改mutable修饰成员变量
//
//	//常对象访问成员函数
//	person.MyFunc(); //常对象不能调用const的函数
//
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//class Building
//{
//	//告诉编译器 goodGay全局函数 是 Building类的好朋友，可以访问类中的私有内容
//	friend void goodGay(Building* building);
//
//public:
//
//	Building()
//	{
//		this->m_SittingRoom = "客厅";
//		this->m_BedRoom = "卧室";
//	}
//
//
//public:
//	string m_SittingRoom; //客厅
//
//private:
//	string m_BedRoom; //卧室
//};
//
//
//void goodGay(Building* building)
//{
//	cout << "好基友正在访问： " << building->m_SittingRoom << endl;
//	cout << "好基友正在访问： " << building->m_BedRoom << endl;
//}
//
//
//void test01()
//{
//	Building b;
//	goodGay(&b);
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}

//class Building;
//class goodGay
//{
//public:
//
//	goodGay();
//	void visit();
//
//private:
//	Building* building;
//};
//
//
//class Building
//{
//	//告诉编译器 goodGay类是Building类的好朋友，可以访问到Building类中私有内容
//	friend class goodGay;
//
//public:
//	Building();
//
//public:
//	string m_SittingRoom; //客厅
//private:
//	string m_BedRoom;//卧室
//};
//
//Building::Building()
//{
//	this->m_SittingRoom = "客厅";
//	this->m_BedRoom = "卧室";
//}
//
//goodGay::goodGay()
//{
//	building = new Building;
//}
//
//void goodGay::visit()
//{
//	cout << "好基友正在访问" << building->m_SittingRoom << endl;
//	cout << "好基友正在访问" << building->m_BedRoom << endl;
//}
//
//void test01()
//{
//	goodGay gg;
//	gg.visit();
//
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}


//class Building;
//class goodGay
//{
//public:
//
//	goodGay();
//	void visit(); //只让visit函数作为Building的好朋友，可以发访问Building中私有内容
//	void visit2();
//
//private:
//	Building* building;
//};
//
//
//class Building
//{
//	//告诉编译器  goodGay类中的visit成员函数 是Building好朋友，可以访问私有内容
//	friend void goodGay::visit();
//
//public:
//	Building();
//
//public:
//	string m_SittingRoom; //客厅
//private:
//	string m_BedRoom;//卧室
//};
//
//Building::Building()
//{
//	this->m_SittingRoom = "客厅";
//	this->m_BedRoom = "卧室";
//}
//
//goodGay::goodGay()
//{
//	building = new Building;
//}
//
//void goodGay::visit()
//{
//	cout << "好基友正在访问" << building->m_SittingRoom << endl;
//	cout << "好基友正在访问" << building->m_BedRoom << endl;
//}
//
//void goodGay::visit2()
//{
//	cout << "好基友正在访问" << building->m_SittingRoom << endl;
//	//cout << "好基友正在访问" << building->m_BedRoom << endl;
//}
//
//void test01()
//{
//	goodGay  gg;
//	gg.visit();
//
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}

//class Person {
//public:
//	Person() {};
//	Person(int a, int b)
//	{
//		this->m_A = a;
//		this->m_B = b;
//	}
//	//成员函数实现 + 号运算符重载
//	Person operator+(const Person& p) {
//		Person temp;
//		temp.m_A = this->m_A + p.m_A;
//		temp.m_B = this->m_B + p.m_B;
//		return temp;
//	}
//
//
//public:
//	int m_A;
//	int m_B;
//};
//
////全局函数实现 + 号运算符重载
////Person operator+(const Person& p1, const Person& p2) {
////	Person temp(0, 0);
////	temp.m_A = p1.m_A + p2.m_A;
////	temp.m_B = p1.m_B + p2.m_B;
////	return temp;
////}
//
////运算符重载 可以发生函数重载 
//Person operator+(const Person& p2, int val)
//{
//	Person temp;
//	temp.m_A = p2.m_A + val;
//	temp.m_B = p2.m_B + val;
//	return temp;
//}
//
//void test() {
//
//	Person p1(10, 10);
//	Person p2(20, 20);
//
//	//成员函数方式
//	Person p3 = p2 + p1;  //相当于 p2.operaor+(p1)
//	cout << "mA:" << p3.m_A << " mB:" << p3.m_B << endl;
//
//
//	Person p4 = p3 + 10; //相当于 operator+(p3,10)
//	cout << "mA:" << p4.m_A << " mB:" << p4.m_B << endl;
//
//}
//
//int main() {
//
//	test();
//
//	system("pause");
//
//	return 0;
//}

//class Person {
//	friend ostream& operator<<(ostream& out, Person& p);
//
//public:
//
//	Person(int a, int b)
//	{
//		this->m_A = a;
//		this->m_B = b;
//	}
//
//	//成员函数 实现不了  p << cout 不是我们想要的效果
//	//void operator<<(Person& p){
//	//}
//
//private:
//	int m_A;
//	int m_B;
//};
//
////全局函数实现左移重载
////ostream对象只能有一个
//ostream& operator<<(ostream& out, Person& p) {
//	out << "a:" << p.m_A << " b:" << p.m_B;
//	return out;
//}
//
//void test() {
//
//	Person p1(10, 20);
//
//	cout << p1 << "hello world" << endl; //链式编程
//}
//
//int main() {
//
//	test();
//
//	system("pause");
//
//	return 0;
//}


//class MyInteger {
//
//	friend ostream& operator<<(ostream& out, MyInteger myint);
//
//public:
//	MyInteger() {
//		m_Num = 0;
//	}
//	//前置++
//	MyInteger& operator++() {
//		//先++
//		m_Num++;
//		//再返回
//		return *this;
//	}
//
//	//后置++
//	MyInteger operator++(int) {
//		//先返回
//		MyInteger temp = *this; //记录当前本身的值，然后让本身的值加1，但是返回的是以前的值，达到先返回后++；
//		m_Num++;
//		return temp;
//	}
//
//private:
//	int m_Num;
//};
//
//
//ostream& operator<<(ostream& out, MyInteger myint) {
//	out << myint.m_Num;
//	return out;
//}
//
//
////前置++ 先++ 再返回
//void test01() {
//	MyInteger myInt;
//	cout << ++myInt << endl;
//	cout << myInt << endl;
//}
//
////后置++ 先返回 再++
//void test02() {
//
//	MyInteger myInt;
//	cout << myInt++ << endl;
//	cout << myInt << endl;
//}
//
//int main() {
//
//	test01();
//	test02();
//
//	system("pause");
//
//	return 0;
//}

//class Person
//{
//public:
//
//	Person(int age)
//	{
//		//将年龄数据开辟到堆区
//		m_Age = new int(age);
//	}
//
//	//重载赋值运算符 
//	Person& operator=(Person& p)
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		//编译器提供的代码是浅拷贝
//		//m_Age = p.m_Age;
//
//		//提供深拷贝 解决浅拷贝的问题
//		m_Age = new int(*p.m_Age);
//
//		//返回自身
//		return *this;
//	}
//
//
//	~Person()
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//	}
//
//	//年龄的指针
//	int* m_Age;
//
//};
//
//
//void test01()
//{
//	Person p1(18);
//
//	Person p2(20);
//
//	Person p3(30);
//
//	p3 = p2 = p1; //赋值操作
//
//	cout << "p1的年龄为：" << *p1.m_Age << endl;
//
//	cout << "p2的年龄为：" << *p2.m_Age << endl;
//
//	cout << "p3的年龄为：" << *p3.m_Age << endl;
//}
//
//int main() {
//
//	test01();
//
//	//int a = 10;
//	//int b = 20;
//	//int c = 30;
//
//	//c = b = a;
//	//cout << "a = " << a << endl;
//	//cout << "b = " << b << endl;
//	//cout << "c = " << c << endl;
//
//	system("pause");
//
//	return 0;
//}


//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	};
//
//	bool operator==(Person& p)
//	{
//		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//
//	bool operator!=(Person& p)
//	{
//		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
//		{
//			return false;
//		}
//		else
//		{
//			return true;
//		}
//	}
//
//	string m_Name;
//	int m_Age;
//};
//
//void test01()
//{
//	//int a = 0;
//	//int b = 0;
//
//	Person a("孙悟空", 18);
//	Person b("孙悟空", 18);
//
//	if (a == b)
//	{
//		cout << "a和b相等" << endl;
//	}
//	else
//	{
//		cout << "a和b不相等" << endl;
//	}
//
//	if (a != b)
//	{
//		cout << "a和b不相等" << endl;
//	}
//	else
//	{
//		cout << "a和b相等" << endl;
//	}
//}
//
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

////Java页面
//class Java
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,C++...(公共分类列表)" << endl;
//	}
//	void content()
//	{
//		cout << "JAVA学科视频" << endl;
//	}
//};
////Python页面
//class Python
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,C++...(公共分类列表)" << endl;
//	}
//	void content()
//	{
//		cout << "Python学科视频" << endl;
//	}
//};
////C++页面
//class CPP
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,C++...(公共分类列表)" << endl;
//	}
//	void content()
//	{
//		cout << "C++学科视频" << endl;
//	}
//};
//
//void test01()
//{
//	//Java页面
//	cout << "Java下载视频页面如下： " << endl;
//	Java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//	cout << "--------------------" << endl;
//
//	//Python页面
//	cout << "Python下载视频页面如下： " << endl;
//	Python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//	cout << "--------------------" << endl;
//
//	//C++页面
//	cout << "C++下载视频页面如下： " << endl;
//	CPP cp;
//	cp.header();
//	cp.footer();
//	cp.left();
//	cp.content();
//
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

////公共页面
//class BasePage
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
//	}
//
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,C++...(公共分类列表)" << endl;
//	}
//
//};
//
////Java页面
//class Java : public BasePage
//{
//public:
//	void content()
//	{
//		cout << "JAVA学科视频" << endl;
//	}
//};
////Python页面
//class Python : public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Python学科视频" << endl;
//	}
//};
////C++页面
//class CPP : public BasePage
//{
//public:
//	void content()
//	{
//		cout << "C++学科视频" << endl;
//	}
//};
//
//void test01()
//{
//	//Java页面
//	cout << "Java下载视频页面如下： " << endl;
//	Java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//	cout << "--------------------" << endl;
//
//	//Python页面
//	cout << "Python下载视频页面如下： " << endl;
//	Python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//	cout << "--------------------" << endl;
//
//	//C++页面
//	cout << "C++下载视频页面如下： " << endl;
//	CPP cp;
//	cp.header();
//	cp.footer();
//	cp.left();
//	cp.content();
//
//
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//class Base1
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
////公共继承
//class Son1 :public Base1
//{
//public:
//	void func()
//	{
//		m_A; //可访问 public权限
//		m_B; //可访问 protected权限
//		//m_C; //不可访问
//	}
//};
//
//void myClass()
//{
//	Son1 s1;
//	s1.m_A; //其他类只能访问到公共权限
//}
//
////保护继承
//class Base2
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//class Son2 :protected Base2
//{
//public:
//	void func()
//	{
//		m_A; //可访问 protected权限
//		m_B; //可访问 protected权限
//		//m_C; //不可访问
//	}
//};
//void myClass2()
//{
//	Son2 s;
//	//s.m_A; //不可访问
//};
//
////私有继承
//class Base3
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//class Son3 :private Base3
//{
//public:
//	void func()
//	{
//		m_A; //可访问 private权限
//		m_B; //可访问 private权限
//		//m_C; //不可访问
//	}
//};
//class GrandSon3 :public Son3
//{
//public:
//	void func()
//	{
//		//Son3是私有继承，所以继承Son3的属性在GrandSon3中都无法访问到
//		//m_A;
//		//m_B;
//		//m_C;
//	}
//};

//class Base
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C; //私有成员只是被隐藏了，但是还是会继承下去
//};
//
////公共继承
//class Son :public Base
//{
//public:
//	int m_D;
//};
//
//void test01()
//{
//	cout << "sizeof Son = " << sizeof(Son) << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//class Base
//{
//public:
//	Base()
//	{
//		cout << "Base构造函数!" << endl;
//	}
//	~Base()
//	{
//		cout << "Base析构函数!" << endl;
//	}
//};
//
//class Son : public Base
//{
//public:
//	Son()
//	{
//		cout << "Son构造函数!" << endl;
//	}
//	~Son()
//	{
//		cout << "Son析构函数!" << endl;
//	}
//
//};
//
//
//void test01()
//{
//	//继承中 先调用父类构造函数，再调用子类构造函数，析构顺序与构造相反
//	Son s;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//class Base {
//public:
//	Base()
//	{
//		m_A = 100;
//	}
//
//	void func()
//	{
//		cout << "Base - func()调用" << endl;
//	}
//
//	void func(int a)
//	{
//		cout << "Base - func(int a)调用" << endl;
//	}
//
//public:
//	int m_A;
//};
//
//
//class Son : public Base {
//public:
//	Son()
//	{
//		m_A = 200;
//	}
//
//	//当子类与父类拥有同名的成员函数，子类会隐藏父类中所有版本的同名成员函数
//	//如果想访问父类中被隐藏的同名成员函数，需要加父类的作用域
//	void func()
//	{
//		cout << "Son - func()调用" << endl;
//	}
//public:
//	int m_A;
//};
//
//void test01()
//{
//	Son s;
//
//	cout << "Son下的m_A = " << s.m_A << endl;
//	cout << "Base下的m_A = " << s.Base::m_A << endl;
//
//	s.func();
//	s.Base::func();
//	s.Base::func(10);
//
//}
//int main() {
//
//	test01();
//
//	system("pause");
//	return EXIT_SUCCESS;
//}

//class Base {
//public:
//	static void func()
//	{
//		cout << "Base - static void func()" << endl;
//	}
//	static void func(int a)
//	{
//		cout << "Base - static void func(int a)" << endl;
//	}
//
//	static int m_A;
//};
//
//int Base::m_A = 100;
//
//class Son : public Base {
//public:
//	static void func()
//	{
//		cout << "Son - static void func()" << endl;
//	}
//	static int m_A;
//};
//
//int Son::m_A = 200;
//
////同名成员属性
//void test01()
//{
//	//通过对象访问
//	cout << "通过对象访问： " << endl;
//	Son s;
//	cout << "Son  下 m_A = " << s.m_A << endl;
//	cout << "Base 下 m_A = " << s.Base::m_A << endl;
//
//	//通过类名访问
//	cout << "通过类名访问： " << endl;
//	cout << "Son  下 m_A = " << Son::m_A << endl;
//	cout << "Base 下 m_A = " << Son::Base::m_A << endl;
//}
//
////同名成员函数
//void test02()
//{
//	//通过对象访问
//	cout << "通过对象访问： " << endl;
//	Son s;
//	s.func();
//	s.Base::func();
//
//	cout << "通过类名访问： " << endl;
//	Son::func();
//	Son::Base::func();
//	//出现同名，子类会隐藏掉父类中所有同名成员函数，需要加作作用域访问
//	Son::Base::func(100);
//}
//int main() {
//
//	//test01();
//	test02();
//
//	system("pause");
//
//	return 0;
//}

//class Base1 {
//public:
//	Base1()
//	{
//		m_A = 100;
//	}
//public:
//	int m_A;
//};
//
//class Base2 {
//public:
//	Base2()
//	{
//		m_A = 200;  //开始是m_B 不会出问题，但是改为mA就会出现不明确
//	}
//public:
//	int m_A;
//};
//
////语法：class 子类：继承方式 父类1 ，继承方式 父类2 
//class Son : public Base2, public Base1
//{
//public:
//	Son()
//	{
//		m_C = 300;
//		m_D = 400;
//	}
//public:
//	int m_C;
//	int m_D;
//};
//
//
////多继承容易产生成员同名的情况
////通过使用类名作用域可以区分调用哪一个基类的成员
//void test01()
//{
//	Son s;
//	cout << "sizeof Son = " << sizeof(s) << endl;
//	cout << s.Base1::m_A << endl;
//	cout << s.Base2::m_A << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//class Animal
//{
//public:
//	int m_Age;
//};
//
////继承前加virtual关键字后，变为虚继承
////此时公共的父类Animal称为虚基类
//class Sheep : virtual public Animal {};
//class Tuo : virtual public Animal {};
//class SheepTuo : public Sheep, public Tuo {};
//
//void test01()
//{
//	SheepTuo st;
//	st.Sheep::m_Age = 100;
//	st.Tuo::m_Age = 200;
//
//	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
//	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
//	cout << "st.m_Age = " << st.m_Age << endl;
//}
//
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//class Animal
//{
//public:
//	//Speak函数就是虚函数
//	//函数前面加上virtual关键字，变成虚函数，那么编译器在编译的时候就不能确定函数调用了。
//	virtual void speak()
//	{
//		cout << "动物在说话" << endl;
//	}
//};
//
//class Cat :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "小猫在说话" << endl;
//	}
//};
//
//class Dog :public Animal
//{
//public:
//
//	void speak()
//	{
//		cout << "小狗在说话" << endl;
//	}
//
//};
////我们希望传入什么对象，那么就调用什么对象的函数
////如果函数地址在编译阶段就能确定，那么静态联编
////如果函数地址在运行阶段才能确定，就是动态联编
//
//void DoSpeak(Animal& animal)
//{
//	animal.speak();
//}
////
////多态满足条件： 
////1、有继承关系
////2、子类重写父类中的虚函数
////多态使用：
////父类指针或引用指向子类对象
//
//void test01()
//{
//	Cat cat;
//	DoSpeak(cat);
//
//
//	Dog dog;
//	DoSpeak(dog);
//}
//
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

////普通实现
//class Calculator {
//public:
//	int getResult(string oper)
//	{
//		if (oper == "+") {
//			return m_Num1 + m_Num2;
//		}
//		else if (oper == "-") {
//			return m_Num1 - m_Num2;
//		}
//		else if (oper == "*") {
//			return m_Num1 * m_Num2;
//		}
//		//如果要提供新的运算，需要修改源码
//	}
//public:
//	int m_Num1;
//	int m_Num2;
//};
//
//void test01()
//{
//	//普通实现测试
//	Calculator c;
//	c.m_Num1 = 10;
//	c.m_Num2 = 10;
//	cout << c.m_Num1 << " + " << c.m_Num2 << " = " << c.getResult("+") << endl;
//
//	cout << c.m_Num1 << " - " << c.m_Num2 << " = " << c.getResult("-") << endl;
//
//	cout << c.m_Num1 << " * " << c.m_Num2 << " = " << c.getResult("*") << endl;
//}
//
//
//
////多态实现
////抽象计算器类
////多态优点：代码组织结构清晰，可读性强，利于前期和后期的扩展以及维护
//class AbstractCalculator
//{
//public:
//
//	virtual int getResult()
//	{
//		return 0;
//	}
//
//	int m_Num1;
//	int m_Num2;
//};
//
////加法计算器
//class AddCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 + m_Num2;
//	}
//};
//
////减法计算器
//class SubCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 - m_Num2;
//	}
//};
//
////乘法计算器
//class MulCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 * m_Num2;
//	}
//};
//
//
//void test02()
//{
//	//创建加法计算器
//	AbstractCalculator* abc = new AddCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 10;
//	cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;
//	delete abc;  //用完了记得销毁
//
//	//创建减法计算器
//	abc = new SubCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 10;
//	cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResult() << endl;
//	delete abc;
//
//	//创建乘法计算器
//	abc = new MulCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 10;
//	cout << abc->m_Num1 << " * " << abc->m_Num2 << " = " << abc->getResult() << endl;
//	delete abc;
//}
//
//int main() {
//
//	//test01();
//
//	test02();
//
//	system("pause");
//
//	return 0;
//}

//class Base
//{
//public:
//	//纯虚函数
//	//类中只要有一个纯虚函数就称为抽象类
//	//抽象类无法实例化对象
//	//子类必须重写父类中的纯虚函数，否则也属于抽象类
//	virtual void func() = 0;
//};
//
//class Son :public Base
//{
//public:
//	virtual void func()
//	{
//		cout << "func调用" << endl;
//	};
//};
//
//void test01()
//{
//	Base* base = NULL;
//	//base = new Base; // 错误，抽象类无法实例化对象
//	base = new Son;
//	base->func();
//	delete base;//记得销毁
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

////抽象制作饮品
//class AbstractDrinking {
//public:
//	//烧水
//	virtual void Boil() = 0;
//	//冲泡
//	virtual void Brew() = 0;
//	//倒入杯中
//	virtual void PourInCup() = 0;
//	//加入辅料
//	virtual void PutSomething() = 0;
//	//规定流程
//	void MakeDrink() {
//		Boil();
//		Brew();
//		PourInCup();
//		PutSomething();
//	}
//};
//
////制作咖啡
//class Coffee : public AbstractDrinking {
//public:
//	//烧水
//	virtual void Boil() {
//		cout << "煮农夫山泉!" << endl;
//	}
//	//冲泡
//	virtual void Brew() {
//		cout << "冲泡咖啡!" << endl;
//	}
//	//倒入杯中
//	virtual void PourInCup() {
//		cout << "将咖啡倒入杯中!" << endl;
//	}
//	//加入辅料
//	virtual void PutSomething() {
//		cout << "加入牛奶!" << endl;
//	}
//};
//
////制作茶水
//class Tea : public AbstractDrinking {
//public:
//	//烧水
//	virtual void Boil() {
//		cout << "煮自来水!" << endl;
//	}
//	//冲泡
//	virtual void Brew() {
//		cout << "冲泡茶叶!" << endl;
//	}
//	//倒入杯中
//	virtual void PourInCup() {
//		cout << "将茶水倒入杯中!" << endl;
//	}
//	//加入辅料
//	virtual void PutSomething() {
//		cout << "加入枸杞!" << endl;
//	}
//};
//
////业务函数
//void DoWork(AbstractDrinking* drink) {
//	drink->MakeDrink();
//	delete drink;
//}
//
//void test01() {
//	DoWork(new Coffee);
//	cout << "--------------" << endl;
//	DoWork(new Tea);
//}
//
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//class Animal {
//public:
//
//	Animal()
//	{
//		cout << "Animal 构造函数调用！" << endl;
//	}
//	virtual void Speak() = 0;
//
//	//析构函数加上virtual关键字，变成虚析构函数
//	//virtual ~Animal()
//	//{
//	//	cout << "Animal虚析构函数调用！" << endl;
//	//}
//
//
//	virtual ~Animal() = 0;
//};
//
//Animal::~Animal()
//{
//	cout << "Animal 纯虚析构函数调用！" << endl;
//}
//
////和包含普通纯虚函数的类一样，包含了纯虚析构函数的类也是一个抽象类。不能够被实例化。
//
//class Cat : public Animal {
//public:
//	Cat(string name)
//	{
//		cout << "Cat构造函数调用！" << endl;
//		m_Name = new string(name);
//	}
//	virtual void Speak()
//	{
//		cout << *m_Name << "小猫在说话!" << endl;
//	}
//	~Cat()
//	{
//		cout << "Cat析构函数调用!" << endl;
//		if (this->m_Name != NULL) {
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//
//public:
//	string* m_Name;
//};
//
//void test01()
//{
//	Animal* animal = new Cat("Tom");
//	animal->Speak();
//
//	//通过父类指针去释放，会导致子类对象可能清理不干净，造成内存泄漏
//	//怎么解决？给基类增加一个虚析构函数
//	//虚析构函数就是用来解决通过父类指针释放子类对象
//	delete animal;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}
// 
// 
////抽象CPU类
//class CPU
//{
//public:
//	//抽象的计算函数
//	virtual void calculate() = 0;
//};
//
////抽象显卡类
//class VideoCard
//{
//public:
//	//抽象的显示函数
//	virtual void display() = 0;
//};
//
////抽象内存条类
//class Memory
//{
//public:
//	//抽象的存储函数
//	virtual void storage() = 0;
//};
//
////电脑类
//class Computer
//{
//public:
//	Computer(CPU* cpu, VideoCard* vc, Memory* mem)
//	{
//		m_cpu = cpu;
//		m_vc = vc;
//		m_mem = mem;
//	}
//
//	//提供工作的函数
//	void work()
//	{
//		//让零件工作起来，调用接口
//		m_cpu->calculate();
//
//		m_vc->display();
//
//		m_mem->storage();
//	}
//
//	//提供析构函数 释放3个电脑零件
//	~Computer()
//	{
//
//		//释放CPU零件
//		if (m_cpu != NULL)
//		{
//			delete m_cpu;
//			m_cpu = NULL;
//		}
//
//		//释放显卡零件
//		if (m_vc != NULL)
//		{
//			delete m_vc;
//			m_vc = NULL;
//		}
//
//		//释放内存条零件
//		if (m_mem != NULL)
//		{
//			delete m_mem;
//			m_mem = NULL;
//		}
//	}
//
//private:
//
//	CPU* m_cpu; //CPU的零件指针
//	VideoCard* m_vc; //显卡零件指针
//	Memory* m_mem; //内存条零件指针
//};
//
////具体厂商
////Intel厂商
//class IntelCPU :public CPU
//{
//public:
//	virtual void calculate()
//	{
//		cout << "Intel的CPU开始计算了！" << endl;
//	}
//};
//
//class IntelVideoCard :public VideoCard
//{
//public:
//	virtual void display()
//	{
//		cout << "Intel的显卡开始显示了！" << endl;
//	}
//};
//
//class IntelMemory :public Memory
//{
//public:
//	virtual void storage()
//	{
//		cout << "Intel的内存条开始存储了！" << endl;
//	}
//};
//
////Lenovo厂商
//class LenovoCPU :public CPU
//{
//public:
//	virtual void calculate()
//	{
//		cout << "Lenovo的CPU开始计算了！" << endl;
//	}
//};
//
//class LenovoVideoCard :public VideoCard
//{
//public:
//	virtual void display()
//	{
//		cout << "Lenovo的显卡开始显示了！" << endl;
//	}
//};
//
//class LenovoMemory :public Memory
//{
//public:
//	virtual void storage()
//	{
//		cout << "Lenovo的内存条开始存储了！" << endl;
//	}
//};
//
//
//void test01()
//{
//	//第一台电脑零件
//	CPU* intelCpu = new IntelCPU;
//	VideoCard* intelCard = new IntelVideoCard;
//	Memory* intelMem = new IntelMemory;
//
//	cout << "第一台电脑开始工作：" << endl;
//	//创建第一台电脑
//	Computer* computer1 = new Computer(intelCpu, intelCard, intelMem);
//	computer1->work();
//	delete computer1;
//
//	cout << "-----------------------" << endl;
//	cout << "第二台电脑开始工作：" << endl;
//	//第二台电脑组装
//	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);;
//	computer2->work();
//	delete computer2;
//
//	cout << "-----------------------" << endl;
//	cout << "第三台电脑开始工作：" << endl;
//	//第三台电脑组装
//	Computer* computer3 = new Computer(new LenovoCPU, new IntelVideoCard, new LenovoMemory);;
//	computer3->work();
//	delete computer3;
//
//}
//
//int main()
//{
//	test01();
//}

//#include <fstream>
//
//void test01()
//{
//	ofstream ofs;
//	ofs.open("test.txt", ios::out);
//
//	ofs << "姓名：张三" << endl;
//	ofs << "性别：男" << endl;
//	ofs << "年龄：18" << endl;
//
//	ofs.close();
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//#include <fstream>
//#include <string>
//void test01()
//{
//	ifstream ifs;
//	ifs.open("test.txt", ios::in);
//
//	if (!ifs.is_open())
//	{
//		cout << "文件打开失败" << endl;
//		return;
//	}
//
//	//第一种方式
//	//char buf[1024] = { 0 };
//	//while (ifs >> buf)
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//第二种
//	//char buf[1024] = { 0 };
//	//while (ifs.getline(buf,sizeof(buf)))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//第三种
//	//string buf;
//	//while (getline(ifs, buf))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	char c;
//	while ((c = ifs.get()) != EOF)
//	{
//		cout << c;
//	}
//
//	ifs.close();
//
//
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//#include <fstream>
//#include <string>
//
//class Person
//{
//public:
//	char m_Name[64];
//	int m_Age;
//};
//
////二进制文件  写文件
//void test01()
//{
//	//1、包含头文件
//
//	//2、创建输出流对象
//	ofstream ofs("person.txt", ios::out | ios::binary);
//
//	//3、打开文件
//	//ofs.open("person.txt", ios::out | ios::binary);
//
//	Person p = { "张三"  , 18 };
//
//	//4、写文件
//	ofs.write((const char*)&p, sizeof(p));
//
//	//5、关闭文件
//	ofs.close();
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//#include <fstream>
//#include <string>
//
//class Person
//{
//public:
//	char m_Name[64];
//	int m_Age;
//};
//
//void test01()
//{
//	ifstream ifs("person.txt", ios::in | ios::binary);
//	if (!ifs.is_open())
//	{
//		cout << "文件打开失败" << endl;
//	}
//
//	Person p;
//	ifs.read((char*)&p, sizeof(p));
//
//	cout << "姓名： " << p.m_Name << " 年龄： " << p.m_Age << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

