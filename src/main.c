/*
 * Copyright (c) 2012-2014 Wind River Systems, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <stdio.h>
#include "print_message.h"

int main(void)
{
	print_message("Hello World! %s\nThis is a longer message", CONFIG_BOARD_TARGET);

	return 0;
}
