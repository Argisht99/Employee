#pragma once
#include <iostream>
#include <string>
#include "enum.h"

class Employee
{
public:
	Employee() {};
	Employee(std::string Name, std::string LastName, float Salary,  std::string Position) :
		m_Name(Name), m_LastName(LastName),
		m_Salary(Salary), m_Position(Position)
	{};

	virtual void CountSalary(std::string WorkTime) = 0;
	virtual void GetInfo() = 0;
	

private:

	std::string m_Name;
	std::string m_LastName;
	float m_Salary;
	 WorkTime m_state;
	std::string m_Position;
	 
};
