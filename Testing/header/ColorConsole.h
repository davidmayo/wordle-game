#pragma once

#include <string>
#include <vector>

#include <stdio.h>
#include <wchar.h>
#include <windows.h>



namespace ColorConsole
{
	enum class LetterStatus
	{
		Correct,
		WrongPlace,
		Incorrect,
		Blank
	};

	class ColorConsole
	{
	public:
		ColorConsole();

		void ClearConsole();
		void Print(
			std::string text,
			uint32_t foregroundaRGB = 0x00FFFFFF,
			uint32_t backgroundaRGB = 0x00000000
		);
		void PrintWordle(
			std::string text,
			std::vector<LetterStatus> letterStatuses = {}
		);
		void PrintWordleKeyboard(
			std::string correctLetters = "",
			std::string wrongPlaceLetters = "",
			std::string incorrectLetters = ""
		);

	protected:
		HANDLE  hConsole;
		bool isEnabled = false;
	};
}