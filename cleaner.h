#pragma once
#include"Employee.h"
#include "enum.h"


class Cleaner : public Employee
{
public:
	Cleaner(std::string Name, std::string LastName, float Salary,  std::string Position) :
		m_Name(Name), m_LastName(LastName),
		m_Salary(Salary),  m_Position(Position) {};

	void CountSalary(std::string WorkTime)
	{
		if (WorkTime == "FullTime")
		{
			int Sal = m_state = FullTime;
			m_Salary = m_Salary + Sal * 3000;
		}
		else if (WorkTime == "PartTime")
		{
			int Sal = m_state = PartTime;
			m_Salary = m_Salary + Sal * 1500;

		}
		else
		{
			std::cout << "Your imported Time is not valid \n";
		}
	}

	void GetInfo()
	{
		std::cout << m_Name << std::endl;
		std::cout << m_LastName << std::endl;
		std::cout << m_Salary << std::endl;
		std::cout << m_state << std::endl;
		std::cout << m_Position << std::endl;

	}

private:
	std::string m_Name;
	std::string m_LastName;
	float m_Salary;
	WorkTime m_state;
	std::string m_Position;

};
