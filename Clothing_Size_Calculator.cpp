#include <iostream>
#include <string>

//this program determines various clothing sizes for the user based on an input of height, weight, and age.
//declare functions
double hatSize(int weight, int height);
//Returns the proper hat size for a person given their weight in pounds and their height in inches.
double jacketSize(int weight, int height, int age);
//Returns a person's jacket size given their weight in pounds, height in inches, and age in years.
double waistSize(int weight, int age);
//Returns a person's waist size given their weight in pounds and age in years.
//declare constants
const double JACKET_GAIN_PER = 0.125, WAIST_GAIN_PER = 0.1;
const int JACKET_PERIOD = 10, WAIST_PERIOD = 2;

//main
int main(){
	//initialize variables
	char prompt;
	int height, weight, age;
	//greet user
	cout << "This program will determine your hat size, jacket size, and waist size, given some simple measurements.\n";
	//begin program loop
	do
	{
		cout << "Enter your height in inches: ";
		cin >> height;
		cout << "Enter your weight in pounds: ";
		cin >> weight;
		cout << "Enter your age in years: ";
		cin >> age;
		//calculate and output
		cout << "Your hat size is: " << hatSize(weight, height) << endl
			<< "Your jacket size is: " << jacketSize(weight, height, age) << " inches\n"
			<< "Your waist size is: " << waistSize(weight, age) << " inches\n";
		//prompt to continue
		cout << "Woould you like to continue? Y to continue, N to end\n";
		cin >> prompt;
	} while (prompt == 'Y' || prompt == 'y');
	cout << "Goodbye!\n";
	return 0;
}

//define functions
double hatSize(int weight, int height)
{
	return (weight / static_cast<double>(height)) * 2.9;
}

double jacketSize(int weight, int height, int age)
{
	double size = (height * weight) / static_cast<double>(288);
	if (age > 30)
		return size + (JACKET_GAIN_PER * ((age - 30) / JACKET_PERIOD));
	else
		return size;
}

double waistSize(int weight, int age)
{
	double size = weight / 5.7;
	if (age > 28)
		return size + (WAIST_GAIN_PER * ((age - 28) / WAIST_PERIOD));
	else
		return size;
}


