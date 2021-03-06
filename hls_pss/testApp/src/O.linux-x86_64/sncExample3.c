/* C code for program sncExample3, generated by snc from ../sncExample3.stt */
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include <limits.h>

#include "seq_snc.h"

/* Variable declarations */
struct seqg_vars {
# line 5 "../sncExample3.stt"
	int i;
# line 5 "../sncExample3.stt"
	int j;
# line 5 "../sncExample3.stt"
	int k;
# line 5 "../sncExample3.stt"
	int n;
# line 7 "../sncExample3.stt"
	int linac_count;
# line 8 "../sncExample3.stt"
	int ringhall_count;
# line 9 "../sncExample3.stt"
	int ringcenter_count;
# line 20 "../sncExample3.stt"
	epicsInt32 linac_cardID_inner[4];
# line 26 "../sncExample3.stt"
	epicsInt32 linac_cardID_outer[4];
# line 35 "../sncExample3.stt"
	epicsInt32 ring_cardID_inner[10];
# line 47 "../sncExample3.stt"
	epicsInt32 ring_cardID_outer[10];
# line 62 "../sncExample3.stt"
	epicsInt32 linac_swipetime_inner[4];
# line 68 "../sncExample3.stt"
	epicsInt32 linac_swipetime_outer[4];
# line 77 "../sncExample3.stt"
	epicsInt32 linac_swipetime_inner_temp[4];
# line 78 "../sncExample3.stt"
	epicsInt32 linac_swipetime_outer_temp[4];
# line 81 "../sncExample3.stt"
	epicsInt32 ring_swipetime_inner[10];
# line 93 "../sncExample3.stt"
	epicsInt32 ring_swipetime_outer[10];
# line 108 "../sncExample3.stt"
	epicsInt32 ring_swipetime_inner_temp[10];
# line 109 "../sncExample3.stt"
	epicsInt32 ring_swipetime_outer_temp[10];
# line 112 "../sncExample3.stt"
	epicsInt32 ring_door_accesspermitted[10];
# line 124 "../sncExample3.stt"
	epicsInt32 linac_door_accesspermitted[4];
# line 133 "../sncExample3.stt"
	epicsInt32 ring_door_accessrefused[10];
# line 145 "../sncExample3.stt"
	epicsInt32 linac_door_accessrefused[4];
# line 157 "../sncExample3.stt"
	epicsInt32 linac_door_inner_event[4][3];
# line 163 "../sncExample3.stt"
	epicsInt32 linac_door_outer_event[4][3];
# line 173 "../sncExample3.stt"
	epicsInt32 ring_door_inner_event[10][3];
# line 185 "../sncExample3.stt"
	epicsInt32 ring_door_outer_event[10][3];
};


/* Function declarations */

#define seqg_var (*(struct seqg_vars *const *)seqg_env)

