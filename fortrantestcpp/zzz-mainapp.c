#include "../../fortrantest/f2c.h"

#include "../../fortrantest/oldf77.P"
#include "../../fortrantest/oldf7701.P"
#include "../../fortrantest/oldf7702.P"
#include "../../fortrantest/oldf7703.P"
#include "../../fortrantest/oldf7704.P"

int main(int atgc, char** argv)
{
	
	integer ii1 = 100;
	char cc1[] = "helloooo";
	longint ii2 = 200;
	char cc2[] = "worldddd";
	integer arr[5];
	integer arrlen = 5;
	ftnlen cc1_len = sizeof(cc1) - 1;
	ftnlen cc2_len = sizeof(cc2) - 1;

	char strarr[5][15];
	integer strarrlen = 5;


	const int loop = 3;
	for (int ii = 0; ii < loop; ++ii)
	{
		oldf77_();
		oldf7701_();
		oldf7702_();
		oldf7703_();
		oldf7704_(&ii1, cc1, &ii2, cc2, arr, &arrlen, cc1_len, cc2_len);
		oldf7705_((char*)strarr, &strarrlen, 15);
	}

	return 0;
}