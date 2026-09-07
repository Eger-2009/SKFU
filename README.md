# Введение в программирование и алгоритмы. ПИЖ-б-о-26-1(2). Бирюков Егор




Дисциплина «Введение в программирование и алгоритмы»


# Лабораторная работа №1

Тема: Настройка среды разработки. Первая программа.

Цель работы: Освоить среду разработки (IDE), научиться создавать,
компилировать и запускать простые программы на C++. Получить
первый практический опыт работы с потоковым выводом cout и
вводом cin.

Задание 1.

- Листинг кода:

	  #include <iostream>
	  #include <Windows.h>

	  using namespace std;

	  int main() {
	  	  SetConsoleOutputCP(CP_UTF8);
		  SetConsoleCP(CP_UTF8);

		  cout << "Объём куба" << "\n";
		  float edge_cube, volume;

		  cout << "Введите размер ребра куба: ";
		  cin >> edge_cube;
	
		  volume = edge_cube * edge_cube * edge_cube;

		  cout << "Объём куба равен: ";
		  cout << volume;

		  return 0;
	  }

- Скриншоты выполнения программы:
<img width="450" height="150" alt="image" src="https://github.com/user-attachments/assets/9fc59e20-030b-4ee6-8cdc-276038472bd9" />

Задание 2.

- Листинг кода:

		#include <iostream>
		#include <Windows.h>

		using namespace std;

		int main() {
			SetConsoleOutputCP(CP_UTF8);
			SetConsoleCP(CP_UTF8);

			int first_num, second_num;

			cout << "Введите первое число: ";
			cin >> first_num;
			cout << "Введите второе число: ";
			cin >> second_num;

			cout << "Сумма чисел: ";
			cout << first_num + second_num << "\n";
			cout << "Разность чисел: ";
			cout << first_num - second_num << "\n";
			cout << "Произведение чисел: ";
			cout << first_num * second_num << "\n";

			return 0;
		}

- Скриншоты выполнения программы:
<img width="229" height="140" alt="image" src="https://github.com/user-attachments/assets/38a18558-61dc-4031-9ea6-83e925b76774" />

Задание 3.

- Листинг кода:

		#include <iostream>
		#include <Windows.h>

		using namespace std;

		int main() {
		    SetConsoleOutputCP(CP_UTF8);
		    SetConsoleCP(CP_UTF8);

		    float pi{ 3.14 }, radius;
		    int degree;

		    cout << "Введите радиус круга: ";
		    cin >> radius;
		    cout << "Введите градусную меру сектора: ";
		    cin >> degree;

		    cout << "Площадь сектора равна: ";
		    cout << pi * (radius * radius) * (degree / 360.0);

		    return 0;
		}

- Скриншоты выполнения программы:
<img width="318" height="100" alt="image" src="https://github.com/user-attachments/assets/85ce2c65-eea7-4fca-b6bd-b8e360659f68" />


