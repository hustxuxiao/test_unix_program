#include "../common_file/include/apue.h"

int main(void)
{
	int c;
	while ((c = getc(stdin)) != EOF)
		if(putc(c,stdout) == EOF)
			err_sys("out_put error !");
	if (ferror(stdin))
		err_sys("input error");

	exit(0);
}
