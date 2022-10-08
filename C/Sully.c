#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#define X "#include <stdlib.h>%c#include <fcntl.h>%c#include <unistd.h>%c#include <stdio.h>%c#include <string.h>%c#define X %c%s%c%c%cint main() {%c%cint fd, i = %d;%c%cchar s[1000];%c%c%csprintf(s, %cSully_%%d.c%c, i-1);%c%cif ((fd = open(s, O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR)) != -1) {%c%c%cint len = sprintf(s,X,10,10,10,10,10,34,X,34,10,10,10,9,i-1,10,9,10,10,9,34,34,10,9,10,9,9,10,9,9,10,9,9,10,9,9,10,9,10,9,10,10);%c%c%cwrite(fd, s, len);%c%c%csprintf(s, %cclang -Wall -Wextra -Werror Sully_%%d.c -o Sully_%%d ; ./Sully_%%d%c, i, i, i);%c%c%c//system(s);%c%c}%c%creturn 0;%c}%c"

int main() {
	int fd, i = 6;
	char s[2000];

	sprintf(s, "Sully_%d.c", i-1);
	if ((fd = open(s, O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR)) != -1) {
		int len = sprintf(s,X,10,10,10,10,10,34,X,34,10,10,10,9,i-1,10,9,10,10,9,34,34,10,9,10,9,9,10,9,9,10,9,9,10,34,34,9,9,10,9,10,9,10,10);
		write(fd, s, len);
		sprintf(s, "clang -Wall -Wextra -Werror Sully_%d.c -o Sully_%d ; ./Sully_%d", i, i, i);
		//system(s);
	}
	return 0;
}
