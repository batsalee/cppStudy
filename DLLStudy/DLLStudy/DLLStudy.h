#pragma once

#ifdef DLLSTUDY_H
#define DLLSTUDY_H __declspec(dllexport)
#else
#define DLLSTUDY_H __declspec(dllimport)
#endif

extern "C" DLLSTUDY_H void usingDLLPrint();