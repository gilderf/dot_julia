/* SPARC v7 gmp-mparam.h -- Compiler/machine parameter header file.

Copyright 1991, 1993, 1994, 1999, 2000, 2001, 2002 Free Software Foundation,
Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation; either version 2.1 of the License, or (at your
option) any later version.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
License for more details.

You should have received a copy of the GNU Lesser General Public License
along with the GNU MP Library; see the file COPYING.LIB.  If not, write to
the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
MA 02110-1301, USA. */

/* Generated by tuneup.c, 2002-03-13, gcc 2.95, Weitek 8701 */

#define MUL_KARATSUBA_THRESHOLD           8
#define MUL_TOOM3_THRESHOLD             466

#define SQR_BASECASE_THRESHOLD            4
#define SQR_KARATSUBA_THRESHOLD          16
#define SQR_TOOM3_THRESHOLD             258

#define POWM_THRESHOLD                   28

#define JACOBI_BASE_METHOD                2

#define DIVREM_1_NORM_THRESHOLD           3
#define DIVREM_1_UNNORM_THRESHOLD         4
#define MOD_1_NORM_THRESHOLD              3
#define MOD_1_UNNORM_THRESHOLD            4
#define USE_PREINV_DIVREM_1               1
#define USE_PREINV_MOD_1                  1
#define DIVREM_2_THRESHOLD                0  /* always */
#define DIVEXACT_1_THRESHOLD            120
#define MODEXACT_1_ODD_THRESHOLD      MP_SIZE_T_MAX  /* never */

#define GET_STR_DC_THRESHOLD             21
#define GET_STR_PRECOMPUTE_THRESHOLD     25

#define MUL_FFT_FULL_THRESHOLD              2304

#define SQR_FFT_FULL_THRESHOLD              2304

/* fft_tuning -- autogenerated by tune-fft */

#define FFT_TAB \
   { { 4, 3 }, { 3, 2 }, { 2, 1 }, { 2, 1 }, { 1, 0 } }

#define MULMOD_TAB \
   { 4, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 1, 1 }

#define FFT_N_NUM 15

#define FFT_MULMOD_2EXPP1_CUTOFF 128

