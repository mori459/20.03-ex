#include <iostream>
#include <windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	while (true)
	{

		int a_uinp, result1 = 0;	//первое задание
		std::cout << "¬ведите начальное число a: ";
		std::cin >> a_uinp;

		if (a_uinp > 500)
		{
			for (int i = a_uinp; i >= 500; i--)
			{
				result1 += i;
			}
		}
		else
		{
			for (int i = a_uinp; i <= 500; i++)
			{
				result1 += i;
			}
		}
		std::cout << result1 << "\n";



		int x_uinp, y_uinp;	//второе задание
		std::cout << "¬ведите основание степени x: ";
		std::cin >> x_uinp;
		std::cout << "¬ведите показатель степени y: ";
		std::cin >> y_uinp;
		int result2 = 1;

		for (int i = 0; i < y_uinp; i++)
		{
			result2 *= x_uinp;
		}
		std::cout << result2 << "\n";



		float a = 1, b = 1000;	//третие задание :)
		std::cout << "—реднее арифметическое целых чисел от 1 до 1000: " << (a + b) / 2;



		int num4, result4 = 1;	//четвертое задание
		while (true)
		{
			std::cout << "¬ведите нижний предел a: ";
			std::cin >> num4;
			if (num4 < 1 || num4 > 20)
			{
				std::cerr << "ќшибка: нижний предел должен быть в пределе от 1  до 20\n";
				continue;
			}
			break;
		}
		for (int i = num4; i <= 20; i++)
		{
			result4 *= i;
		}
		std::cout << result4 << "\n";



		int k_uinp;	//п€тое задание
		std::cout << "¬ведите число: ";
		std::cin >> k_uinp;
		
		for (int i = 2; i < 10; i++)
		{
			std::cout << k_uinp << " x " << i << " = " << k_uinp * i << "\n";
		}
		
	}

}