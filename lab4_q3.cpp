//include all the necessary libraries
#include <iostream>
using namespace std;
int main()
{

	//Conversion of temperature in fahrenheit to celsius scale
	//declaring the necessary variables

	float fah, cel;
	//initialising the variable

	fah = 97;
	cout <<"The value of temperature in Fahrenheit is "<<fah<<endl;
	cout <<"To convert temperature into celsius scale"<<endl;

	//calculating the other variable

	cel = (fah-32)*0.5556;

	cout << "The value of temparature in celsius scale is" <<cel<<endl;
	return 0;
}

