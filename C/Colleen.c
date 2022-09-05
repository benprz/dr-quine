/*
	Outside comment
*/

#include <stdio.h>

void another_function()
{
	printf("/*\n	Outside comment\n*/\n\n#include<stdio.h>\n\nvoid another_function()\n{\n	printf(\"/*\n	Outside comment\n")
}

int main()
{
	/*
		Inside comment
	*/
	return 0;
}
