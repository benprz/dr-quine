/*comment*/
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#define foo main
#define X "/*comment*/%c#include <fcntl.h>%c#include <unistd.h>%c#include <stdio.h>%c#include <string.h>%c#define foo main%c#define X %c%s%c%c#define F int foo() {%c%c%cint fd;%c%c%cif ((fd = open(%cGrace_kid.c%c, O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR)) != -1) {%c%c%c%cchar s[1000];%c%c%c%cint len = sprintf(s,X,10,10,10,10,10,10,34,X,34,10,92,10,9,92,10,9,34,34,92,10,9,9,92,10,9,9,92,10,9,9,92,10,9,9,92,10,9,92,10,9,92,10,10,10,10);%c%c%c%cs[len] = 0;%c%c%c%cwrite(fd, s, len);%c%c%c}%c%c%creturn 0;%c%c}%c%cF%c"
#define F int foo() {\
	int fd;\
	if ((fd = open("Grace_kid.c", O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR)) != -1) {\
		char s[1000];\
		int len = sprintf(s,X,10,10,10,10,10,10,34,X,34,10,92,10,9,92,10,9,34,34,92,10,9,9,92,10,9,9,92,10,9,9,92,10,9,9,92,10,9,92,10,9,92,10,10,10,10);\
		s[len] = 0;\
		write(fd, s, len);\
	}\
	return 0;\
}

F
