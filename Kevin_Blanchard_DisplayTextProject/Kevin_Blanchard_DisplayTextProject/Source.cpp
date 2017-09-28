/* Kevin Blanchard 9/22/2017 1st Period
Displaying text
Learning the basics of code by displaying text
*/

//Libraries
#include <iostream>
#include <conio.h>

//Namespaces
using namespace std;

//Variables
int calc_1, calc_2, calc_3;


//Functions()
void pause() {
	cout << "Press any key to continue";
		while (!_kbhit());
	_getch();
	cout << '/n';
}
//MAIN
void main() {
	cout << "Kevin Blanchard" << endl;
	cout << "Computer Science" << endl;
	cout << "First Period" << endl;
	cout << "Hello World" << endl;
	cout << "Im the best" << endl;
	cout << "Goodbye" << endl;

	cout << "Enter a number : ";
	cin >> calc_1;
	cout << "Enter a number another number : ";
	cin >> calc_2;
	cout << calc_1 << " + " << calc_2 << " = " << calc_1 + calc_2 << endl;
	calc_3 = calc_1 * calc_2;
	cout << calc_1 << " * " << calc_2 << " = " << calc_3 << endl;

	pause();
}