#include <stdio.h>
#include "pico/stdlib.h"
#include "pico/binary_info.h"

#define PROG_DESC "Raspberry Pi Pico Test Program"

int main()
{
	bi_decl(bi_program_description(PROG_DESC));

	stdio_init_all();

	for (int i = 0; i < 10; i++)
	{
		sleep_ms(500);
		putchar('.');
	}
	printf("%s\n", PROG_DESC);

	while(1)
	{
		tight_loop_contents();
	}
}
