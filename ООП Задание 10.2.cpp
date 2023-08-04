//Создать абстрактный базовый класс Employer (служащий) с чисто виртуальной функцией Print(). 
//Создайте три производных класса: President, Manager, Worker.
//Переопределите функцию Print() для вывода информации, соответствующей каждому типу служащего.

#include <iostream>
#include"Employer.h"
#include"President.h"
#include"Manager.h"
#include"Worker.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Ru");

	Employer* Employer = nullptr;

	int n = 1;
	while (n) {
		cout << "Выберите информацию по типу служащего:\n"
			<< "0. Завершение выбора.\n"
			<< "1. Президент компании.\n"
			<< "2. Менеджер.\n"
			<< "3. Служащий.\n";
		cin >> n;
		switch (n) {
		case 0: {
			return 0;
		}
		case 1: {
			Employer = new President();
		}
			  break;
		case 2: {
			Employer = new Manager();
		}
			  break;
		case 3: {
			Employer = new Worker();
		}
			  break;
		default: cout << "Неправильно сделаный выбор!\n";
			return 0;
		}
		Employer->Print();
		delete Employer;
	}
}
