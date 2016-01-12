/*

Write a C++ program to do the following: The main program reads in three integers,
representing the degree measurement of three angles of a triangle and sends them to a function.
If the function says that the three integers form a valid triangle, the main program calls
another function to classify the triangle. After repeating this process for the entire set of
data, the main program prints out how many groups formed valid triangles and how many formed
invalid ones.

The first function, which checks for validity, uses the following rule: The three angles form
a valid triangle if they add up to 180 and each one is greater than 0. For example 70, 60 and 50
is valid while 120, 80, and -20 is invalid.

The classification function calls two additional functions. One of them determines if the
triangle is equiangular (all three angles are equal), isosceles (exactly two angles are equal),
or scalene (all three angles different). The other function determines if the triangle is right
has one angle with 90 degrees), obtuse (one angle above 90), or acute (all three below 90).



Be sure to cover all the possible combinations and to include some invalid triangles as well.

Make sure your name appears on the printout.

You should create a well formatted report indicating whether or not the set of angles is valid
or not. If they are valid then classify the triangles as to whether it is equiangular, isosceles
or scalene, and whether it has an obtuse angle, right angle or is acute.
*/
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int isTriangle(int, int, int,int&,int&);
void classifly(int,int,int);
void isRightTriangle(int,int,int);
void typeTriangle(int,int,int);
ifstream input;
ofstream output;
int main(){
	input.open("inputFile.txt");
	output.open("OutputFile.txt");
	int a, b;
	int& vaild = a;
	int& invald =b;
	int side1, side2, side3;
	output << "Angle 1    Angle 2    Angle 3  Status  Type   Kind" << endl;
	while (!input.eof()){
		input >> side1;
		input >> side2;
		input >> side3;
		if ((isTriangle(side1, side2, side3,vaild,invald) == 0)){
			//output sides and unknown for invaild
			output << side1 << setw(5) << side2 << setw(5) << side3 <<setw(5)<<"invaild"<<setw(5)<<"UnKnown"<<setw(5)<< setw(5)<<"Unknown "<<endl;
		}
		else if ((isTriangle(side1, side2, side3, vaild, invald) == 1)){
			classifly(side1, side2, side3);
		}

	}//end while


	input.close();
	output.close();
	cout << endl;
	cout << "By jesus quintanilla"<<endl;
	return 0;
}//end main
int isTriangle(int a, int b, int c,int & vaild,int & invaild){
/*The three angles form a valid triangle if they add up to 180 and each one is greater than 0. 
For example 70, 60 and 50
is valid while 120, 80, and -20 is invalid.*/
	if ((a <= 0) || (b <= 0) || (c <= 0) || (a + b + c > 180)){
		invaild++;
		return 1;
	}
	else
	{
		vaild++;
		return 0;
	}
}
void classifly(int a, int b, int c){
	/*The classification function calls two additional functions.*/
	isRightTriangle(a, b, c);
	typeTriangle(a, b, c);
}
void isRightTriangle(int a, int b , int c){
	if ((a == 90) || (b == 90) || (c == 90)){
		output << "Right";
	}
	else if ((a >90) || (b >90) || (c>90))	
	{
		output << "Obtuse";
	}
	else
	{
		output << "Acute";
	}
	/* The other function determines if the triangle is right
has one angle with 90 degrees), obtuse (one angle above 90), or acute (all three below 90)*/
// if return 0 right //if return 1 obtuse //if return 2 accute
}
void typeTriangle(int a, int b, int c){
	/*determines if the triangle is equiangular(all three angles are equal), 
	  isosceles(exactly two angles are equal),
	or scalene(all three angles different).
	*/
	if ((a == b) && (b == c) && (c == a)){
		output << "equiangular";
	}
	else if ((a== b) || (b == c) || (c == a)){
		output << "isosceles";
	}
	else{
		output << "scalene";
	}
	//if return 0 Equiangular // if return 1 isosceles //if return 2 scalene
}
