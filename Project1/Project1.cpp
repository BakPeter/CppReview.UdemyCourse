#include <iostream>
using namespace std;

void stdInOutSample();
void sizeOfSample();
void constSample();

int main()
{
	//stdInOutSample();
	//sizeOfSample();
	constSample();

	return 0;
}
void constSample()
{
	const double taxRate{ 0.15 };
	double price{ 0.0 };

	cout << "Enter product price: ";
	cin >> price;
	cout << "=========================\n";
	cout << "Tax rate is: " << taxRate << endl;
	cout << "Tax is: " << price * taxRate << endl;
	cout << "Price with tax: " << price + price * taxRate << endl;
}

void sizeOfSample()
{
	cout << "char: " << sizeof(char) << endl;
	cout << "short: " << sizeof(short) << endl;
	cout << "int: " << sizeof(int) << endl;
	cout << "unsigned int: " << sizeof(unsigned int) << endl;
	cout << "long: " << sizeof(long) << endl;
	cout << "long long: " << sizeof(long long) << endl;
	cout << "float: " << sizeof(float) << endl;
	cout << "long float: " << sizeof(long float) << endl;
	cout << "double: " << sizeof(double) << endl;
	cout << "long double: " << sizeof(long double) << endl;
	cout << "strrrr: " << sizeof("strrrr") << endl;
}

void stdInOutSample()
{
	std::cout << "Hello World!\n";
	std::cout << "Peter" << std::endl;

	std::cout << "Enter number : ";
	int n;
	std::cin >> n;

	std::cout << "The number is " << n << std::endl;

	int num{ 20 };
	double num2{ 34.45 };
	std::cout << num << std::endl;
	std::cout << num2 << std::endl;
}
