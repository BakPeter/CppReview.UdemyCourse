#include <iostream>
#include <vector>
using namespace std;

void stdInOutSample();
void sizeOfSample();
void constSample();
void matrixSample();
void arraysSample();
void printArr(int size, int* arr);
void matrixSample();
int** initMatrix(int rows, int cols);
void updateMatrixMemory(int** matrix, int rows, int cols);
void freeMatrixMemory(int** matrix, int rows, int cols);
void printMatrix(int** matrix, int rows, int cols);
void vectorSample();

int main()
{
	//stdInOutSample();
	//sizeOfSample();
	//constSample();
	//arraysSample();
	//matrixSample();
	vectorSample();
	return 0;
}

void vectorSample()
{
	vector<int> vec{ 1,2 ,3, 4 };

	cout << "size = " << vec.size() << endl;
	for (size_t i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << " ";
	}
	cout << endl;
	for (size_t i = 0; i < vec.size(); i++)
	{
		cout << vec.at(i) << " ";
	}

	for (size_t i = 0; i < vec.size(); i++)
	{
		vec[i] = i + 10;
	}
	cout << endl;
	for (size_t i = 0; i < vec.size(); i++)
	{
		cout << vec.at(i) << " ";
	}

	vector<vector<char>> charsMatrix();
}

void matrixSample()
{
	const int rows = 10, cols = 10;
	int** matrix = initMatrix(rows, cols);
	printMatrix(matrix, rows, cols);
	updateMatrixMemory(matrix, rows, cols);
	printMatrix(matrix, rows, cols);
	freeMatrixMemory(matrix, rows, cols);
}
void freeMatrixMemory(int** matrix, int rows, int cols)
{
	for (size_t i = 0; i < rows; i++)
	{
		delete[] matrix[i];
	}

	delete[] matrix;
}
void updateMatrixMemory(int** matrix, int rows, int cols)
{
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			matrix[i][j] = pow(i + 1, j);
		}
	}

}

int** initMatrix(int rows, int cols)
{
	int** matrix = new int* [rows];
	for (size_t i = 0; i < cols; i++)
	{
		matrix[i] = new int[cols];
	}
	return matrix;
}
void printMatrix(int** matrix, int rows, int cols)
{
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

void arraysSample()
{
	cout << "arrays sample" << endl;
	cout << "=================" << endl;

	const int arrSize = 10;
	int arr[arrSize]{ 100,100 };

	printArr(arrSize, arr);

	for (int i = 0; i < arrSize; i++) {
		{
			arr[i] = pow(2, i);
		}
	}

	printArr(arrSize, arr);
}

void printArr(int size, int* arr)
{
	cout << "===========================================\n";
	for (size_t i = 0; i < size; i++) {
		{
			cout << "arr[" << i << "] = " << *(arr + i) << endl;
		}
	}
	cout << "===========================================\n";

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
