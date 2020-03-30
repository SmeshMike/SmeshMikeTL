#include "../Headers/String.h"
#include <iostream>

using namespace mstl;

int main()
{
	string s1 = "dsdsa";
	string s2 = "h,u,i,l,a";

	std::cout << "\n";


	for (int i = 0; i < s2.Length(); i++)
		s2.Split(',');


	return 0;
}