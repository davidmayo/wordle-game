//https://learn.microsoft.com/en-us/windows/console/console-virtual-terminal-sequences

#include <iostream>

#include <stdio.h>
#include <wchar.h>
#include <windows.h>

#include "header/ColorConsole.h"

int main()
{
	std::cout << "Hello";

	ColorConsole::ColorConsole console;
	console.Print(
		"ARGUMENT TEXT\nNEW LINE",
		0x000088FF,
		0x0088BB00
	);

	console.ClearConsole();

	//console.Print(
	//	"AFTER CLEARING",
	//	0x000088FF,
	//	0x0088BB00
	//);

	console.Print("\n");

	console.PrintWordle(
		"TRASH",
		{
			ColorConsole::LetterStatus::WrongPlace,
			ColorConsole::LetterStatus::Incorrect,
			ColorConsole::LetterStatus::Incorrect,
			ColorConsole::LetterStatus::Incorrect,
			ColorConsole::LetterStatus::WrongPlace
		}
	);

	console.PrintWordle(
		"GOTHY",
		{
			ColorConsole::LetterStatus::Incorrect,
			ColorConsole::LetterStatus::WrongPlace,
			ColorConsole::LetterStatus::WrongPlace,
			ColorConsole::LetterStatus::WrongPlace,
			ColorConsole::LetterStatus::Incorrect
		}
	);

	console.PrintWordle(
		"PLONK",
		{
			ColorConsole::LetterStatus::Correct,
			ColorConsole::LetterStatus::Incorrect,
			ColorConsole::LetterStatus::Correct,
			ColorConsole::LetterStatus::Incorrect,
			ColorConsole::LetterStatus::Incorrect
		}
	);

	console.PrintWordle(
		"PLONK",
		{
			ColorConsole::LetterStatus::Blank,
			ColorConsole::LetterStatus::Blank,
			ColorConsole::LetterStatus::Blank,
			ColorConsole::LetterStatus::Blank,
			ColorConsole::LetterStatus::Blank
		}
	);

	console.PrintWordle(
		"PLONK",
		{
			ColorConsole::LetterStatus::Blank,
			ColorConsole::LetterStatus::Blank,
			ColorConsole::LetterStatus::Blank,
			ColorConsole::LetterStatus::Blank,
			ColorConsole::LetterStatus::Blank
		}
	);

	console.PrintWordle(
		"PLONK",
		{
			ColorConsole::LetterStatus::Blank,
			ColorConsole::LetterStatus::Blank,
			ColorConsole::LetterStatus::Blank,
			ColorConsole::LetterStatus::Blank,
			ColorConsole::LetterStatus::Blank
		}
	);

	console.PrintWordleKeyboard(
		"OPH",
		"T",
		"RASGYLNK"
	);

	return 0;
}