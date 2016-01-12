#include "Employee.h"
//****************************************************
// Function(s): defualt constructor
//
// Purpose: Constructs Empolyee Object with default vaules
//
// Update Information
// ------------------
//
// Name: Jesus Quintanilla
// Date: 10/5/2015
// Description:  changed member variables to pointers, so changed the variables here to use dereference operator and new.
//               
//
//****************************************************
Employee::Employee(){

	id = new int;
	salary = new double;
	*id = 0;
	*salary = 0;

}
//****************************************************
// Function(s): a constructor
//
// Purpose: Constructs Empolyee Object with values given of one ine and double
//
// Update Information
// ------------------
//
// Name: Jesus Quintanilla
// Date: 10/5/2015
// Description:  changed member variables to pointers, so changed the variables here to use dereference operator and new
//               
//
//****************************************************
Employee::Employee(int p_id, double p_salary){

	id = new int;
	salary = new double;
	*id = p_id;
	*salary = p_salary;

}
//****************************************************
// Function(s): copy constructor
//
// Purpose: Makes a copy of current object to anther
//
// Update Information
// ------------------
//
// Name: Jesus Quintanilla
// Date: 10/5/2015
// Description:  changed member variables to pointers, so changed the variables here to use dereference operator.
//               
//
//****************************************************
//copy const
Employee::Employee(const Employee& x){
	id = new int;
	salary = new double;
	*id = *x.id;
	*salary = *x.salary;


}
//****************************************************
// Function(s): destructor
//
// Purpose: Kills current object while cleaning up pointers
//
// Update Information
// ------------------
//
// Name: Jesus Quintanilla
// Date: 10/5/2015
// Description:  Added Delete to clean up pointers
//               
//
//****************************************************
Employee::~Employee(){
	delete id;
	delete salary;
	id = NULL;
	salary = NULL;




}
//****************************************************
// Function(s): getAuthor
//
// Purpose: Prints Coders Name
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
std::string Employee::GetAuthor(){

	return "By Jesus Quintanilla";
}
//****************************************************
// Function(s):getID()
//
// Purpose: gets id of empolyee
//
// Update Information
// ------------------
//
// Name: Jesus Quintanilla
// Date: 10/5/2015
// Description:  added derefence operator because working with pointers
//               
//
//****************************************************
int Employee::getId(){

	return *id;
}
//****************************************************
// Function(s): get salary
//
// Purpose: returns salary of this empolyee
//
// Update Information
// ------------------
//
// Name: Jesus Quintanilla
// Date: 10/5/2015
// Description:  added derefence operator because working with pointers
//               
//
//****************************************************
double Employee::getSalary(){


	return *salary;
}
//****************************************************
// Function(s): setID
//
// Purpose: User Sets id of an empolyee
//
// Update Information
// ------------------
//
// Name: Jesus Quintanilla
// Date: 10/5/2015
// Description:  added derefence operator because working with pointers
//               
//
//****************************************************

void Employee::setId(int p_id){
	*id = p_id;

}
//****************************************************
// Function(s): SetSalary
//
// Purpose: Users sets salary of this empolyee
//
// Update Information
// ------------------
//
// Name: Jesus Quintanilla
// Date: 10/5/2015
// Description:  added derefence operator because working with pointers
//               
//
//****************************************************
void Employee::setSalary(double p_sal){

	*salary = p_sal;

}
//****************************************************
// Function(s): Operator Overload( << )
//
// Purpose: custom print of  empolyee object
//
// Update Information
// ------------------
//
// Name: Jesus Quintanilla
// Date: 10/5/2015
// Description:  added derefence operator because working with pointers
//               
//
//****************************************************
std::ostream& operator<< (std::ostream &os, const Employee &emp){

	os << "ID: " << *emp.id << " Salary: $ " << *emp.salary << std::endl;

	return os;
}

//****************************************************
// Function(s): Operator Overload( >> )
//
// Purpose: custom input in  empolyee object
//
// Update Information
// ------------------
//
// Name: Jesus Quintanilla
// Date: 10/5/2015
// Description:  added derefence operator because working with pointers
//               
//
//****************************************************
std::istream& operator >>(std::istream &is, Employee &emp){
	is >> *emp.id;
	is >> *emp.salary;
     
	return is;


}

Employee& Employee::operator=(const Employee &other){
	*id = *other.id;
	*salary = *other.salary;

	return *this;
}

bool operator==(Employee &lhs, Employee& rhs){
 return ((*lhs.id == *rhs.id)&&(*lhs.salary == *rhs.salary));
}

bool operator<(Employee &lhs, Employee& rhs){

	return *lhs.id < *rhs.id;
}
bool operator>(Employee &lhs, Employee& rhs){
	return *lhs.id > *rhs.id;

}
