#pragma once
#include "Includes.h"
#include "HackProcess.h"
class Offsets
{
public:
	DWORD dwLocalPlayer;
	DWORD dwEntityList;
	DWORD dwbSendPackets;
	DWORD m_bDormant;
	DWORD m_bSpotted;
	DWORD m_iTeamNum;

};
extern Offsets O;
class MemoryRead
{
public:
	DWORD BasePointer;
	int Team;
	void GetAll();
	DWORD GetLocalPlayer();
	int GetLocalTeam();
	DWORD GetEntity(int EntNum);
	int GetEntityTeam(DWORD Entity);
	void SetSendPackets(bool set);
}; extern MemoryRead Read;

template <class T>
T RPM(DWORD address)
{
	T read;
	ReadProcessMemory(Init.Hdl, (DWORD*)address, &read, sizeof(T), 0);
	return read;
}

template <class T>
void WPM(DWORD address, T value)
{
	WriteProcessMemory(Init.Hdl, (DWORD*)address, &value, sizeof(T), 0);
}