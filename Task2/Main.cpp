#include "AdminTeacher.h"
#include "Bs.h"
#include "Alumnis.h"
#include "MsCourse.h"
#include "MsResearch.h"

int main()
{
	char name[100] = "Aashoo";

	Teacher t1(name, 1234);
	t1.displayTeacher();
	cout << endl;

	AdminTeacher at1(name, 1234);
	at1.displayAdmin();

	return 0;
}