//������� ����������� ������� ����� Employer (��������) � ����� ����������� �������� Print(). 
//�������� ��� ����������� ������: President, Manager, Worker.
//�������������� ������� Print() ��� ������ ����������, ��������������� ������� ���� ���������.

#pragma once
#include "Employer.h"
class Manager :
    public Employer
{
public:
    void Print();
};

