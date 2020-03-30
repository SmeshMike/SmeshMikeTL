#include "String.h"
#include <stdio.h>

int main()
{
	string s1 = "dsdsa";

	string s2 = "h,u,i,l,a";

	printf("\n");


	for (int i = 0; i < s2.Length(); i++)
		printf(s2[i].Split(',')->ToCharMas());

}