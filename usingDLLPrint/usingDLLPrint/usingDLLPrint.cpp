/*
- DLL 적용법

dll을 암시적으로 적용해주려면 몇가지 속성을 적용해줘야 함

솔루션 탐색기에서 프로젝트 우클릭 -> 속성

1) 속성 -> C/C++ -> 일반에서 추가 포함 디렉토리에 dll header가 있는 위치를 추가

2) 속성 -> 링커 -> 일반 -> 추가 라이브러리 디렉터리에 .lib 파일이 있는 위치를 추가

3) 속성 -> 링커 -> 입력 -> 추가 종속성에 파일명.lib 을 명시해줍니다.(여기선 DLLStudy.dll)
*/

#include <iostream>
#include "DLLStudy.h"

using namespace std;

void main()
{
	usingDLLPrint();
}