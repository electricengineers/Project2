#include <iostream>
using namespace std;

class Base
{
	public : void print()
	{
		cout << "�⺻ Ŭ���� �Լ�" << endl;
	}
};

class Derived : public Base
{
	public : void print() 
	{
		cout <<"�Ļ� Ŭ���� �Լ�" << endl;
	}
};

int main() 
{
	Derived derived1;
	// �Ļ�Ŭ������ ����Ű�� Base type ������
	Base* ptr = &derived1;
	// ptr�� �̿��Ͽ� Base Ŭ���� �Լ� ȣ��
	ptr->print();
	return 0;
}
// Base class �� ���� *ptr �̶�� ��ü�� �����Ǵµ�, �� ��������, �Ļ� Ŭ������ ����Ű�� �Ǵ°���
