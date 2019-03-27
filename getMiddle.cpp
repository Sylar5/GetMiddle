//#include "stdafx.h"
#include <iostream>

using namespace std;

int getMiddle(int left, int right) {
	int middle1 = (left + right) >> 1;
	int middle2 = left + ((right - left) >> 1);
	cout << "middle 1 = " << middle1 << endl;
	cout << "middle 2 = " << middle2 << endl;		
	cout << endl;
	
	if (middle1 != middle2)		
		return -1;
	
	return 0;
}

int main()
{
	for (int i = 0; i < 1000; ++i) {
		cout << "number is: " << i << endl;
		if (getMiddle(rand(), rand()))
			break;
	}
  
	return 0;
}
