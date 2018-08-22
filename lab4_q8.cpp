//include all the necessary libraries
#include <iostream>
using namespace std;
int main()
{

	//programme to calculate total,average and net percentage of five subjects
	//declaring all the necessary variables

	double phy,chem,bio,maths,english, total, average, percent, gross;
	//iniatialising the varibles

	phy= 77;
	chem=90;
	bio=93;
	maths=92;
	english=83;
	gross=500;

	cout <<"Physics Marks-" <<phy<<endl;
	cout <<"Chemistry Marks-" <<chem<<endl;
	cout <<"Biology Marks-" <<bio<<endl;
	cout <<"Maths Marks-" <<maths<<endl;
	cout <<"English Marks-"<<english<<endl;

	//now we have to calculate the total and average of all 5 subjects

	total= (phy+chem+bio+maths+english);
	average= (phy+chem+bio+maths+english)/5;
	percent= (total/gross)*100;

	cout <<"Total Marks-" <<total<<endl;
	cout <<"Average Marks-" <<average<<endl;
	cout <<"Percentage-" <<percent<<endl;

	return 0;
}


