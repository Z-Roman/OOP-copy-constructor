#include <iostream>
#include <string>
using namespace std;

class MyClass
{
public:
	int data;

	MyClass(int data)
	{
		this->data = data;
		cout << "������� �����������\t" << this << "\n";
	}

	~MyClass()
	{
		cout << "������� ����������\t" << this << "\n";
	}
};

void Foo(MyClass value)
{
	cout << "��������� ������� Foo" << "\n";
}

int main()
{
	setlocale(0, "");

	MyClass a(1);

	return 0;
}