/* Program init func */
static void seqg_init(PROG_ID seqg_env)
{
	{
# line 77 "../sncExample3.stt"
	static epicsInt32 seqg_initvar_linac_swipetime_inner_temp[4] = {0, 0, 0, 0};
	memcpy(&seqg_var->linac_swipetime_inner_temp, &seqg_initvar_linac_swipetime_inner_temp, sizeof(seqg_initvar_linac_swipetime_inner_temp));
	}
	{
# line 78 "../sncExample3.stt"
	static epicsInt32 seqg_initvar_linac_swipetime_outer_temp[4] = {0, 0, 0, 0};
	memcpy(&seqg_var->linac_swipetime_outer_temp, &seqg_initvar_linac_swipetime_outer_temp, sizeof(seqg_initvar_linac_swipetime_outer_temp));
	}
	{
# line 108 "../sncExample3.stt"
	static epicsInt32 seqg_initvar_ring_swipetime_inner_temp[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	memcpy(&seqg_var->ring_swipetime_inner_temp, &seqg_initvar_ring_swipetime_inner_temp, sizeof(seqg_initvar_ring_swipetime_inner_temp));
	}
	{
# line 109 "../sncExample3.stt"
	static epicsInt32 seqg_initvar_ring_swipetime_outer_temp[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	memcpy(&seqg_var->ring_swipetime_outer_temp, &seqg_initvar_ring_swipetime_outer_temp, sizeof(seqg_initvar_ring_swipetime_outer_temp));
	}
}

/****** Code for state "init" in state set "PersonnelManage" ******/

/* Event function for state "init" in state set "PersonnelManage" */
static seqBool seqg_event_PersonnelManage_0_init(SS_ID seqg_env, int *seqg_ptrn, int *seqg_pnst)
{
# line 203 "../sncExample3.stt"
	if (seq_delay(seqg_env, 1))
	{
		*seqg_pnst = 1;
		*seqg_ptrn = 0;
		return TRUE;
	}
	return FALSE;
}

/* Action function for state "init" in state set "PersonnelManage" */
static void seqg_action_PersonnelManage_0_init(SS_ID seqg_env, int seqg_trn, int *seqg_pnst)
{
	switch(seqg_trn)
	{
	case 0:
		{
# line 204 "../sncExample3.stt"
			printf("\n\nSNL Init Start.\n\n\n\n");
# line 206 "../sncExample3.stt"
			seqg_var->linac_count = 0;
# line 207 "../sncExample3.stt"
			seqg_var->ringhall_count = 0;
# line 208 "../sncExample3.stt"
			seqg_var->ringcenter_count = 0;
# line 212 "../sncExample3.stt"
			for (seqg_var->i = 0; seqg_var->i <= 3; seqg_var->i++)
			{
# line 213 "../sncExample3.stt"
				for (seqg_var->n = 0; seqg_var->n <= 2; seqg_var->n++)
				{
# line 214 "../sncExample3.stt"
					seqg_var->linac_door_inner_event[seqg_var->i][seqg_var->n] = 0;
# line 215 "../sncExample3.stt"
					seqg_var->linac_door_outer_event[seqg_var->i][seqg_var->n] = 0;
				}
# line 218 "../sncExample3.stt"
				seqg_var->linac_swipetime_outer_temp[seqg_var->i] = seqg_var->linac_swipetime_outer[seqg_var->i];
# line 219 "../sncExample3.stt"
				seqg_var->linac_swipetime_inner_temp[seqg_var->i] = seqg_var->linac_swipetime_inner[seqg_var->i];
# line 221 "../sncExample3.stt"
				seq_pvPutTmo(seqg_env, 87/*linac_door_inner_event*/ + (CH_ID)(seqg_var->i), DEFAULT, DEFAULT_TIMEOUT);
# line 222 "../sncExample3.stt"
				seq_pvPutTmo(seqg_env, 91/*linac_door_outer_event*/ + (CH_ID)(seqg_var->i), DEFAULT, DEFAULT_TIMEOUT);
			}
# line 225 "../sncExample3.stt"
			for (seqg_var->j = 0; seqg_var->j <= 9; seqg_var->j++)
			{
# line 226 "../sncExample3.stt"
				for (seqg_var->n = 0; seqg_var->n <= 2; seqg_var->n++)
				{
# line 227 "../sncExample3.stt"
					seqg_var->ring_door_inner_event[seqg_var->j][seqg_var->n] = 0;
# line 228 "../sncExample3.stt"
					seqg_var->ring_door_outer_event[seqg_var->j][seqg_var->n] = 0;
				}
# line 230 "../sncExample3.stt"
				seqg_var->ring_swipetime_outer_temp[seqg_var->j] = seqg_var->ring_swipetime_outer[seqg_var->j];
# line 231 "../sncExample3.stt"
				seqg_var->ring_swipetime_inner_temp[seqg_var->j] = seqg_var->ring_swipetime_inner[seqg_var->j];
# line 233 "../sncExample3.stt"
				seq_pvPutTmo(seqg_env, 95/*ring_door_inner_event*/ + (CH_ID)(seqg_var->j), DEFAULT, DEFAULT_TIMEOUT);
# line 234 "../sncExample3.stt"
				seq_pvPutTmo(seqg_env, 105/*ring_door_outer_event*/ + (CH_ID)(seqg_var->j), DEFAULT, DEFAULT_TIMEOUT);
			}
# line 237 "../sncExample3.stt"
			printf("linac_count is %d.\n", seqg_var->linac_count);
# line 238 "../sncExample3.stt"
			printf("ringhall_count is %d.\n", seqg_var->ringhall_count);
# line 239 "../sncExample3.stt"
			printf("ringcenter_count is %d.\n", seqg_var->ringcenter_count);
		}
		return;
	}
}

/****** Code for state "count" in state set "PersonnelManage" ******/

/* Event function for state "count" in state set "PersonnelManage" */
static seqBool seqg_event_PersonnelManage_0_count(SS_ID seqg_env, int *seqg_ptrn, int *seqg_pnst)
{
# line 245 "../sncExample3.stt"
	if (seq_delay(seqg_env, 0.1))
	{
		*seqg_pnst = 1;
		*seqg_ptrn = 0;
		return TRUE;
	}
	return FALSE;
}

/* Action function for state "count" in state set "PersonnelManage" */
static void seqg_action_PersonnelManage_0_count(SS_ID seqg_env, int seqg_trn, int *seqg_pnst)
{
	switch(seqg_trn)
	{
	case 0:
		{
# line 247 "../sncExample3.stt"
			for (seqg_var->i = 0; seqg_var->i <= 1; seqg_var->i++)
			{
# line 249 "../sncExample3.stt"
				if (seqg_var->linac_swipetime_outer[seqg_var->i] != seqg_var->linac_swipetime_outer_temp[seqg_var->i])
				{
# line 250 "../sncExample3.stt"
					seqg_var->linac_door_outer_event[seqg_var->i][0]++;
# line 251 "../sncExample3.stt"
					seqg_var->linac_door_outer_event[seqg_var->i][1] = seqg_var->linac_cardID_outer[seqg_var->i];
# line 253 "../sncExample3.stt"
					seqg_var->linac_swipetime_outer_temp[seqg_var->i] = seqg_var->linac_swipetime_outer[seqg_var->i];
# line 255 "../sncExample3.stt"
					printf("linac_swipetime_outer[%d] is %x.\n", seqg_var->i, seqg_var->linac_swipetime_outer[seqg_var->i]);
# line 257 "../sncExample3.stt"
					if (seqg_var->linac_door_accesspermitted[seqg_var->i] == 1)
					{
# line 258 "../sncExample3.stt"
						seqg_var->linac_count++;
# line 259 "../sncExample3.stt"
						seqg_var->linac_door_outer_event[seqg_var->i][2] = 1;
# line 261 "../sncExample3.stt"
						seq_pvPutTmo(seqg_env, 0/*linac_count*/, DEFAULT, DEFAULT_TIMEOUT);
					}
					else
# line 263 "../sncExample3.stt"
						if (seqg_var->linac_door_accessrefused[seqg_var->i] == 1)
						{
# line 264 "../sncExample3.stt"
							seqg_var->linac_door_outer_event[seqg_var->i][2] = 0;
						}
# line 267 "../sncExample3.stt"
					seq_pvPutTmo(seqg_env, 91/*linac_door_outer_event*/ + (CH_ID)(seqg_var->i), DEFAULT, DEFAULT_TIMEOUT);
				}
# line 271 "../sncExample3.stt"
				if (seqg_var->linac_swipetime_inner[seqg_var->i] != seqg_var->linac_swipetime_inner_temp[seqg_var->i])
				{
# line 272 "../sncExample3.stt"
					seqg_var->linac_door_inner_event[seqg_var->i][0]++;
# line 273 "../sncExample3.stt"
					seqg_var->linac_door_inner_event[seqg_var->i][1] = seqg_var->linac_cardID_inner[seqg_var->i];
# line 275 "../sncExample3.stt"
					seqg_var->linac_swipetime_inner_temp[seqg_var->i] = seqg_var->linac_swipetime_inner[seqg_var->i];
# line 277 "../sncExample3.stt"
					if (seqg_var->linac_door_accesspermitted[seqg_var->i] == 1)
					{
# line 278 "../sncExample3.stt"
						seqg_var->linac_count--;
# line 279 "../sncExample3.stt"
						seqg_var->linac_door_inner_event[seqg_var->i][2] = 1;
# line 281 "../sncExample3.stt"
						seq_pvPutTmo(seqg_env, 0/*linac_count*/, DEFAULT, DEFAULT_TIMEOUT);
					}
					else
# line 282 "../sncExample3.stt"
						if (seqg_var->linac_door_accessrefused[seqg_var->i] == 1)
						{
# line 283 "../sncExample3.stt"
							seqg_var->linac_door_inner_event[seqg_var->i][2] = 0;
						}
# line 286 "../sncExample3.stt"
					seq_pvPutTmo(seqg_env, 87/*linac_door_inner_event*/ + (CH_ID)(seqg_var->i), DEFAULT, DEFAULT_TIMEOUT);
				}
			}
# line 291 "../sncExample3.stt"
			for (seqg_var->i = 2; seqg_var->i <= 3; seqg_var->i++)
			{
# line 293 "../sncExample3.stt"
				if (seqg_var->linac_swipetime_outer[seqg_var->i] != seqg_var->linac_swipetime_outer_temp[seqg_var->i])
				{
# line 294 "../sncExample3.stt"
					seqg_var->linac_door_outer_event[seqg_var->i][0]++;
# line 295 "../sncExample3.stt"
					seqg_var->linac_door_outer_event[seqg_var->i][1] = seqg_var->linac_cardID_outer[seqg_var->i];
# line 297 "../sncExample3.stt"
					seqg_var->linac_swipetime_outer_temp[seqg_var->i] = seqg_var->linac_swipetime_outer[seqg_var->i];
# line 299 "../sncExample3.stt"
					if (seqg_var->linac_door_accesspermitted[seqg_var->i] == 1)
					{
# line 300 "../sncExample3.stt"
						seqg_var->linac_door_outer_event[seqg_var->i][2] = 1;
# line 302 "../sncExample3.stt"
						seq_pvPutTmo(seqg_env, 0/*linac_count*/, DEFAULT, DEFAULT_TIMEOUT);
					}
					else
# line 304 "../sncExample3.stt"
						if (seqg_var->linac_door_accessrefused[seqg_var->i] == 1)
						{
# line 305 "../sncExample3.stt"
							seqg_var->linac_door_outer_event[seqg_var->i][2] = 0;
						}
# line 308 "../sncExample3.stt"
					seq_pvPutTmo(seqg_env, 91/*linac_door_outer_event*/ + (CH_ID)(seqg_var->i), DEFAULT, DEFAULT_TIMEOUT);
				}
# line 312 "../sncExample3.stt"
				if (seqg_var->linac_swipetime_inner[seqg_var->i] != seqg_var->linac_swipetime_inner_temp[seqg_var->i])
				{
# line 313 "../sncExample3.stt"
					seqg_var->linac_door_inner_event[seqg_var->i][0]++;
# line 314 "../sncExample3.stt"
					seqg_var->linac_door_inner_event[seqg_var->i][1] = seqg_var->linac_cardID_inner[seqg_var->i];
# line 316 "../sncExample3.stt"
					seqg_var->linac_swipetime_inner_temp[seqg_var->i] = seqg_var->linac_swipetime_inner[seqg_var->i];
# line 318 "../sncExample3.stt"
					if (seqg_var->linac_door_accesspermitted[seqg_var->i] == 1)
					{
# line 319 "../sncExample3.stt"
						seqg_var->linac_door_inner_event[seqg_var->i][2] = 1;
# line 321 "../sncExample3.stt"
						seq_pvPutTmo(seqg_env, 0/*linac_count*/, DEFAULT, DEFAULT_TIMEOUT);
					}
					else
# line 323 "../sncExample3.stt"
						if (seqg_var->linac_door_accessrefused[seqg_var->i] == 1)
						{
# line 324 "../sncExample3.stt"
							seqg_var->linac_door_inner_event[seqg_var->i][2] = 0;
						}
# line 327 "../sncExample3.stt"
					seq_pvPutTmo(seqg_env, 87/*linac_door_inner_event*/ + (CH_ID)(seqg_var->i), DEFAULT, DEFAULT_TIMEOUT);
				}
			}
# line 331 "../sncExample3.stt"
			for (seqg_var->j = 0; seqg_var->j <= 6; seqg_var->j++)
			{
# line 333 "../sncExample3.stt"
				if (seqg_var->ring_swipetime_outer[seqg_var->j] != seqg_var->ring_swipetime_outer_temp[seqg_var->j])
				{
# line 334 "../sncExample3.stt"
					seqg_var->ring_door_outer_event[seqg_var->j][0]++;
# line 335 "../sncExample3.stt"
					seqg_var->ring_door_outer_event[seqg_var->j][1] = seqg_var->ring_cardID_outer[seqg_var->j];
# line 337 "../sncExample3.stt"
					seqg_var->ring_swipetime_outer_temp[seqg_var->j] = seqg_var->ring_swipetime_outer[seqg_var->j];
# line 339 "../sncExample3.stt"
					if (seqg_var->ring_door_accesspermitted[seqg_var->j] == 1)
					{
# line 340 "../sncExample3.stt"
						seqg_var->ringhall_count++;
# line 341 "../sncExample3.stt"
						seqg_var->ring_door_outer_event[seqg_var->j][2] = 1;
# line 343 "../sncExample3.stt"
						seq_pvPutTmo(seqg_env, 1/*ringhall_count*/, DEFAULT, DEFAULT_TIMEOUT);
					}
					else
# line 345 "../sncExample3.stt"
						if (seqg_var->ring_door_accessrefused[seqg_var->j] == 1)
						{
# line 346 "../sncExample3.stt"
							seqg_var->ring_door_outer_event[seqg_var->j][2] = 0;
						}
# line 349 "../sncExample3.stt"
					seq_pvPutTmo(seqg_env, 105/*ring_door_outer_event*/ + (CH_ID)(seqg_var->j), DEFAULT, DEFAULT_TIMEOUT);
				}
# line 353 "../sncExample3.stt"
				if (seqg_var->ring_swipetime_inner[seqg_var->j] != seqg_var->ring_swipetime_inner_temp[seqg_var->j])
				{
# line 354 "../sncExample3.stt"
					seqg_var->ring_door_inner_event[seqg_var->j][0]++;
# line 355 "../sncExample3.stt"
					seqg_var->ring_door_inner_event[seqg_var->j][1] = seqg_var->ring_cardID_inner[seqg_var->j];
# line 357 "../sncExample3.stt"
					seqg_var->ring_swipetime_inner_temp[seqg_var->j] = seqg_var->ring_swipetime_inner[seqg_var->j];
# line 359 "../sncExample3.stt"
					if (seqg_var->ring_door_accesspermitted[seqg_var->j] == 1)
					{
# line 360 "../sncExample3.stt"
						seqg_var->ringhall_count--;
# line 361 "../sncExample3.stt"
						seqg_var->ring_door_inner_event[seqg_var->j][2] = 1;
# line 363 "../sncExample3.stt"
						seq_pvPutTmo(seqg_env, 1/*ringhall_count*/, DEFAULT, DEFAULT_TIMEOUT);
					}
					else
# line 366 "../sncExample3.stt"
						if (seqg_var->ring_door_accessrefused[seqg_var->j] == 1)
						{
# line 367 "../sncExample3.stt"
							seqg_var->ring_door_inner_event[seqg_var->j][2] = 0;
						}
# line 370 "../sncExample3.stt"
					seq_pvPutTmo(seqg_env, 95/*ring_door_inner_event*/ + (CH_ID)(seqg_var->j), DEFAULT, DEFAULT_TIMEOUT);
				}
			}
# line 375 "../sncExample3.stt"
			for (seqg_var->k = 7; seqg_var->k <= 9; seqg_var->k++)
			{
# line 377 "../sncExample3.stt"
				if (seqg_var->ring_swipetime_outer[seqg_var->k] != seqg_var->ring_swipetime_outer_temp[seqg_var->k])
				{
# line 378 "../sncExample3.stt"
					seqg_var->ring_door_outer_event[seqg_var->k][0]++;
# line 379 "../sncExample3.stt"
					seqg_var->ring_door_outer_event[seqg_var->k][1] = seqg_var->ring_cardID_outer[seqg_var->k];
# line 381 "../sncExample3.stt"
					seqg_var->ring_swipetime_outer_temp[seqg_var->k] = seqg_var->ring_swipetime_outer[seqg_var->k];
# line 384 "../sncExample3.stt"
					if (seqg_var->ring_door_accesspermitted[seqg_var->k] == 1)
					{
# line 385 "../sncExample3.stt"
						seqg_var->ringhall_count--;
# line 386 "../sncExample3.stt"
						seqg_var->ringcenter_count++;
# line 388 "../sncExample3.stt"
						seqg_var->ring_door_outer_event[seqg_var->k][2] = 1;
# line 390 "../sncExample3.stt"
						seq_pvPutTmo(seqg_env, 1/*ringhall_count*/, DEFAULT, DEFAULT_TIMEOUT);
# line 391 "../sncExample3.stt"
						seq_pvPutTmo(seqg_env, 2/*ringcenter_count*/, DEFAULT, DEFAULT_TIMEOUT);
					}
					else
# line 393 "../sncExample3.stt"
						if (seqg_var->ring_door_accessrefused[seqg_var->k] == 1)
						{
# line 394 "../sncExample3.stt"
							seqg_var->ring_door_outer_event[seqg_var->k][2] = 0;
						}
# line 397 "../sncExample3.stt"
					seq_pvPutTmo(seqg_env, 105/*ring_door_outer_event*/ + (CH_ID)(seqg_var->k), DEFAULT, DEFAULT_TIMEOUT);
				}
# line 403 "../sncExample3.stt"
				if (seqg_var->ring_swipetime_inner[seqg_var->k] != seqg_var->ring_swipetime_inner_temp[seqg_var->k])
				{
# line 404 "../sncExample3.stt"
					seqg_var->ring_door_inner_event[seqg_var->k][0]++;
# line 405 "../sncExample3.stt"
					seqg_var->ring_door_inner_event[seqg_var->k][1] = seqg_var->ring_cardID_inner[seqg_var->k];
# line 407 "../sncExample3.stt"
					seqg_var->ring_swipetime_inner_temp[seqg_var->k] = seqg_var->ring_swipetime_inner[seqg_var->k];
# line 409 "../sncExample3.stt"
					if (seqg_var->ring_door_accesspermitted[seqg_var->k] == 1)
					{
# line 410 "../sncExample3.stt"
						seqg_var->ringhall_count++;
# line 411 "../sncExample3.stt"
						seqg_var->ringcenter_count--;
# line 413 "../sncExample3.stt"
						seqg_var->ring_door_inner_event[seqg_var->k][2] = 1;
# line 415 "../sncExample3.stt"
						seq_pvPutTmo(seqg_env, 1/*ringhall_count*/, DEFAULT, DEFAULT_TIMEOUT);
# line 416 "../sncExample3.stt"
						seq_pvPutTmo(seqg_env, 2/*ringcenter_count*/, DEFAULT, DEFAULT_TIMEOUT);
					}
					else
# line 418 "../sncExample3.stt"
						if (seqg_var->ring_door_accessrefused[seqg_var->k] == 1)
						{
# line 419 "../sncExample3.stt"
							seqg_var->ring_door_inner_event[seqg_var->k][2] = 0;
						}
# line 422 "../sncExample3.stt"
					seq_pvPutTmo(seqg_env, 95/*ring_door_inner_event*/ + (CH_ID)(seqg_var->k), DEFAULT, DEFAULT_TIMEOUT);
				}
			}
		}
		return;
	}
}

#undef seqg_var

/************************ Tables ************************/

/* Channel table */
static seqChan seqg_chans[] = {
	/* chName, offset, varName, varType, count, eventNum, efId, monitored, queueSize, queueIndex */
	{"HLS:PSS:Linac:PersonnelCount:longin", offsetof(struct seqg_vars, linac_count), "linac_count", P_INT, 1, 1, 0, 1, 0, 0},
	{"HLS:PSS:Ringhall:PersonnelCount:longin", offsetof(struct seqg_vars, ringhall_count), "ringhall_count", P_INT, 1, 2, 0, 1, 0, 0},
	{"HLS:PSS:Ringcenter:PersonnelCount:longin", offsetof(struct seqg_vars, ringcenter_count), "ringcenter_count", P_INT, 1, 3, 0, 1, 0, 0},
	{"HLS:PSS:Door10:InnerCardReader:CardID:longin", offsetof(struct seqg_vars, linac_cardID_inner[0]), "linac_cardID_inner[0]", P_INT32T, 1, 4, 0, 1, 0, 0},
	{"HLS:PSS:Door11:InnerCardReader:CardID:longin", offsetof(struct seqg_vars, linac_cardID_inner[1]), "linac_cardID_inner[1]", P_INT32T, 1, 5, 0, 1, 0, 0},
	{"HLS:PSS:Door13:InnerCardReader:CardID:longin", offsetof(struct seqg_vars, linac_cardID_inner[2]), "linac_cardID_inner[2]", P_INT32T, 1, 6, 0, 1, 0, 0},
	{"HLS:PSS:Door14:InnerCardReader:CardID:longin", offsetof(struct seqg_vars, linac_cardID_inner[3]), "linac_cardID_inner[3]", P_INT32T, 1, 7, 0, 1, 0, 0},
	{"HLS:PSS:Door10:OuterCardReader:CardID:longin", offsetof(struct seqg_vars, linac_cardID_outer[0]), "linac_cardID_outer[0]", P_INT32T, 1, 8, 0, 1, 0, 0},
	{"HLS:PSS:Door11:OuterCardReader:CardID:longin", offsetof(struct seqg_vars, linac_cardID_outer[1]), "linac_cardID_outer[1]", P_INT32T, 1, 9, 0, 1, 0, 0},
	{"HLS:PSS:Door13:OuterCardReader:CardID:longin", offsetof(struct seqg_vars, linac_cardID_outer[2]), "linac_cardID_outer[2]", P_INT32T, 1, 10, 0, 1, 0, 0},
	{"HLS:PSS:Door14:OuterCardReader:CardID:longin", offsetof(struct seqg_vars, linac_cardID_outer[3]), "linac_cardID_outer[3]", P_INT32T, 1, 11, 0, 1, 0, 0},
	{"HLS:PSS:Door01:InnerCardReader:CardID:longin", offsetof(struct seqg_vars, ring_cardID_inner[0]), "ring_cardID_inner[0]", P_INT32T, 1, 12, 0, 1, 0, 0},
	{"HLS:PSS:Door02:InnerCardReader:CardID:longin", offsetof(struct seqg_vars, ring_cardID_inner[1]), "ring_cardID_inner[1]", P_INT32T, 1, 13, 0, 1, 0, 0},
	{"HLS:PSS:Door03:InnerCardReader:CardID:longin", offsetof(struct seqg_vars, ring_cardID_inner[2]), "ring_cardID_inner[2]", P_INT32T, 1, 14, 0, 1, 0, 0},
	{"HLS:PSS:Door04:InnerCardReader:CardID:longin", offsetof(struct seqg_vars, ring_cardID_inner[3]), "ring_cardID_inner[3]", P_INT32T, 1, 15, 0, 1, 0, 0},
	{"HLS:PSS:Door05:InnerCardReader:CardID:longin", offsetof(struct seqg_vars, ring_cardID_inner[4]), "ring_cardID_inner[4]", P_INT32T, 1, 16, 0, 1, 0, 0},
	{"HLS:PSS:Door06:InnerCardReader:CardID:longin", offsetof(struct seqg_vars, ring_cardID_inner[5]), "ring_cardID_inner[5]", P_INT32T, 1, 17, 0, 1, 0, 0},
	{"HLS:PSS:Door07:InnerCardReader:CardID:longin", offsetof(struct seqg_vars, ring_cardID_inner[6]), "ring_cardID_inner[6]", P_INT32T, 1, 18, 0, 1, 0, 0},
	{"HLS:PSS:Door08:InnerCardReader:CardID:longin", offsetof(struct seqg_vars, ring_cardID_inner[7]), "ring_cardID_inner[7]", P_INT32T, 1, 19, 0, 1, 0, 0},
	{"HLS:PSS:Door09:InnerCardReader:CardID:longin", offsetof(struct seqg_vars, ring_cardID_inner[8]), "ring_cardID_inner[8]", P_INT32T, 1, 20, 0, 1, 0, 0},
	{"HLS:PSS:Door12:InnerCardReader:CardID:longin", offsetof(struct seqg_vars, ring_cardID_inner[9]), "ring_cardID_inner[9]", P_INT32T, 1, 21, 0, 1, 0, 0},
	{"HLS:PSS:Door01:OuterCardReader:CardID:longin", offsetof(struct seqg_vars, ring_cardID_outer[0]), "ring_cardID_outer[0]", P_INT32T, 1, 22, 0, 1, 0, 0},
	{"HLS:PSS:Door02:OuterCardReader:CardID:longin", offsetof(struct seqg_vars, ring_cardID_outer[1]), "ring_cardID_outer[1]", P_INT32T, 1, 23, 0, 1, 0, 0},
	{"HLS:PSS:Door03:OuterCardReader:CardID:longin", offsetof(struct seqg_vars, ring_cardID_outer[2]), "ring_cardID_outer[2]", P_INT32T, 1, 24, 0, 1, 0, 0},
	{"HLS:PSS:Door04:OuterCardReader:CardID:longin", offsetof(struct seqg_vars, ring_cardID_outer[3]), "ring_cardID_outer[3]", P_INT32T, 1, 25, 0, 1, 0, 0},
	{"HLS:PSS:Door05:OuterCardReader:CardID:longin", offsetof(struct seqg_vars, ring_cardID_outer[4]), "ring_cardID_outer[4]", P_INT32T, 1, 26, 0, 1, 0, 0},
	{"HLS:PSS:Door06:OuterCardReader:CardID:longin", offsetof(struct seqg_vars, ring_cardID_outer[5]), "ring_cardID_outer[5]", P_INT32T, 1, 27, 0, 1, 0, 0},
	{"HLS:PSS:Door07:OuterCardReader:CardID:longin", offsetof(struct seqg_vars, ring_cardID_outer[6]), "ring_cardID_outer[6]", P_INT32T, 1, 28, 0, 1, 0, 0},
	{"HLS:PSS:Door08:OuterCardReader:CardID:longin", offsetof(struct seqg_vars, ring_cardID_outer[7]), "ring_cardID_outer[7]", P_INT32T, 1, 29, 0, 1, 0, 0},
	{"HLS:PSS:Door09:OuterCardReader:CardID:longin", offsetof(struct seqg_vars, ring_cardID_outer[8]), "ring_cardID_outer[8]", P_INT32T, 1, 30, 0, 1, 0, 0},
	{"HLS:PSS:Door12:OuterCardReader:CardID:longin", offsetof(struct seqg_vars, ring_cardID_outer[9]), "ring_cardID_outer[9]", P_INT32T, 1, 31, 0, 1, 0, 0},
	{"HLS:PSS:Door10:InnerCardReader:SwipeTime:longin", offsetof(struct seqg_vars, linac_swipetime_inner[0]), "linac_swipetime_inner[0]", P_INT32T, 1, 32, 0, 1, 0, 0},
	{"HLS:PSS:Door11:InnerCardReader:SwipeTime:longin", offsetof(struct seqg_vars, linac_swipetime_inner[1]), "linac_swipetime_inner[1]", P_INT32T, 1, 33, 0, 1, 0, 0},
	{"HLS:PSS:Door13:InnerCardReader:SwipeTime:longin", offsetof(struct seqg_vars, linac_swipetime_inner[2]), "linac_swipetime_inner[2]", P_INT32T, 1, 34, 0, 1, 0, 0},
	{"HLS:PSS:Door14:InnerCardReader:SwipeTime:longin", offsetof(struct seqg_vars, linac_swipetime_inner[3]), "linac_swipetime_inner[3]", P_INT32T, 1, 35, 0, 1, 0, 0},
	{"HLS:PSS:Door10:OuterCardReader:SwipeTime:longin", offsetof(struct seqg_vars, linac_swipetime_outer[0]), "linac_swipetime_outer[0]", P_INT32T, 1, 36, 0, 1, 0, 0},
	{"HLS:PSS:Door11:OuterCardReader:SwipeTime:longin", offsetof(struct seqg_vars, linac_swipetime_outer[1]), "linac_swipetime_outer[1]", P_INT32T, 1, 37, 0, 1, 0, 0},
	{"HLS:PSS:Door13:OuterCardReader:SwipeTime:longin", offsetof(struct seqg_vars, linac_swipetime_outer[2]), "linac_swipetime_outer[2]", P_INT32T, 1, 38, 0, 1, 0, 0},
	{"HLS:PSS:Door14:OuterCardReader:SwipeTime:longin", offsetof(struct seqg_vars, linac_swipetime_outer[3]), "linac_swipetime_outer[3]", P_INT32T, 1, 39, 0, 1, 0, 0},
	{"HLS:PSS:Door01:InnerCardReader:SwipeTime:longin", offsetof(struct seqg_vars, ring_swipetime_inner[0]), "ring_swipetime_inner[0]", P_INT32T, 1, 40, 0, 1, 0, 0},
	{"HLS:PSS:Door02:InnerCardReader:SwipeTime:longin", offsetof(struct seqg_vars, ring_swipetime_inner[1]), "ring_swipetime_inner[1]", P_INT32T, 1, 41, 0, 1, 0, 0},
	{"HLS:PSS:Door03:InnerCardReader:SwipeTime:longin", offsetof(struct seqg_vars, ring_swipetime_inner[2]), "ring_swipetime_inner[2]", P_INT32T, 1, 42, 0, 1, 0, 0},
	{"HLS:PSS:Door04:InnerCardReader:SwipeTime:longin", offsetof(struct seqg_vars, ring_swipetime_inner[3]), "ring_swipetime_inner[3]", P_INT32T, 1, 43, 0, 1, 0, 0},
	{"HLS:PSS:Door05:InnerCardReader:SwipeTime:longin", offsetof(struct seqg_vars, ring_swipetime_inner[4]), "ring_swipetime_inner[4]", P_INT32T, 1, 44, 0, 1, 0, 0},
	{"HLS:PSS:Door06:InnerCardReader:SwipeTime:longin", offsetof(struct seqg_vars, ring_swipetime_inner[5]), "ring_swipetime_inner[5]", P_INT32T, 1, 45, 0, 1, 0, 0},
	{"HLS:PSS:Door07:InnerCardReader:SwipeTime:longin", offsetof(struct seqg_vars, ring_swipetime_inner[6]), "ring_swipetime_inner[6]", P_INT32T, 1, 46, 0, 1, 0, 0},
	{"HLS:PSS:Door08:InnerCardReader:SwipeTime:longin", offsetof(struct seqg_vars, ring_swipetime_inner[7]), "ring_swipetime_inner[7]", P_INT32T, 1, 47, 0, 1, 0, 0},
	{"HLS:PSS:Door09:InnerCardReader:SwipeTime:longin", offsetof(struct seqg_vars, ring_swipetime_inner[8]), "ring_swipetime_inner[8]", P_INT32T, 1, 48, 0, 1, 0, 0},
	{"HLS:PSS:Door12:InnerCardReader:SwipeTime:longin", offsetof(struct seqg_vars, ring_swipetime_inner[9]), "ring_swipetime_inner[9]", P_INT32T, 1, 49, 0, 1, 0, 0},
	{"HLS:PSS:Door01:OuterCardReader:SwipeTime:longin", offsetof(struct seqg_vars, ring_swipetime_outer[0]), "ring_swipetime_outer[0]", P_INT32T, 1, 50, 0, 1, 0, 0},
	{"HLS:PSS:Door02:OuterCardReader:SwipeTime:longin", offsetof(struct seqg_vars, ring_swipetime_outer[1]), "ring_swipetime_outer[1]", P_INT32T, 1, 51, 0, 1, 0, 0},
	{"HLS:PSS:Door03:OuterCardReader:SwipeTime:longin", offsetof(struct seqg_vars, ring_swipetime_outer[2]), "ring_swipetime_outer[2]", P_INT32T, 1, 52, 0, 1, 0, 0},
	{"HLS:PSS:Door04:OuterCardReader:SwipeTime:longin", offsetof(struct seqg_vars, ring_swipetime_outer[3]), "ring_swipetime_outer[3]", P_INT32T, 1, 53, 0, 1, 0, 0},
	{"HLS:PSS:Door05:OuterCardReader:SwipeTime:longin", offsetof(struct seqg_vars, ring_swipetime_outer[4]), "ring_swipetime_outer[4]", P_INT32T, 1, 54, 0, 1, 0, 0},
	{"HLS:PSS:Door06:OuterCardReader:SwipeTime:longin", offsetof(struct seqg_vars, ring_swipetime_outer[5]), "ring_swipetime_outer[5]", P_INT32T, 1, 55, 0, 1, 0, 0},
	{"HLS:PSS:Door07:OuterCardReader:SwipeTime:longin", offsetof(struct seqg_vars, ring_swipetime_outer[6]), "ring_swipetime_outer[6]", P_INT32T, 1, 56, 0, 1, 0, 0},
	{"HLS:PSS:Door08:OuterCardReader:SwipeTime:longin", offsetof(struct seqg_vars, ring_swipetime_outer[7]), "ring_swipetime_outer[7]", P_INT32T, 1, 57, 0, 1, 0, 0},
	{"HLS:PSS:Door09:OuterCardReader:SwipeTime:longin", offsetof(struct seqg_vars, ring_swipetime_outer[8]), "ring_swipetime_outer[8]", P_INT32T, 1, 58, 0, 1, 0, 0},
	{"HLS:PSS:Door12:OuterCardReader:SwipeTime:longin", offsetof(struct seqg_vars, ring_swipetime_outer[9]), "ring_swipetime_outer[9]", P_INT32T, 1, 59, 0, 1, 0, 0},
	{"HLS:PSS:Door01:AccessPermitted:bi", offsetof(struct seqg_vars, ring_door_accesspermitted[0]), "ring_door_accesspermitted[0]", P_INT32T, 1, 60, 0, 1, 0, 0},
	{"HLS:PSS:Door02:AccessPermitted:bi", offsetof(struct seqg_vars, ring_door_accesspermitted[1]), "ring_door_accesspermitted[1]", P_INT32T, 1, 61, 0, 1, 0, 0},
	{"HLS:PSS:Door03:AccessPermitted:bi", offsetof(struct seqg_vars, ring_door_accesspermitted[2]), "ring_door_accesspermitted[2]", P_INT32T, 1, 62, 0, 1, 0, 0},
	{"HLS:PSS:Door04:AccessPermitted:bi", offsetof(struct seqg_vars, ring_door_accesspermitted[3]), "ring_door_accesspermitted[3]", P_INT32T, 1, 63, 0, 1, 0, 0},
	{"HLS:PSS:Door05:AccessPermitted:bi", offsetof(struct seqg_vars, ring_door_accesspermitted[4]), "ring_door_accesspermitted[4]", P_INT32T, 1, 64, 0, 1, 0, 0},
	{"HLS:PSS:Door06:AccessPermitted:bi", offsetof(struct seqg_vars, ring_door_accesspermitted[5]), "ring_door_accesspermitted[5]", P_INT32T, 1, 65, 0, 1, 0, 0},
	{"HLS:PSS:Door07:AccessPermitted:bi", offsetof(struct seqg_vars, ring_door_accesspermitted[6]), "ring_door_accesspermitted[6]", P_INT32T, 1, 66, 0, 1, 0, 0},
	{"HLS:PSS:Door08:AccessPermitted:bi", offsetof(struct seqg_vars, ring_door_accesspermitted[7]), "ring_door_accesspermitted[7]", P_INT32T, 1, 67, 0, 1, 0, 0},
	{"HLS:PSS:Door09:AccessPermitted:bi", offsetof(struct seqg_vars, ring_door_accesspermitted[8]), "ring_door_accesspermitted[8]", P_INT32T, 1, 68, 0, 1, 0, 0},
	{"HLS:PSS:Door12:AccessPermitted:bi", offsetof(struct seqg_vars, ring_door_accesspermitted[9]), "ring_door_accesspermitted[9]", P_INT32T, 1, 69, 0, 1, 0, 0},
	{"HLS:PSS:Door10:AccessPermitted:bi", offsetof(struct seqg_vars, linac_door_accesspermitted[0]), "linac_door_accesspermitted[0]", P_INT32T, 1, 70, 0, 1, 0, 0},
	{"HLS:PSS:Door11:AccessPermitted:bi", offsetof(struct seqg_vars, linac_door_accesspermitted[1]), "linac_door_accesspermitted[1]", P_INT32T, 1, 71, 0, 1, 0, 0},
	{"HLS:PSS:Door13:AccessPermitted:bi", offsetof(struct seqg_vars, linac_door_accesspermitted[2]), "linac_door_accesspermitted[2]", P_INT32T, 1, 72, 0, 1, 0, 0},
	{"HLS:PSS:Door14:AccessPermitted:bi", offsetof(struct seqg_vars, linac_door_accesspermitted[3]), "linac_door_accesspermitted[3]", P_INT32T, 1, 73, 0, 1, 0, 0},
	{"HLS:PSS:Door01:AccessRefused:bi", offsetof(struct seqg_vars, ring_door_accessrefused[0]), "ring_door_accessrefused[0]", P_INT32T, 1, 74, 0, 1, 0, 0},
	{"HLS:PSS:Door02:AccessRefused:bi", offsetof(struct seqg_vars, ring_door_accessrefused[1]), "ring_door_accessrefused[1]", P_INT32T, 1, 75, 0, 1, 0, 0},
	{"HLS:PSS:Door03:AccessRefused:bi", offsetof(struct seqg_vars, ring_door_accessrefused[2]), "ring_door_accessrefused[2]", P_INT32T, 1, 76, 0, 1, 0, 0},
	{"HLS:PSS:Door04:AccessRefused:bi", offsetof(struct seqg_vars, ring_door_accessrefused[3]), "ring_door_accessrefused[3]", P_INT32T, 1, 77, 0, 1, 0, 0},
	{"HLS:PSS:Door05:AccessRefused:bi", offsetof(struct seqg_vars, ring_door_accessrefused[4]), "ring_door_accessrefused[4]", P_INT32T, 1, 78, 0, 1, 0, 0},
	{"HLS:PSS:Door06:AccessRefused:bi", offsetof(struct seqg_vars, ring_door_accessrefused[5]), "ring_door_accessrefused[5]", P_INT32T, 1, 79, 0, 1, 0, 0},
	{"HLS:PSS:Door07:AccessRefused:bi", offsetof(struct seqg_vars, ring_door_accessrefused[6]), "ring_door_accessrefused[6]", P_INT32T, 1, 80, 0, 1, 0, 0},
	{"HLS:PSS:Door08:AccessRefused:bi", offsetof(struct seqg_vars, ring_door_accessrefused[7]), "ring_door_accessrefused[7]", P_INT32T, 1, 81, 0, 1, 0, 0},
	{"HLS:PSS:Door09:AccessRefused:bi", offsetof(struct seqg_vars, ring_door_accessrefused[8]), "ring_door_accessrefused[8]", P_INT32T, 1, 82, 0, 1, 0, 0},
	{"HLS:PSS:Door12:AccessRefused:bi", offsetof(struct seqg_vars, ring_door_accessrefused[9]), "ring_door_accessrefused[9]", P_INT32T, 1, 83, 0, 1, 0, 0},
	{"HLS:PSS:Door10:AccessRefused:bi", offsetof(struct seqg_vars, linac_door_accessrefused[0]), "linac_door_accessrefused[0]", P_INT32T, 1, 84, 0, 1, 0, 0},
	{"HLS:PSS:Door11:AccessRefused:bi", offsetof(struct seqg_vars, linac_door_accessrefused[1]), "linac_door_accessrefused[1]", P_INT32T, 1, 85, 0, 1, 0, 0},
	{"HLS:PSS:Door13:AccessRefused:bi", offsetof(struct seqg_vars, linac_door_accessrefused[2]), "linac_door_accessrefused[2]", P_INT32T, 1, 86, 0, 1, 0, 0},
	{"HLS:PSS:Door14:AccessRefused:bi", offsetof(struct seqg_vars, linac_door_accessrefused[3]), "linac_door_accessrefused[3]", P_INT32T, 1, 87, 0, 1, 0, 0},
	{"HLS:PSS:Door10:InnerCardReader:event:waveform", offsetof(struct seqg_vars, linac_door_inner_event[0]), "linac_door_inner_event[0]", P_INT32T, 3, 88, 0, 1, 0, 0},
	{"HLS:PSS:Door11:InnerCardReader:event:waveform", offsetof(struct seqg_vars, linac_door_inner_event[1]), "linac_door_inner_event[1]", P_INT32T, 3, 89, 0, 1, 0, 0},
	{"HLS:PSS:Door13:InnerCardReader:event:waveform", offsetof(struct seqg_vars, linac_door_inner_event[2]), "linac_door_inner_event[2]", P_INT32T, 3, 90, 0, 1, 0, 0},
	{"HLS:PSS:Door14:InnerCardReader:event:waveform", offsetof(struct seqg_vars, linac_door_inner_event[3]), "linac_door_inner_event[3]", P_INT32T, 3, 91, 0, 1, 0, 0},
	{"HLS:PSS:Door10:OuterCardReader:event:waveform", offsetof(struct seqg_vars, linac_door_outer_event[0]), "linac_door_outer_event[0]", P_INT32T, 3, 92, 0, 1, 0, 0},
	{"HLS:PSS:Door11:OuterCardReader:event:waveform", offsetof(struct seqg_vars, linac_door_outer_event[1]), "linac_door_outer_event[1]", P_INT32T, 3, 93, 0, 1, 0, 0},
	{"HLS:PSS:Door13:OuterCardReader:event:waveform", offsetof(struct seqg_vars, linac_door_outer_event[2]), "linac_door_outer_event[2]", P_INT32T, 3, 94, 0, 1, 0, 0},
	{"HLS:PSS:Door14:OuterCardReader:event:waveform", offsetof(struct seqg_vars, linac_door_outer_event[3]), "linac_door_outer_event[3]", P_INT32T, 3, 95, 0, 1, 0, 0},
	{"HLS:PSS:Door01:InnerCardReader:event:waveform", offsetof(struct seqg_vars, ring_door_inner_event[0]), "ring_door_inner_event[0]", P_INT32T, 3, 96, 0, 1, 0, 0},
	{"HLS:PSS:Door02:InnerCardReader:event:waveform", offsetof(struct seqg_vars, ring_door_inner_event[1]), "ring_door_inner_event[1]", P_INT32T, 3, 97, 0, 1, 0, 0},
	{"HLS:PSS:Door03:InnerCardReader:event:waveform", offsetof(struct seqg_vars, ring_door_inner_event[2]), "ring_door_inner_event[2]", P_INT32T, 3, 98, 0, 1, 0, 0},
	{"HLS:PSS:Door04:InnerCardReader:event:waveform", offsetof(struct seqg_vars, ring_door_inner_event[3]), "ring_door_inner_event[3]", P_INT32T, 3, 99, 0, 1, 0, 0},
	{"HLS:PSS:Door05:InnerCardReader:event:waveform", offsetof(struct seqg_vars, ring_door_inner_event[4]), "ring_door_inner_event[4]", P_INT32T, 3, 100, 0, 1, 0, 0},
	{"HLS:PSS:Door06:InnerCardReader:event:waveform", offsetof(struct seqg_vars, ring_door_inner_event[5]), "ring_door_inner_event[5]", P_INT32T, 3, 101, 0, 1, 0, 0},
	{"HLS:PSS:Door07:InnerCardReader:event:waveform", offsetof(struct seqg_vars, ring_door_inner_event[6]), "ring_door_inner_event[6]", P_INT32T, 3, 102, 0, 1, 0, 0},
	{"HLS:PSS:Door08:InnerCardReader:event:waveform", offsetof(struct seqg_vars, ring_door_inner_event[7]), "ring_door_inner_event[7]", P_INT32T, 3, 103, 0, 1, 0, 0},
	{"HLS:PSS:Door09:InnerCardReader:event:waveform", offsetof(struct seqg_vars, ring_door_inner_event[8]), "ring_door_inner_event[8]", P_INT32T, 3, 104, 0, 1, 0, 0},
	{"HLS:PSS:Door12:InnerCardReader:event:waveform", offsetof(struct seqg_vars, ring_door_inner_event[9]), "ring_door_inner_event[9]", P_INT32T, 3, 105, 0, 1, 0, 0},
	{"HLS:PSS:Door01:OuterCardReader:event:waveform", offsetof(struct seqg_vars, ring_door_outer_event[0]), "ring_door_outer_event[0]", P_INT32T, 3, 106, 0, 1, 0, 0},
	{"HLS:PSS:Door02:OuterCardReader:event:waveform", offsetof(struct seqg_vars, ring_door_outer_event[1]), "ring_door_outer_event[1]", P_INT32T, 3, 107, 0, 1, 0, 0},
	{"HLS:PSS:Door03:OuterCardReader:event:waveform", offsetof(struct seqg_vars, ring_door_outer_event[2]), "ring_door_outer_event[2]", P_INT32T, 3, 108, 0, 1, 0, 0},
	{"HLS:PSS:Door04:OuterCardReader:event:waveform", offsetof(struct seqg_vars, ring_door_outer_event[3]), "ring_door_outer_event[3]", P_INT32T, 3, 109, 0, 1, 0, 0},
	{"HLS:PSS:Door05:OuterCardReader:event:waveform", offsetof(struct seqg_vars, ring_door_outer_event[4]), "ring_door_outer_event[4]", P_INT32T, 3, 110, 0, 1, 0, 0},
	{"HLS:PSS:Door06:OuterCardReader:event:waveform", offsetof(struct seqg_vars, ring_door_outer_event[5]), "ring_door_outer_event[5]", P_INT32T, 3, 111, 0, 1, 0, 0},
	{"HLS:PSS:Door07:OuterCardReader:event:waveform", offsetof(struct seqg_vars, ring_door_outer_event[6]), "ring_door_outer_event[6]", P_INT32T, 3, 112, 0, 1, 0, 0},
	{"HLS:PSS:Door08:OuterCardReader:event:waveform", offsetof(struct seqg_vars, ring_door_outer_event[7]), "ring_door_outer_event[7]", P_INT32T, 3, 113, 0, 1, 0, 0},
	{"HLS:PSS:Door09:OuterCardReader:event:waveform", offsetof(struct seqg_vars, ring_door_outer_event[8]), "ring_door_outer_event[8]", P_INT32T, 3, 114, 0, 1, 0, 0},
	{"HLS:PSS:Door12:OuterCardReader:event:waveform", offsetof(struct seqg_vars, ring_door_outer_event[9]), "ring_door_outer_event[9]", P_INT32T, 3, 115, 0, 1, 0, 0},
};

/* Event masks for state set "PersonnelManage" */
static const seqMask seqg_mask_PersonnelManage_0_init[] = {
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
};
static const seqMask seqg_mask_PersonnelManage_0_count[] = {
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
};

/* State table for state set "PersonnelManage" */
static seqState seqg_states_PersonnelManage[] = {
	{
	/* state name */        "init",
	/* action function */   seqg_action_PersonnelManage_0_init,
	/* event function */    seqg_event_PersonnelManage_0_init,
	/* entry function */    0,
	/* exit function */     0,
	/* event mask array */  seqg_mask_PersonnelManage_0_init,
	/* state options */     (0)
	},
	{
	/* state name */        "count",
	/* action function */   seqg_action_PersonnelManage_0_count,
	/* event function */    seqg_event_PersonnelManage_0_count,
	/* entry function */    0,
	/* exit function */     0,
	/* event mask array */  seqg_mask_PersonnelManage_0_count,
	/* state options */     (0)
	},
};

/* State set table */
static seqSS seqg_statesets[] = {
	{
	/* state set name */    "PersonnelManage",
	/* states */            seqg_states_PersonnelManage,
	/* number of states */  2
	},
};

/* Program table (global) */
seqProgram sncExample3 = {
	/* magic number */      2002004,
	/* program name */      "sncExample3",
	/* channels */          seqg_chans,
	/* num. channels */     115,
	/* state sets */        seqg_statesets,
	/* num. state sets */   1,
	/* user var size */     sizeof(struct seqg_vars),
	/* param */             "",
	/* num. event flags */  0,
	/* encoded options */   (0 | OPT_CONN | OPT_NEWEF | OPT_REENT),
	/* init func */         seqg_init,
	/* entry func */        0,
	/* exit func */         0,
	/* num. queues */       0
};

/* Register sequencer commands and program */
#include "epicsExport.h"
static void sncExample3Registrar (void) {
    seqRegisterSequencerCommands();
    seqRegisterSequencerProgram (&sncExample3);
}
epicsExportRegistrar(sncExample3Registrar);
