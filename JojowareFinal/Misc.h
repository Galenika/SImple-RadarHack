#pragma once
#include "Memory.h"
#include "CheatManager.h"
#include "Includes.h"
class Misc
{
public:

	Misc() = default;
	~Misc() = default;

	std::string GenerateRandomString(int length = 15);
	void GenerateRandomWindowTitle(int length = 15);

	void RadarHack();
}; extern Misc Mi;