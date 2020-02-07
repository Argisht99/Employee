#include "Meneger.h"
#include "cleaner.h"

int main()
{
	Employee* Meneg = new Meneger("Argisht", "Aleksanyan", 250000, "Meneger");
	Employee* Clean = new Cleaner("John", "Smith", 70000, "Cleaner");
	//Meneger A("Argisht", "Aleksanyan", 250000, FullTime, "Meneger");
	Meneg ->CountSalary("PartTime");
	Meneg ->GetInfo();
	Clean->CountSalary("FullTime");
	Clean->GetInfo();
	return 0;
}