#pragma once
#include "Includes.h"
#include "ReadProcessMemory.h"
class CheatManager
{
private:
	void CoutOffset(LPCSTR name, DWORD offset);
	void Coutfloat(LPCSTR name, float option);
	void Coutbool(LPCSTR name, int boolean);
	float ReadConfig(LPCSTR Option, bool Float);
	DWORD ReadInt(LPCTSTR Offsetname);
public:
	bool Shutdown = false;
	void Options();
	int WantRadar = 1;
	void InitializeCheat();
}; extern CheatManager CM;