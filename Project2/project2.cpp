#include <iostream>
using namespace std;

class Base
{
	public : void print()
	{
		cout << "기본 클래스 함수" << endl;
	}
};

class Derived : public Base
{
	public : void print() 
	{
		cout <<"파생 클래스 함수" << endl;
	}
};

int main() 
{
	Derived derived1;
	// 파생클래스를 가리키는 Base type 포인터
	Base* ptr = &derived1;
	// ptr을 이용하여 Base 클래스 함수 호출
	ptr->print();
	return 0;
}
// Base class 로 부터 *ptr 이라는 객체가 생성되는데, 그 내용으로, 파생 클래스를 가리키게 되는거임
