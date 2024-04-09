#include "MyUtiltiies.h"

int MyUtilities::lengthOfName(Person* p)
{
	string tempName = "";
	int length = -1;

	tempName = p->getName();
	length = tempName.length();
	return length;
}
