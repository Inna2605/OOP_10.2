﻿//Создать абстрактный базовый класс Employer (служащий) с чисто виртуальной функцией Print(). 
//Создайте три производных класса: President, Manager, Worker.
//Переопределите функцию Print() для вывода информации, соответствующей каждому типу служащего.

#include<iostream>
#include "Manager.h"
using namespace std;

void Manager::Print()
{
	cout << "Менеджер (англ. manager, от manage — «управлять»), руководитель, управляющий —\n"
		<< "специалист, занятый управлением процессами и персоналом (подчинёнными)\n"
		<< "на определённом участке коммерческого (торгового и иных) предприятия, организации.\n\n";
}
