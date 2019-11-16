#include <iostream>
#include<string>
#include"Animal.h"
#include "Duck.cpp"
#include "Beaver.cpp"
#include "Cat.cpp"
using namespace std;

class Platypus : public Duck, public Beaver {
	string talk() {
		return "grrrr NIGGA!";
	}
};

int main() {
	Animal * animals[] = { &Duck(), &Beaver(), &Cat(),&Platypus() };

	for (int i = 0; i < sizeof(animals) / sizeof(animals[0]); i++) {
		cout << (animals[i])->talk() << " ";
	}
	int temp;
	cin >> temp;
}