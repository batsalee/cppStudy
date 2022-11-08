#include <iostream>
#include "Marine.h"

int main() {
	Marine* marine[100];

	marine[0] = new Marine(2, 3);
	marine[1] = new Marine(3, 5);

	marine[0]->show_status(); // (*marine[0]).show_status();
	marine[1]->show_status();

	marine[0]->be_attacked(marine[1]->attack());

	marine[0]->show_status();
	marine[1]->show_status();

	delete marine[0];
	delete marine[1];

	/*
	Marine marine1(2, 3);
	Marine marine2(3, 5);

	marine1.show_status();
	marine2.show_status();
	
	std::cout << std::endl << "마린 1 이 마린 2 를 공격! " << std::endl;
	marine2.be_attacked(marine1.attack());

	marine1.show_status();
	marine2.show_status();
	*/
}