/*
extern "C"나 define부의 export, import도 다 적어줘야함

DLLSTUDY_EXPORTS﻿을 속성 -> C/C++ -> 전처리기 -> 전처리 정의에 넣어주고 컴파일 -> 빌드하면 .dll과 .lib 생성완료

dll프로젝트는 dllexport 해주고

dll을 사용할 프로젝트는 dllimport를 해주는 것
*/

#pragma once

#ifdef DLLSTUDY_EXPORTS
#define DLLSTUDY_H __declspec(dllexport)
#else
#define DLLSTUDY_H __declspec(dllimport)
#endif

extern "C" DLLSTUDY_H void usingDLLPrint();