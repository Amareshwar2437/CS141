//include all the neccessary libraries
#include <iostream>
using namespace std;
int main() 
{

 	//Programme to find area of the triangle given its base and height
	//declaring the necessary variables

	float base, height, area;	
	//iniatialising the variables

	base= 10;
	height=20;

	cout <<"The base of the triangle in centimeters is "<<base<<endl;
	cout <<"The height of the triangle in centimeters is "<<height<<endl;

	//now we have to find the area of the triangle

	area= (base*height)/2;

	cout <<"The area of the triangle in sq.cm is "<<area<<endl;

	cout<<endl;
	return 0;
}
