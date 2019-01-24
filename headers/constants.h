/*
 * constants.h
 *
 * Licensed under MIT license
 *
 */

#ifndef CONSTANTS_H
#define CONSTANTS_H

#define C_MAXTIME 2.62800288E8 /* Stop simulation at ~1 month */

#define C_GRAV_DEFAULT (double)6.67E-11
#define C_ELEC_DEFAULT (double)8.99E+09
#define C_TIME_DEFAULT (double)1E0      /* nms sampling interval */
#define C_SIZE_DEFAULT 1         /* 1m cube */

#define C_PART_NB 2      /* 1024 particles can exist at most */
#define C_MASS_PROT
#define C_MASS_NEUT
#define C_MASS_ELEC

#endif
