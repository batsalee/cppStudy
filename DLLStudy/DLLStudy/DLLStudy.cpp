#include "pch.h"
#include "DLLStudy.h"
#include <iostream>

using namespace std;

extern "C" DLLSTUDY_H void usingDLLPrint()
{
	cout << "이건 DLL을 링크해서 출력한 문장!!" << endl;
}