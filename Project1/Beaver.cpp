#include <iostream>
#include<string>
#include"Animal.h"
using namespace std;

class Beaver : virtual public Animal {
	string talk() {
		return "SPLAT NIIGGAA";
	}
};