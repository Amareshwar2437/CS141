//include all the neccessary libraries
#include <iostream>
using namespace std;
int main()
{ 

	//programme to find the last angle of a triangle when the other 2 angles are provided
	//we know sum of angles in a triangle is 180 degree

	//declaring the variables

	float a,b,c;
	//initialising the variables

	a= 45;
	b= 55;

	cout <<"The value of angle A in degree is"<<a<<endl;
	cout <<"The value of angle B in degree is"<<b<<endl;

	//now we have to calculate the value of the final angle

	c= 180-(a+b);

	cout <<"The value of angle C in degree is"<<c<<endl;

	cout<<endl;
	return 0;
}
