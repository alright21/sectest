#include <stdio.h>
#include <string.h>

int foo() {
char a = 'a';
char buf[3];
char password[] = "ciao";
strcpy(buf, password);
printf(buf);
printf("\n%c", a);
return 0;
}
int main() {
foo();
return 0;
}