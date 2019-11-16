#include <iostream>
#include<string>
#include"Animal.h"
using namespace std;

class Duck : virtual public Animal {
	string talk() {
		return "QUACK NIIGGAA";
	}
};