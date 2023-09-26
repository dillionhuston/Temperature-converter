#include <iostream>

// This is very crap code but still its a temp converter

// define outside scope 
	struct var {
	double temp;
	char unit;
}




int main() {
using namspace std;



	std::cout << "Temperature conversion\n";
	std::cout << "What unit would you like to convert too?\n";
	std::cin >> var.unit;



	if (var.unit == 'F' || var.unit == 'f') {

		std::cout << "Enter the temp in celsius";
		std::cin >> temp;

		var.temp = (1.8 * var.temp + 32);

		std::cout << "Temperature is: " << var.temp << "F\n";


	}

	else if (var.unit == 'C' || var.unit == 'c') {
		std::cout << "Enter temp in farenheight";
		std::cin >> var.temp;

		var.temp = (var.temp - 32) / 1.8;
		std::cout << "Temperature is: " << var.temp << "C\n";
	}



	else {

		std::cout << "Please only enter C or F!\n";

	}




	return 0;

}





 
