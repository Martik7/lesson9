#include <iostream>
#include <ctime>
#include <clocale>
using namespace std;

void FillArray(int *a, int n)
{
	for (size_t i = 0; i < n; i++)
	{
		a[i] = 1 + rand() % 100;
	}
}

void printArray(int *a, int n)
{
	for (int* p = a; p < a + n; p++)
	{
		cout << *p << " " << endl;
	}
	cout << endl;
}

template <typename T>
T findMin(T *a, int n)
{
	T *p1 = a;
	T *p2 = a + n / 2;
	T mult, min = *p1* *p2;
	for (; p1 < a + n / 2; p1++, p2++)
	{
		mult = *p1* *p2;
		cout << mult << endl;
		if (mult <= min)
		{
			min = mult;
		}
	}
	cout << endl;
	return min;
}

void function1(int *a, int n)
{
	int k = 0;
	int *bp = 0;
	for (int* p = 0; p < a + n; p++) {
		if ((p - a) % 2 && *p > 0)
			k++;
		if (k == 1)
		{
			bp = p;
			cout << (bp - a) << endl;
		}

	}
	if (k == 0)
	{

		return;
	}

	for (size_t i = 0; i < k; k++)
	{
		for (int* p = bp; p < a + n; p++)
		{
			if (*p <= *bp)
				swap(*p, *bp);
			bp = p;
		}
	}
}

int main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));
	//1
	/*
	1.	Объвить две переменные и два указателя.
	Присвоить указателям адреса переменных.
	Сложить переменные, используя указатели и присвоить результат третьей переменной. 
	Вывести результат сложения на экран и адрес результата.
	*/

	/*int a = 5, b = 4, *r, *p, sum;
	r = &a;
	p = &b;
	sum = *r + *p;
	cout << &sum << endl;
	cout << sum << endl;*/
	//2
	/*int a = 2, b = 5;
	int *p1, *p2 = &b;
	p1 = &a;
	cout << *p1 - *p2 << endl;*/
	//3
	/*double a = 2.5, b = 5.2, res;
	double *p1 = &a, p2 = b;
	res = *p1 - p2;
	cout << res;*/

	/*int a[5] = {10,20,30,40,50}, *p, x;
	p = a;
	cout << a << endl;
	cout << p << endl;
	cout << &a[0] << endl;
	cout << &p[0] << endl;

	cout << *a << endl;
	cout << *p << endl;
	cout << a[0] << endl;
	cout << p[0] << endl;

	cout << a+3 << endl;
	cout << p+3 << endl;
	cout << &a[3] << endl;
	cout << &p[3] << endl;

	cout << *(a + 3) << endl;
	cout << *(p + 3) << endl;
	cout << a[3] << endl;
	cout << p[3] << endl;*/
	//4
	//const int SIZE = 10;
	//int A[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
	//int *p = A;
	//for (int i = 0; i < SIZE; i++) //выполнить вывод массива используя указатели
	//	cout << *p++ << "\t";
	//cout << endl;

	//5
	/*
	5.	Используя указатели заполнить массив случайными числами и вывести его на экран.
	*/
	/*int a[5] = { 0 }, *p = a;
	for (size_t i = 0; i < 5; i++)
	{
		*p = 1 + rand() % 100;
		cout << *p << endl;
	}*/

	//5 (другим способом)
	/*int a[5];
	FillArray(a, 5);
	printArray(a, 5);*/

	//6
	/*
	Дано натуральное число N и массив целых чисел. 
	Используя указатели, 
	выяснить имеется ли в массиве хотя бы одно нечетное отрицательное число
	и определить его местонахождение в массиве.
	*/

	/*int N, a[5] = { -10, 10, 20, -11 , 40 };
	for (int i = 0; i < 5; i++) {
		if (a[i] < 0 && a[i] % 2) {
			N = i;
		}
	}
	cout << N << endl;*/

	//7
	/*
	Даны действительные числа а1,..a16.
	Используя указатели получить min(a1*a9,a2*a10,...,a8*a16).
	*/
	/*int a[16];
	FillArray(a, 16);
	printArray(a, 16);
	cout << findMin(a, 16) << endl;*/

	//8
	/*
	Дана последовательность a1,a2,...,a20. 
	Используя указатели расположить положительные элементы последовательности,
	стоящие на нечетных местах по возрастанию.
	*/
	
	int a[20];
	FillArray(a, 20);
	printArray(a, 20);
	function1(a, 20);
	

	system("pause");
	return 0;
}