#include <iostream>
using namespace std;
//declaring the main function
int main ()
{

	//declaring the necessary variables
	float km, met, centi;
	centi=100;	

	//initial value in centimeters
	

	cout <<"\n\n Convert length in centimeters to meters and kilometers \n\n";
	

	//converting the required length to meter and kilometer
	//calculating the required values

	met = (centi/100);
	km =(centi/100000);

	cout << " The length in meter is"<<met<<endl;
	cout << " The length in kilometer is "<<km<<endl;

	cout << endl;
	return 0;
}
