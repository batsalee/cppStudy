#include "pch.h"
#include "DLLStudy.h"
#include <iostream>

using namespace std;

extern "C" DLLSTUDY_H void usingDLLPrint()
{
	cout << "�̰� DLL�� ��ũ�ؼ� ����� ����!!" << endl;
}