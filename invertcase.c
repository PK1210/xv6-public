#include "types.h"
#include "stat.h"
#include "user.h"

char * invertcase(char * str)
{
	int i;
	for(i = 0; str[i]!='\0'; i++)
		if(str[i]<='z' && str[i]>='a')
			str[i] -= ('a' - 'A');
		else if(str[i]<='Z' && str[i]>='A')
			str[i] += ('a' - 'A');
	return str;
}
int main(int argc, char *argv[])
{
  int i;

  for(i = 1; i < argc; i++)
    printf(1, "%s%s", invertcase(argv[i]), i+1 < argc ? " " : "\n");
  exit();
}
