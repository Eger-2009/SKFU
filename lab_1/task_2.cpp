#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	int first_num, second_num;

	cout << "Введите первое число: ";
	
	if ((cin >> first_num)) {
		cout << "Введите второе число: ";
		if ((cin >> second_num)) {
			cout << "Сумма чисел: ";
			cout << first_num + second_num << "\n";
			cout << "Разность чисел: ";
			cout << first_num - second_num << "\n";
			cout << "Произведение чисел: ";
			cout << first_num * second_num << "\n";
		}
		else {
			cout << "Вы ввели не число!";
		}

	}
	else {
		cout << "Вы ввели не число!";
	}

	return 0;
}
