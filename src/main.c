/*
 * Copyright (c) Arrel Neumiller <rlneumiller@gmail.com>.
 *
 * SPDX-License-Identifier: MIT
 */

#include <stdio.h>
#include "print_message.h"

int main(void)
{
	print_message("Hello World! %s\nThis is a longer message", CONFIG_BOARD_TARGET);

	return 0;
}
