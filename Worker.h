//������� ����������� ������� ����� Employer (��������) � ����� ����������� �������� Print(). 
//�������� ��� ����������� ������: President, Manager, Worker.
//�������������� ������� Print() ��� ������ ����������, ��������������� ������� ���� ���������.

#pragma once
#include "Employer.h"
class Worker :
    public Employer
{
public:
    void Print();
};

