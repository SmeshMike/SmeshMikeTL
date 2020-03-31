#include "../Headers/String.h"
#include <iostream>

using namespace mstl;

int main()
{
	string s1 = "dsdsa";
	string s2 = "h,u,i,l,a";

	std::cout << "\n";

	printf((s1+s2).ToCharMas());

	//printf(s2.Trim(',').ToCharMas());

}