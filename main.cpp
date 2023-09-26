#include <iostream>

// This is very crap code but still its a temp converter!

int main() {
using namspace std;

	struct var {
	double temp;
	char unit;
}


	std::cout << "Temperature conversion\n";
	std::cout << "What unit would you like to convert too?\n";
	std::cin >> var.unit;



	if (var.unit == 'F' || var.unit == 'f') {

		std::cout << "Enter the temp in celsius";
		std::cin >> temp;

		temp = (1.8 * temp + 32);

		std::cout << "Temperature is: " << temp << "F\n";


	}

	else if (unit == 'C' || unit == 'c') {
		std::cout << "Enter temp in farenheight";
		std::cin >> temp;

		temp = (temp - 32) / 1.8;
		std::cout << "Temperature is: " << temp << "C\n";
	}



	else {

		std::cout << "Please only enter C or F!\n";

	}




	return 0;

}





 
