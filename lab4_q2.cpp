#include <iostream>

using namespace std;
int main()
{
 
	//programme to convert temperature from celsius into fahrenheit

	//declaring the variables
	float cel,fah;

	cel=25;
	cout <<"The value of temperature in Celsius Scale is"<<cel<<endl;

	cout <<"\n\n Convert the temperature into fahrenheit \n\n";

	//initial values of temperature is in celsius
	//now we have to convert the temp into fahrenheit
	//calculating the required values

	fah = (1.8*cel+32);

	cout << " The temperature in fahrenheit scale is "<<fah<<endl;

	cout <<endl;

	return 0;
}
