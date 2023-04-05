// Calculator.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

using namespace std;

class calc {
	double num1, num2;
public:
	calc() {};
	calc(double num1, double num2)
	{
		this->num1 = num1;
		this->num2 = num2;
	}
	double add()// - метод должен возвращать результат сложения num1 и num2
	{
		return num1 + num2;
	}
	double multiply()// - метод должен возвращать результат перемножения num1 и num2
	{
		return num1 * num2;
	}
	double subtract_1_2()// - метод должен возвращать результат вычитания num2 из num1
	{
		return num1 - num2;
	}
	double subtract_2_1()// - метод должен возвращать результат вычитания num1 из num2
	{
		return num2 - num1;
	}
	double divide_1_2()// - метод должен возвращать результат деления num1 на num2
	{
		return num1 / num2;
	}
	double divide_2_1()// - метод должен возвращать результат деления num2 на num1
	{
		return num2 / num1;
	}
	bool set_num1(double num1)// - метод должен установить значение поля num1 равное значению аргумента num1 в случае, если значение аргумента не равно 0. Возвращает true, если установка произошла успешно, в обратном случае false
	{   
		if (num1 == 0) return false;
		this->num1 = num1;
		return true;
	}
	bool set_num2(double num2)//
	{
		if (num2 == 0) return false;
		this->num2 = num2;
		return true;
	}
};

void print(calc c, double num1, double num2)
{
	cout << "num1 + num2 = " << c.add() << endl;
	cout << "num1 * num2 = " << c.multiply() << endl;
	cout << "num1 - num2 = " << c.subtract_1_2() << endl;
	cout << "num2 - num1 = " << c.subtract_2_1() << endl;
	cout << "num1 / num2 = " << c.divide_1_2() << endl;
	cout << "num2 / num1 = " << c.divide_2_1() << endl;
}


int main()
{
	setlocale(LC_ALL, "Russian");
	calc calculator;
	double num1, num2;
	do {
		do {
			cout << "Введите num1: ";
			cin >> num1;
		} while (calculator.set_num1(num1) == false);
		do {
			cout << "Введите num2: ";
			cin >> num2;
		} while (calculator.set_num2((num2)) == false);
		// - метод должен установить значение поля num1 равное значению аргумента num1 в случае, если значение аргумента не равно 0. Возвращает true, если установка произошла успешно, в обратном случае false
		
		print(calculator, (num1), (num2));

	} while (true);
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
