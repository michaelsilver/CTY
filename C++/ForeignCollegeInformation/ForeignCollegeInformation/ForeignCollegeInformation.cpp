/*
	The finished Help system that process multiple requests.
*/

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	char choice;

	for(;;) {
		do {
			cout << "Please SELECT one of these top US Colleges for more information: \n";
			cout << "	1. Harvard\n";
			cout << "	2. Princeton\n";\
			cout << "	3. Yale\n";
			cout << "	4. Columbia\n";
			cout << "	5. UChicago\n";
			cout << "	6. MIT\n";
			cout << "	7. Stanford\n";
			cout << "	8. Duke\n";
			cout << "	9. UPenn\n";
			cout << "	10. CalTech\n";
			cout << "Choose one (q to quit): ";
			cin >> choice;
		}	while (choice < '1' || choice > '10' && choice != 'q');

		if (choice == 'q') break;

		cout << "\n\n";

		switch(choice) {
		case '1':
			cout << "Harvard University\n";
			cout << "Cambridge, Massachusetts\n";
			cout << "617.495.1000\n";
			cout << "Nickname: Harvard Crimson\n";
			cout << "http://www.harvard.edu/\n";
			cout << "Sasha's Momy: lkenedy@fas.harvard.edu\n";
			break;
		case '2':
			cout << "Princeton University\n";
			cout << "Princeton, New Jersey\n";
			cout << "609-258-3000\n";
			cout << "Nockname: Tigers\n";
			cout << "http://www.princeton.edu/main/\n";
			cout << "Admissions: uaoffice@princeton.edu\n";
			break;
		case '3':
			cout << "Yale University\n";
			cout << "New Haven, Connecticut\n";
			cout << " 203.432.9300\n";
			cout << "Nicknames: Elis, Bulldogs, Yalies\n";
			cout << "http://www.yale.edu/\n";
			cout << "student.questions@yale.edu\n";
			break;
		case '4':
			cout << "Columbia University\n";
			cout << "New York, New York\n";
			cout << "212-854-5573\n";
			cout << "No Nickname\n";
			cout << "http://www.columbia.edu/\n";
			cout << "askcuit@columbia.edu\n";
			break;
		case '5':
			cout << "University of Chicago\n";
			cout << "Chicago, Illinois\n";
			cout << "(773) 702-1234\n";
			cout << "Nickname: Maroons\n";
			cout << "http://www.uchicago.edu/\n";
			cout << "collegeadmissions@uchicago.edu\n";
			break;
		case '6':
			cout << "Massachusetts Institute of Technology\n";
			cout << "Cambridge, Massachusetts\n";
			cout << "617.253.1000\n";
			cout << "Nickname: MIT\n";
			cout << "http://web.mit.edu/\n";
			cout << "admissions@mit.edu\n";
			break;
		case '7':
			cout << "Stanford University\n";
			cout << "Stanford, California\n";
			cout << "(650) 723-2300\n";
			cout << "Nickname: Cardinal\n";
			cout << "http://www.stanford.edu/s\n";
			cout << "visitorinfo@stanford.edu\n";
			break;
		case '8':
			cout << "Duke University\n";
			cout << "Durham, North Carolina\n";
			cout << "(919) 684-8111\n";
			cout << "Nickname: Blue Devils\n";
			cout << "http://duke.edu/\n";
			cout << "No email adress\n";
			break;
		case '9':
			cout << "University of Pennsylvania\n";
			cout << "Philadelphia, Pennsylvania\n";
			cout << "(215) 898-5000\n";
			cout << "Nickname: Quakers\n";
			cout << "http://www.upenn.edu/\n";
			cout << "abuse@isc.upenn.edu\n";
			break;
		case '10':
			cout << "California Institute of Technology\n";
			cout << " Pasadena, California\n";
			cout << "626-395-6811\n";
			cout << "Nicknam: CalTech\n";
			cout << "http://www.caltech.edu/\n";
			cout << "help@caltech.edu\n";
			break;
		}
		cout << "\n";
	}
	system ("pause");
	return 0;
}



