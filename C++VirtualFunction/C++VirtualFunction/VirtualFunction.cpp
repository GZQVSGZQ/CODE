#include <iostream>
using namespace std;

//δʹ���麯������ͬ������
//class Student
//{
//public:
//
//	Student(int x = 0)
//	{
//		ka = x;
//	}
//
//	void display()
//	{
//		cout << ka << endl;
//	}
//protected:
//	int ka;
//};
//
//class Student1 :public Student
//{
//public:
//
//	Student1(int x = 0) :Student(123)
//	{
//		ku = x;
//	}
//
//	void display()
//	{
//		cout << ka << "-" << ku << endl;
//	}
//private:
//	int ku;
//};
//
//
//void TestFunc()
//{
//	Student s(123);
//	Student1 s1(456);
//	s1.display();//�˴�������������ĸ���
//}
//
//int main()
//{
//	TestFunc();
//	return 0;
//}


/*//ʹ�ú�������ͬ������
class Student
{
public:

	Student(int x = 123)
	{
		ka = x;
	}

	virtual void display()
	{
		cout << ka << endl;
	}
protected:
	int ka;
};

class Student1 :public Student
{
public:

	Student1(int x = 456) :Student(123)
	{
		ku = x;
	}

	void display()
	{
		cout << ka << "-" << ku << endl;
	}
private:
	int ku;
};


void TestFunc()
{
	Student s;
	Student1 s1;
	Student *p;
	p = &s;
	p->display();
	p = &s1;
	p->display();
}

int main()
{
	TestFunc();
	return 0;
}
*/


/*//���麯���ͳ�����
class Student
{
public:
	virtual void display() = 0;
protected:
	int ka;
};

class Student1 :public Student
{
public:

	Student1(int x = 456)
	{
		ku = x;
	}

	void display()
	{
		cout << ka << "-" << ku << endl;
	}
private:
	int ku;
};


void TestFunc()
{
	Student1 s1;
	Student *p;
	p = &s1;
	p->display();
	s1.display();//�˴�������������ĸ���
}

int main()
{
	TestFunc();
	return 0;
}
*/



//�麯����
/*class Base1
{
public:
	Base1()
	:_b(1)
	{}
	virtual void fun1()
	{}
	virtual void fun2()
	{}
private:
	int _b;
};

typedef void(*pfun)();//������һ��ָ������ָ��pfun���䷵��ֵ void ���ͣ�����Ϊ��
void PrintfBase(pfun *_ppfun)
{
	int i = 0;
	for (i = 0; _ppfun[i] != NULL; i++)
	{
		_ppfun[i]();
	}
}
void test()
{
	Base1 b;//void *(        *((int *)(&b))       )();
	PrintfBase((pfun *)*((int *)(&b)));//�Ѷ����ַǿת�ɣ�int*��ȡ���麯����ĵ�ַ���ٴ�ȡ��ַ���Եõ���һ���麯���ĵ�ַ
}

int main()
{
	test();
	return 0;
}
*/

/*
class Base
{
public:
	Base()
		:_b(1){}
	virtual void fun1()
	{
		cout << "Base::fun1()" << endl;
	}
	virtual void fun2()
	{
		cout << "Base::fun2()" << endl;
	}
private:
	int _b;
};

class Deriver :public Base
{
public:
	Deriver()
		:_d(2){}
	virtual void fun1()
	{
		cout << "Deriver::fun1()" << endl;
	}
	virtual void fun3()
	{
		cout << "Deriver::fun3()" << endl;
	}
private:
	int _d;
};
typedef void(*pfun)();
void PrintfBase(pfun *_ppfun)
{
	int i = 0;
	for (i = 0; _ppfun[i] != NULL; i++)
	{
		_ppfun[i]();
	}
}
void test()
{
	Base b;
	PrintfBase((pfun *)*((int *)(&b)));
}
int main()
{
	test();
	return 0;
}
*/