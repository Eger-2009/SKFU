# Введение в программирование и алгоритмы. ПИЖ-б-о-26-1(2). Бирюков Егор






# Лабораторная работа №1

Тема: Настройка среды разработки. Первая программа.

Цель работы: Освоить среду разработки (IDE), научиться создавать,
компилировать и запускать простые программы на C++. Получить
первый практический опыт работы с потоковым выводом cout и
вводом cin.

## Ход работы:
Вариант №4, базовый, средний и повышенный уровни сложности.

| Уровень сложности |Задача                                                                |
| ----------------- | ------------------------------------------------------------------ |
| Базовый | Объём куба |
| Средний | Запросить два числа, вывести сумму, разность, произведени |
| Повышенный | Запросить радиус → площадь сектора (угол задаётся в градусах) |

Задание 1.

<img width="646" height="709" alt="image" src="https://github.com/user-attachments/assets/5a03f933-2fad-47e0-a0fd-b64d2dd05b56" />

- Выполнения программы:

<img width="293" height="142" alt="image" src="https://github.com/user-attachments/assets/f2a30d38-9f59-4dd7-91c7-df9a0b9980ff" />
<img width="312" height="141" alt="image" src="https://github.com/user-attachments/assets/8276c918-cf49-43d9-96b5-c3914260e266" />


Задание 2.

<img width="626" height="801" alt="image" src="https://github.com/user-attachments/assets/856d1c41-f00c-46c9-b13b-0ecc0ddf3978" />

- Выполнения программы:

<img width="229" height="140" alt="image" src="https://github.com/user-attachments/assets/38a18558-61dc-4031-9ea6-83e925b76774" />
<img width="288" height="100" alt="image" src="https://github.com/user-attachments/assets/880abd9e-eacb-4ddb-a015-2f8f3f3b9aa0" />


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



