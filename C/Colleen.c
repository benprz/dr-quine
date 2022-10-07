/*Outside comment*/
#include <stdio.h>
void another_function() {
char *c="/*Outside comment*/%c#include <stdio.h>%cvoid another_function() {%cchar *c=%c%s%c;%cprintf(c,10,10,10,34,c,34,10,10,10,10,10,10,10,10);%c}%cint main() {%c/*Inside comment*/%canother_function();%creturn 0;%c}%c";
printf(c,10,10,10,34,c,34,10,10,10,10,10,10,10,10);
}
int main() {
/*Inside comment*/
another_function();
return 0;
}
