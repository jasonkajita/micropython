/*
 * This file is part of the Micro Python project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2013, 2014 Damien P. George
 * Copyright (c) 2015 Daniel Campora
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef MODUOS_H_
#define MODUOS_H_

typedef struct {
    uint16_t    tm_year;    // i.e. 2014
    uint8_t     tm_mon;     // 1..12
    uint8_t     tm_mday;    // 1..31
    uint8_t     tm_hour;    // 0..23
    uint8_t     tm_min;     // 0..59
    uint8_t     tm_sec;     // 0..59
    uint8_t     tm_wday;    // 0..6  0 = Monday
    uint16_t    tm_yday;    // 1..366
} mod_struct_time;


extern mp_uint_t mod_time_seconds_since_2000(mp_uint_t year, mp_uint_t month, mp_uint_t date,
                                             mp_uint_t hour, mp_uint_t minute, mp_uint_t second);

extern void mod_time_seconds_since_2000_to_struct_time(mp_uint_t t, mod_struct_time *tm);

#endif // MODUOS_H_
