/*
 * Copyright (c) Arrel Neumiller <rlneumiller@gmail.com>.
 *
 * SPDX-License-Identifier: MIT
 */

#ifndef PRINT_MESSAGE_H
#define PRINT_MESSAGE_H

#include <stdio.h>
#include <string.h>
#include <zephyr/kernel.h>

void print_message(const char *format, ...);

#endif // PRINT_MESSAGE_H
