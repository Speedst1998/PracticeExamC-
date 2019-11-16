#include <iostream>
#include<string>
#include"Animal.h"
using namespace std;

class Cat : virtual public Animal {
	string talk() {
		return "MEOW NIIGGAA";
	}
};