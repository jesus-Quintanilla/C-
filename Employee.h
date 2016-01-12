#ifndef H_EMP
#define H_EMP

#include <iostream>
#include <string>
class Employee{
public:
	//****************************************************
	// Function(s): Constructors(empty, 2 parameters and copy)
	//
	// Purpose: Constructs employees.
	//
	// Update Information
	// ------------------
	//
	// Name: Jesus Quintanilla
	// Date: 10/5/2015
	// Description: 
	//               
	//
	//****************************************************

	Employee();
	Employee(int p_id, double p_salary);
	Employee(const Employee&);
	//****************************************************
	// Function(s): Destructor
	//
	// Purpose: Destructs employees?
	//
	// Update Information
	// ------------------
	//
	// Name: Jesus Quintanilla
	// Date: 10/5/2015
	// Description: 
	//               
	//
	//****************************************************
	~Employee();
	//****************************************************
	// Function(s): getAuthour 
	//
	// Purpose: Return string of authors name
	//
	// Update Information
	// ------------------
	//
	// Name: Jesus Quintanilla
	// Date: 10/5/2015
	// Description: 
	//               
	//
	//****************************************************
	std::string GetAuthor();

	//****************************************************
	// Function(s): getId
	//
	// Purpose: Returns ID of empolyee in INT form
	//
	// Update Information
	// ------------------
	//
	// Name: Jesus Quintanilla
	// Date: 10/5/2015
	// Description: 
	//               
	//
	//****************************************************
	int getId();

	//****************************************************
	// Function(s): getSalary
	//
	// Purpose: Returns Salary of Empolyee in DOUBLE form
	//
	// Update Information
	// ------------------
	//
	// Name: Jesus Quintanilla
	// Date: 10/5/2015
	// Description: 
	//               
	//
	//****************************************************
	double getSalary();
	//****************************************************
	// Function(s): set ID and set Salary
	//
	// Purpose: User sets both ID and/or Salary
	//
	// Update Information
	// ------------------
	//
	// Name: Jesus Quintanilla
	// Date: 10/5/2015
	// Description: 
	//               
	//
	//****************************************************
	void setId(int);
	void setSalary(double);
	//****************************************************
	// Function(s): Operator Overload(s) of =, << and >>
	//
	// Purpose: Overloads the default operators as follows 
	// = to check if two objects are equal or not
	// << custom print of Empolyee object to stanard output(console)
	// >> Custom input to be used for	  "Reads the values of all member variables from the given istream."
	// Update Information
	// ------------------
	//
	// Name: Jesus Quintanilla
	// Date: 10/5/2015
	// Description: 
	//               
	//
	//****************************************************
	friend std::ostream& operator<< (std::ostream &os, const Employee &emp);
	friend std::istream& operator>> (std::istream &is, Employee &emp);
	Employee& Employee::operator=(const Employee &other);
	friend bool operator==(Employee &lhs, Employee& rhs);
	friend bool operator<(Employee& lhs, Employee& rhs);
	friend bool operator>(Employee &lhs, Employee& rhs);


private:
	//****************************************************
	// Variables: id and salary
	//
	// Purpose: Member varibles ofthe empolyee class
	//
	// Update Information
	// ------------------
	//
	// Name: Jesus Quintanilla
	// Date: 10/5/2015
	// Description: changed both member variables (id and salary) to a
	//              pointer. Updated code so that it works
	//              with a pointer. 
	//
	//****************************************************

	int *id;
	double *salary;
};






#endif
