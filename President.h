//������� ����������� ������� ����� Employer (��������) � ����� ����������� �������� Print(). 
//�������� ��� ����������� ������: President, Manager, Worker.
//�������������� ������� Print() ��� ������ ����������, ��������������� ������� ���� ���������.

#pragma once
#include "Employer.h"
class President :
    public Employer
{
public:
    void Print();
};

