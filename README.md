# Введение в программирование и алгоритмы ПИЖ-б-о-26-1(2). Бирюков Егор

- Лабораторная работа №1

Тема: Настройка среды разработки. Первая программа.

Цель работы: Освоить среду разработки (IDE), научиться создавать,
компилировать и запускать простые программы на C++. Получить
первый практический опыт работы с потоковым выводом cout и
вводом cin.

Задание 1.

- Листинг кода:

	  #include <iostream>
	  #include <Windows.h>

	  int main() {
		  SetConsoleOutputCP(CP_UTF8);
		  SetConsoleCP(CP_UTF8);
		  // С помощью 2-ой, 5-ой и 6-ой строки правильно обрабатывается вывод кириллицы
		  std::cout << "Объём куба" << std::endl;
		  float edge_cube, volume; // Создаём переменные
		  std::cout << "Введите размер ребра куба: ";
		  std::cin >> edge_cube; // Ввод с клавиатуры размер ребра куба
		  volume = edge_cube * edge_cube * edge_cube; // Вычисляем объём
		  std::cout << "Объём куба равен: ";
		  std::cout << volume; // Выводим на экран результат
		  return 0;
	  }

- Скриншоты выполнения программы:
<img width="450" height="150" alt="image" src="https://github.com/user-attachments/assets/9fc59e20-030b-4ee6-8cdc-276038472bd9" />
<img width="419" height="161" alt="image" src="https://github.com/user-attachments/assets/ddfb978e-2f23-42b4-ace4-1145755f847a" />

Задание 2.

- Листинг кода:

	  #include <iostream>
	  #include <Windows.h>

	  int main() {
	      SetConsoleOutputCP(CP_UTF8);
	      SetConsoleCP(CP_UTF8);
	      // С помощью 2-ой, 5-ой и 6-ой строки правильно обрабатывается вывод кириллицы
	      int first_num, second_num; // Объявляем две переменные: первое число и второе число
	      std::cout << "Введите первое число: ";
	      std::cin >> first_num; // Ввод первого числа с клавиатуры
	      std::cout << "Введите второе число: ";
	      std::cin >> second_num; // Ввод второго числа с клавиатуры
	      std::cout << "Сумма чисел: ";
          std::cout << first_num + second_num << "\n"; // Вычисление суммы чисел
	      std::cout << "Разность чисел: ";
	      std::cout << first_num - second_num << "\n"; // Вычисление разности чисел
	      std::cout << "Произведение чисел: ";
	      std::cout << first_num * second_num << "\n"; // Вычисление произведения чисел
	      return 0;
      }

- Скриншоты выполнения программы:
<img width="229" height="140" alt="image" src="https://github.com/user-attachments/assets/38a18558-61dc-4031-9ea6-83e925b76774" />
<img width="215" height="134" alt="image" src="https://github.com/user-attachments/assets/cf29862c-169f-410a-a4be-55d89fbb9fc8" />

Задание 2.

- Листинг кода:

	  

- Скриншоты выполнения программы:
