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
		cout << "Вызвлся конструктор\t" << this << "\n";
	}

	~MyClass()
	{
		cout << "Вызвлся ДЕструктор\t" << this << "\n";
	}
};

void Foo(MyClass value)
{
	cout << "Вызвалась функция Foo" << "\n";
}

int main()
{
	setlocale(0, "");

	MyClass a(1);

	return 0;
}