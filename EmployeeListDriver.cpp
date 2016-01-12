#include <iostream>
#include "Employee.h"
#include"EmployeeList.h"
// *******REMEMBER MUST PUT ABOVE WITHTHIS INA .ZIP FILE OR ELSE WONT WORK *********

int main(){
	Employee testEmp;
	Employee testEmp2;
	Employee result;

	
	testEmp.setId(1);
	testEmp.setSalary(20000);
	

	testEmp2.setId(2);
	testEmp2.setSalary(10000);
	EmployeeList x;
	x.Add(testEmp);
	x.Add(testEmp2);
	

	std::cout << testEmp <<testEmp2;
	return 0;
}
