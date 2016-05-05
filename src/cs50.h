/**
 * CS50 Library for C
 * https://github.com/cs50/c/
 *
 * Based on Eric Roberts' genlib.c and simpio.c.
 *
 * Copyright (c) 2016,
 * Glenn Holloway <holloway@eecs.harvard.edu>
 * David J. Malan <malan@harvard.edu>
 * All rights reserved.
 *
 * BSD 3-Clause License
 * http://www.opensource.org/licenses/BSD-3-Clause
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 * * Redistributions of source code must retain the above copyright notice,
 *   this list of conditions and the following disclaimer.
 * * Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the distribution.
 * * Neither the name of CS50 nor the names of its contributors may be used
 *   to endorse or promote products derived from this software without
 *   specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
 * IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
 * PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED
 * TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _CS50_H
#define _CS50_H

#include <float.h>
#include <limits.h>
#include <stdbool.h>
#include <stdlib.h>

/**
 * Our own data type for string variables.
 */
typedef char *string;

/**
 * Reads a line of text from standard input and returns the equivalent
 * char; if text does not represent a char, user is prompted to retry.
 * Leading and trailing whitespace is ignored. If line can't be read,
 * returns CHAR_MAX.
 */
char get_char(void);
char (*GetChar)(void) __attribute__((deprecated));

/**
 * Reads a line of text from standard input and returns the equivalent
 * double as precisely as possible; if text does not represent a
 * double or if value would cause underflow or overflow, user is
 * prompted to retry. If line can't be read, returns DBL_MAX.
 */
double get_double(void);
double (*GetDouble)(void) __attribute__((deprecated));

/**
 * Reads a line of text from standard input and returns the equivalent
 * float as precisely as possible; if text does not represent a float
 * or if value would cause underflow or overflow, user is prompted to
 * retry. If line can't be read, returns FLT_MAX.
 */
float get_float(void);
float (*GetFloat)(void) __attribute__((deprecated));

/**
 * Reads a line of text from standard input and returns it as an
 * int in [-2^31, 2^31 - 1), if possible; if text does not represent
 * such an int or if value would cause underflow or overflow, user is
 * prompted to retry. If line can't be read, returns INT_MAX.
 */
int get_int(void);
int (*GetInt)(void) __attribute__((deprecated));

/**
 * Reads a line of text from standard input and returns an equivalent
 * long long in [-2^63, 2^63 - 1), if possible; if text does not
 * represent such a long long or if value would cause underflow or overflow,
 * user is prompted to retry. If line can't be read, returns LLONG_MAX.
 */
long long get_long_long(void);
long long (*GetLongLong)(void) __attribute__((deprecated));

/**
 * Reads a line of text from standard input and returns it as a
 * string (char *), sans trailing newline character. (Ergo, if
 * user inputs only "\n", returns "" not NULL.) Returns NULL
 * upon error or no input whatsoever (i.e., just EOF). Stores
 * string on heap (via malloc); memory must be freed by caller
 * to avoid leak.
 */
string get_string(void);
string (*GetString)(void) __attribute__((deprecated));

#endif
