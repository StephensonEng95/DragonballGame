#include "menu.h"
#include<iostream>
#include<iomanip>
#include"player.h"
#include<iostream>
#include<memory>
void Menu::start()
{
	std::unique_ptr<Player> pmenu;
	std::cout << "1.signUP" << std::setw(3) << "2.signIn" << "\n";
	option = std::cin.get();
	switch (option) {
	case 1: pmenu->signUP();
		break;
	case 2: pmenu->signUP();
		break;
	default:std::cout << "invalid input" << std::endl;
	}
}

