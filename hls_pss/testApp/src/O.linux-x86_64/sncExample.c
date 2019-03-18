/* C code for program sncExample, generated by snc from ../sncExample.stt */
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include <limits.h>

#include "seq_snc.h"

/* Variable declarations */
struct seqg_vars {
# line 3 "../sncExample.stt"
	int i;
# line 7 "../sncExample.stt"
	epicsInt32 cardwrite_in[14];
# line 23 "../sncExample.stt"
	epicsInt32 cardwrite_out[14];
# line 45 "../sncExample.stt"
	int cyclereset_snl;
};


/* Function declarations */

#define seqg_var (*(struct seqg_vars *const *)seqg_env)

/* Program init func */
static void seqg_init(PROG_ID seqg_env)
{
	{
# line 3 "../sncExample.stt"
	static int seqg_initvar_i = 0;
	memcpy(&seqg_var->i, &seqg_initvar_i, sizeof(seqg_initvar_i));
	}
}

/****** Code for state "init" in state set "ss1" ******/

/* Event function for state "init" in state set "ss1" */
static seqBool seqg_event_ss1_0_init(SS_ID seqg_env, int *seqg_ptrn, int *seqg_pnst)
{
# line 52 "../sncExample.stt"
	if (seq_delay(seqg_env, 1))
	{
		*seqg_pnst = 1;
		*seqg_ptrn = 0;
		return TRUE;
	}
	return FALSE;
}

/* Action function for state "init" in state set "ss1" */
static void seqg_action_ss1_0_init(SS_ID seqg_env, int seqg_trn, int *seqg_pnst)
{
	switch(seqg_trn)
	{
	case 0:
		{
# line 53 "../sncExample.stt"
			printf("Test1111 Start.\n\n\n\n");
# line 54 "../sncExample.stt"
			seqg_var->cyclereset_snl = 0;
# line 55 "../sncExample.stt"
			seq_pvPutTmo(seqg_env, 28/*cyclereset_snl*/, DEFAULT, DEFAULT_TIMEOUT);
# line 57 "../sncExample.stt"
			for (seqg_var->i = 0; seqg_var->i <= 13; seqg_var->i++)
			{
# line 58 "../sncExample.stt"
				seqg_var->cardwrite_out[seqg_var->i] = 0;
# line 59 "../sncExample.stt"
				seqg_var->cardwrite_in[seqg_var->i] = 0;
# line 60 "../sncExample.stt"
				seq_pvPutTmo(seqg_env, 14/*cardwrite_out*/ + (CH_ID)(seqg_var->i), DEFAULT, DEFAULT_TIMEOUT);
# line 61 "../sncExample.stt"
				seq_pvPutTmo(seqg_env, 0/*cardwrite_in*/ + (CH_ID)(seqg_var->i), DEFAULT, DEFAULT_TIMEOUT);
			}
# line 64 "../sncExample.stt"
			for (seqg_var->i = 0; seqg_var->i <= 13; seqg_var->i++)
			{
# line 65 "../sncExample.stt"
				printf("cardwrite_in[%d] is %Id.\n", seqg_var->i, seqg_var->cardwrite_in[seqg_var->i]);
# line 66 "../sncExample.stt"
				printf("cardwrite_out[%d] is %Id.\n", seqg_var->i, seqg_var->cardwrite_out[seqg_var->i]);
			}
		}
		return;
	}
}

/****** Code for state "ringhall_in_01" in state set "ss1" ******/

/* Event function for state "ringhall_in_01" in state set "ss1" */
static seqBool seqg_event_ss1_0_ringhall_in_01(SS_ID seqg_env, int *seqg_ptrn, int *seqg_pnst)
{
# line 72 "../sncExample.stt"
	if (seq_delay(seqg_env, 5))
	{
		*seqg_pnst = 2;
		*seqg_ptrn = 0;
		return TRUE;
	}
	return FALSE;
}

/* Action function for state "ringhall_in_01" in state set "ss1" */
static void seqg_action_ss1_0_ringhall_in_01(SS_ID seqg_env, int seqg_trn, int *seqg_pnst)
{
	switch(seqg_trn)
	{
	case 0:
		{
# line 73 "../sncExample.stt"
			seqg_var->cardwrite_in[0] = 1001;
# line 74 "../sncExample.stt"
			seq_pvPutTmo(seqg_env, 0/*cardwrite_in*/ + (CH_ID)(0), DEFAULT, DEFAULT_TIMEOUT);
		}
		return;
	}
}

/****** Code for state "ringhall_in_02" in state set "ss1" ******/

/* Event function for state "ringhall_in_02" in state set "ss1" */
static seqBool seqg_event_ss1_0_ringhall_in_02(SS_ID seqg_env, int *seqg_ptrn, int *seqg_pnst)
{
# line 79 "../sncExample.stt"
	if (seq_delay(seqg_env, 5))
	{
		*seqg_pnst = 3;
		*seqg_ptrn = 0;
		return TRUE;
	}
	return FALSE;
}

/* Action function for state "ringhall_in_02" in state set "ss1" */
static void seqg_action_ss1_0_ringhall_in_02(SS_ID seqg_env, int seqg_trn, int *seqg_pnst)
{
	switch(seqg_trn)
	{
	case 0:
		{
# line 80 "../sncExample.stt"
			seqg_var->cardwrite_in[1] = 1002;
# line 81 "../sncExample.stt"
			seq_pvPutTmo(seqg_env, 0/*cardwrite_in*/ + (CH_ID)(1), DEFAULT, DEFAULT_TIMEOUT);
		}
		return;
	}
}

/****** Code for state "ringhall_in_03" in state set "ss1" ******/

/* Event function for state "ringhall_in_03" in state set "ss1" */
static seqBool seqg_event_ss1_0_ringhall_in_03(SS_ID seqg_env, int *seqg_ptrn, int *seqg_pnst)
{
# line 86 "../sncExample.stt"
	if (seq_delay(seqg_env, 5))
	{
		*seqg_pnst = 4;
		*seqg_ptrn = 0;
		return TRUE;
	}
	return FALSE;
}

/* Action function for state "ringhall_in_03" in state set "ss1" */
static void seqg_action_ss1_0_ringhall_in_03(SS_ID seqg_env, int seqg_trn, int *seqg_pnst)
{
	switch(seqg_trn)
	{
	case 0:
		{
# line 87 "../sncExample.stt"
			seqg_var->cardwrite_in[2] = 1003;
# line 88 "../sncExample.stt"
			seq_pvPutTmo(seqg_env, 0/*cardwrite_in*/ + (CH_ID)(2), DEFAULT, DEFAULT_TIMEOUT);
		}
		return;
	}
}

/****** Code for state "ringhall_in_04" in state set "ss1" ******/

/* Event function for state "ringhall_in_04" in state set "ss1" */
static seqBool seqg_event_ss1_0_ringhall_in_04(SS_ID seqg_env, int *seqg_ptrn, int *seqg_pnst)
{
# line 93 "../sncExample.stt"
	if (seq_delay(seqg_env, 5))
	{
		*seqg_pnst = 5;
		*seqg_ptrn = 0;
		return TRUE;
	}
	return FALSE;
}

/* Action function for state "ringhall_in_04" in state set "ss1" */
static void seqg_action_ss1_0_ringhall_in_04(SS_ID seqg_env, int seqg_trn, int *seqg_pnst)
{
	switch(seqg_trn)
	{
	case 0:
		{
# line 94 "../sncExample.stt"
			seqg_var->cardwrite_in[3] = 1004;
# line 95 "../sncExample.stt"
			seq_pvPutTmo(seqg_env, 0/*cardwrite_in*/ + (CH_ID)(3), DEFAULT, DEFAULT_TIMEOUT);
		}
		return;
	}
}

/****** Code for state "ringhall_in_05" in state set "ss1" ******/

/* Event function for state "ringhall_in_05" in state set "ss1" */
static seqBool seqg_event_ss1_0_ringhall_in_05(SS_ID seqg_env, int *seqg_ptrn, int *seqg_pnst)
{
# line 100 "../sncExample.stt"
	if (seq_delay(seqg_env, 5))
	{
		*seqg_pnst = 6;
		*seqg_ptrn = 0;
		return TRUE;
	}
	return FALSE;
}

/* Action function for state "ringhall_in_05" in state set "ss1" */
static void seqg_action_ss1_0_ringhall_in_05(SS_ID seqg_env, int seqg_trn, int *seqg_pnst)
{
	switch(seqg_trn)
	{
	case 0:
		{
# line 101 "../sncExample.stt"
			seqg_var->cardwrite_in[4] = 1005;
# line 102 "../sncExample.stt"
			seq_pvPutTmo(seqg_env, 0/*cardwrite_in*/ + (CH_ID)(4), DEFAULT, DEFAULT_TIMEOUT);
		}
		return;
	}
}

/****** Code for state "ringhall_in_06" in state set "ss1" ******/

/* Event function for state "ringhall_in_06" in state set "ss1" */
static seqBool seqg_event_ss1_0_ringhall_in_06(SS_ID seqg_env, int *seqg_ptrn, int *seqg_pnst)
{
# line 107 "../sncExample.stt"
	if (seq_delay(seqg_env, 5))
	{
		*seqg_pnst = 7;
		*seqg_ptrn = 0;
		return TRUE;
	}
	return FALSE;
}

/* Action function for state "ringhall_in_06" in state set "ss1" */
static void seqg_action_ss1_0_ringhall_in_06(SS_ID seqg_env, int seqg_trn, int *seqg_pnst)
{
	switch(seqg_trn)
	{
	case 0:
		{
# line 108 "../sncExample.stt"
			seqg_var->cardwrite_in[5] = 1006;
# line 109 "../sncExample.stt"
			seq_pvPutTmo(seqg_env, 0/*cardwrite_in*/ + (CH_ID)(5), DEFAULT, DEFAULT_TIMEOUT);
		}
		return;
	}
}

/****** Code for state "ringhall_in_07" in state set "ss1" ******/

/* Event function for state "ringhall_in_07" in state set "ss1" */
static seqBool seqg_event_ss1_0_ringhall_in_07(SS_ID seqg_env, int *seqg_ptrn, int *seqg_pnst)
{
# line 114 "../sncExample.stt"
	if (seq_delay(seqg_env, 5))
	{
		*seqg_pnst = 8;
		*seqg_ptrn = 0;
		return TRUE;
	}
	return FALSE;
}

/* Action function for state "ringhall_in_07" in state set "ss1" */
static void seqg_action_ss1_0_ringhall_in_07(SS_ID seqg_env, int seqg_trn, int *seqg_pnst)
{
	switch(seqg_trn)
	{
	case 0:
		{
# line 115 "../sncExample.stt"
			seqg_var->cardwrite_in[6] = 1007;
# line 116 "../sncExample.stt"
			seq_pvPutTmo(seqg_env, 0/*cardwrite_in*/ + (CH_ID)(6), DEFAULT, DEFAULT_TIMEOUT);
		}
		return;
	}
}

/****** Code for state "ringcenter_in_01" in state set "ss1" ******/

/* Event function for state "ringcenter_in_01" in state set "ss1" */
static seqBool seqg_event_ss1_0_ringcenter_in_01(SS_ID seqg_env, int *seqg_ptrn, int *seqg_pnst)
{
# line 122 "../sncExample.stt"
	if (seq_delay(seqg_env, 5))
	{
		*seqg_pnst = 9;
		*seqg_ptrn = 0;
		return TRUE;
	}
	return FALSE;
}

/* Action function for state "ringcenter_in_01" in state set "ss1" */
static void seqg_action_ss1_0_ringcenter_in_01(SS_ID seqg_env, int seqg_trn, int *seqg_pnst)
{
	switch(seqg_trn)
	{
	case 0:
		{
# line 123 "../sncExample.stt"
			seqg_var->cardwrite_out[11] = 2001;
# line 124 "../sncExample.stt"
			seq_pvPutTmo(seqg_env, 14/*cardwrite_out*/ + (CH_ID)(11), DEFAULT, DEFAULT_TIMEOUT);
		}
		return;
	}
}

/****** Code for state "ringcenter_in_02" in state set "ss1" ******/

/* Event function for state "ringcenter_in_02" in state set "ss1" */
static seqBool seqg_event_ss1_0_ringcenter_in_02(SS_ID seqg_env, int *seqg_ptrn, int *seqg_pnst)
{
# line 129 "../sncExample.stt"
	if (seq_delay(seqg_env, 5))
	{
		*seqg_pnst = 10;
		*seqg_ptrn = 0;
		return TRUE;
	}
	return FALSE;
}

/* Action function for state "ringcenter_in_02" in state set "ss1" */
static void seqg_action_ss1_0_ringcenter_in_02(SS_ID seqg_env, int seqg_trn, int *seqg_pnst)
{
	switch(seqg_trn)
	{
	case 0:
		{
# line 130 "../sncExample.stt"
			seqg_var->cardwrite_out[11] = 2002;
# line 131 "../sncExample.stt"
			seq_pvPutTmo(seqg_env, 14/*cardwrite_out*/ + (CH_ID)(11), DEFAULT, DEFAULT_TIMEOUT);
		}
		return;
	}
}

/****** Code for state "ringcenter_out_01" in state set "ss1" ******/

/* Event function for state "ringcenter_out_01" in state set "ss1" */
static seqBool seqg_event_ss1_0_ringcenter_out_01(SS_ID seqg_env, int *seqg_ptrn, int *seqg_pnst)
{
# line 137 "../sncExample.stt"
	if (seq_delay(seqg_env, 5))
	{
		*seqg_pnst = 11;
		*seqg_ptrn = 0;
		return TRUE;
	}
	return FALSE;
}

/* Action function for state "ringcenter_out_01" in state set "ss1" */
static void seqg_action_ss1_0_ringcenter_out_01(SS_ID seqg_env, int seqg_trn, int *seqg_pnst)
{
	switch(seqg_trn)
	{
	case 0:
		{
# line 138 "../sncExample.stt"
			seqg_var->cardwrite_in[11] = 2001;
# line 139 "../sncExample.stt"
			seq_pvPutTmo(seqg_env, 0/*cardwrite_in*/ + (CH_ID)(11), DEFAULT, DEFAULT_TIMEOUT);
		}
		return;
	}
}

/****** Code for state "ringcenter_out_02" in state set "ss1" ******/

/* Event function for state "ringcenter_out_02" in state set "ss1" */
static seqBool seqg_event_ss1_0_ringcenter_out_02(SS_ID seqg_env, int *seqg_ptrn, int *seqg_pnst)
{
# line 144 "../sncExample.stt"
	if (seq_delay(seqg_env, 5))
	{
		*seqg_pnst = 12;
		*seqg_ptrn = 0;
		return TRUE;
	}
	return FALSE;
}

/* Action function for state "ringcenter_out_02" in state set "ss1" */
static void seqg_action_ss1_0_ringcenter_out_02(SS_ID seqg_env, int seqg_trn, int *seqg_pnst)
{
	switch(seqg_trn)
	{
	case 0:
		{
# line 145 "../sncExample.stt"
			seqg_var->cardwrite_in[11] = 2002;
# line 146 "../sncExample.stt"
			seq_pvPutTmo(seqg_env, 0/*cardwrite_in*/ + (CH_ID)(11), DEFAULT, DEFAULT_TIMEOUT);
		}
		return;
	}
}

/****** Code for state "ringhall_out_01" in state set "ss1" ******/

/* Event function for state "ringhall_out_01" in state set "ss1" */
static seqBool seqg_event_ss1_0_ringhall_out_01(SS_ID seqg_env, int *seqg_ptrn, int *seqg_pnst)
{
# line 153 "../sncExample.stt"
	if (seq_delay(seqg_env, 5))
	{
		*seqg_pnst = 13;
		*seqg_ptrn = 0;
		return TRUE;
	}
	return FALSE;
}

/* Action function for state "ringhall_out_01" in state set "ss1" */
static void seqg_action_ss1_0_ringhall_out_01(SS_ID seqg_env, int seqg_trn, int *seqg_pnst)
{
	switch(seqg_trn)
	{
	case 0:
		{
# line 154 "../sncExample.stt"
			seqg_var->cardwrite_out[0] = 1007;
# line 155 "../sncExample.stt"
			seq_pvPutTmo(seqg_env, 14/*cardwrite_out*/ + (CH_ID)(0), DEFAULT, DEFAULT_TIMEOUT);
		}
		return;
	}
}

/****** Code for state "ringhall_out_02" in state set "ss1" ******/

/* Event function for state "ringhall_out_02" in state set "ss1" */
static seqBool seqg_event_ss1_0_ringhall_out_02(SS_ID seqg_env, int *seqg_ptrn, int *seqg_pnst)
{
# line 160 "../sncExample.stt"
	if (seq_delay(seqg_env, 5))
	{
		*seqg_pnst = 14;
		*seqg_ptrn = 0;
		return TRUE;
	}
	return FALSE;
}

/* Action function for state "ringhall_out_02" in state set "ss1" */
static void seqg_action_ss1_0_ringhall_out_02(SS_ID seqg_env, int seqg_trn, int *seqg_pnst)
{
	switch(seqg_trn)
	{
	case 0:
		{
# line 161 "../sncExample.stt"
			seqg_var->cardwrite_out[1] = 1006;
# line 162 "../sncExample.stt"
			seq_pvPutTmo(seqg_env, 14/*cardwrite_out*/ + (CH_ID)(1), DEFAULT, DEFAULT_TIMEOUT);
		}
		return;
	}
}

/****** Code for state "ringhall_out_03" in state set "ss1" ******/

/* Event function for state "ringhall_out_03" in state set "ss1" */
static seqBool seqg_event_ss1_0_ringhall_out_03(SS_ID seqg_env, int *seqg_ptrn, int *seqg_pnst)
{
# line 167 "../sncExample.stt"
	if (seq_delay(seqg_env, 5))
	{
		*seqg_pnst = 15;
		*seqg_ptrn = 0;
		return TRUE;
	}
	return FALSE;
}

/* Action function for state "ringhall_out_03" in state set "ss1" */
static void seqg_action_ss1_0_ringhall_out_03(SS_ID seqg_env, int seqg_trn, int *seqg_pnst)
{
	switch(seqg_trn)
	{
	case 0:
		{
# line 168 "../sncExample.stt"
			seqg_var->cardwrite_out[2] = 1005;
# line 169 "../sncExample.stt"
			seq_pvPutTmo(seqg_env, 14/*cardwrite_out*/ + (CH_ID)(2), DEFAULT, DEFAULT_TIMEOUT);
		}
		return;
	}
}

/****** Code for state "ringhall_out_04" in state set "ss1" ******/

/* Event function for state "ringhall_out_04" in state set "ss1" */
static seqBool seqg_event_ss1_0_ringhall_out_04(SS_ID seqg_env, int *seqg_ptrn, int *seqg_pnst)
{
# line 174 "../sncExample.stt"
	if (seq_delay(seqg_env, 5))
	{
		*seqg_pnst = 16;
		*seqg_ptrn = 0;
		return TRUE;
	}
	return FALSE;
}

/* Action function for state "ringhall_out_04" in state set "ss1" */
static void seqg_action_ss1_0_ringhall_out_04(SS_ID seqg_env, int seqg_trn, int *seqg_pnst)
{
	switch(seqg_trn)
	{
	case 0:
		{
# line 175 "../sncExample.stt"
			seqg_var->cardwrite_out[3] = 1004;
# line 176 "../sncExample.stt"
			seq_pvPutTmo(seqg_env, 14/*cardwrite_out*/ + (CH_ID)(3), DEFAULT, DEFAULT_TIMEOUT);
		}
		return;
	}
}

/****** Code for state "ringhall_out_05" in state set "ss1" ******/

/* Event function for state "ringhall_out_05" in state set "ss1" */
static seqBool seqg_event_ss1_0_ringhall_out_05(SS_ID seqg_env, int *seqg_ptrn, int *seqg_pnst)
{
# line 181 "../sncExample.stt"
	if (seq_delay(seqg_env, 5))
	{
		*seqg_pnst = 17;
		*seqg_ptrn = 0;
		return TRUE;
	}
	return FALSE;
}

/* Action function for state "ringhall_out_05" in state set "ss1" */
static void seqg_action_ss1_0_ringhall_out_05(SS_ID seqg_env, int seqg_trn, int *seqg_pnst)
{
	switch(seqg_trn)
	{
	case 0:
		{
# line 182 "../sncExample.stt"
			seqg_var->cardwrite_out[4] = 1003;
# line 183 "../sncExample.stt"
			seq_pvPutTmo(seqg_env, 14/*cardwrite_out*/ + (CH_ID)(4), DEFAULT, DEFAULT_TIMEOUT);
		}
		return;
	}
}

/****** Code for state "ringhall_out_06" in state set "ss1" ******/

/* Event function for state "ringhall_out_06" in state set "ss1" */
static seqBool seqg_event_ss1_0_ringhall_out_06(SS_ID seqg_env, int *seqg_ptrn, int *seqg_pnst)
{
# line 188 "../sncExample.stt"
	if (seq_delay(seqg_env, 5))
	{
		*seqg_pnst = 18;
		*seqg_ptrn = 0;
		return TRUE;
	}
	return FALSE;
}

/* Action function for state "ringhall_out_06" in state set "ss1" */
static void seqg_action_ss1_0_ringhall_out_06(SS_ID seqg_env, int seqg_trn, int *seqg_pnst)
{
	switch(seqg_trn)
	{
	case 0:
		{
# line 189 "../sncExample.stt"
			seqg_var->cardwrite_out[5] = 1002;
# line 190 "../sncExample.stt"
			seq_pvPutTmo(seqg_env, 14/*cardwrite_out*/ + (CH_ID)(5), DEFAULT, DEFAULT_TIMEOUT);
		}
		return;
	}
}

/****** Code for state "ringhall_out_07" in state set "ss1" ******/

/* Event function for state "ringhall_out_07" in state set "ss1" */
static seqBool seqg_event_ss1_0_ringhall_out_07(SS_ID seqg_env, int *seqg_ptrn, int *seqg_pnst)
{
# line 195 "../sncExample.stt"
	if (seq_delay(seqg_env, 5))
	{
		*seqg_pnst = 19;
		*seqg_ptrn = 0;
		return TRUE;
	}
	return FALSE;
}

/* Action function for state "ringhall_out_07" in state set "ss1" */
static void seqg_action_ss1_0_ringhall_out_07(SS_ID seqg_env, int seqg_trn, int *seqg_pnst)
{
	switch(seqg_trn)
	{
	case 0:
		{
# line 196 "../sncExample.stt"
			seqg_var->cardwrite_out[6] = 1001;
# line 197 "../sncExample.stt"
			seq_pvPutTmo(seqg_env, 14/*cardwrite_out*/ + (CH_ID)(6), DEFAULT, DEFAULT_TIMEOUT);
		}
		return;
	}
}

/****** Code for state "linac_in_01" in state set "ss1" ******/

/* Event function for state "linac_in_01" in state set "ss1" */
static seqBool seqg_event_ss1_0_linac_in_01(SS_ID seqg_env, int *seqg_ptrn, int *seqg_pnst)
{
# line 202 "../sncExample.stt"
	if (seq_delay(seqg_env, 5))
	{
		*seqg_pnst = 20;
		*seqg_ptrn = 0;
		return TRUE;
	}
	return FALSE;
}

/* Action function for state "linac_in_01" in state set "ss1" */
static void seqg_action_ss1_0_linac_in_01(SS_ID seqg_env, int seqg_trn, int *seqg_pnst)
{
	switch(seqg_trn)
	{
	case 0:
		{
# line 203 "../sncExample.stt"
			seqg_var->cardwrite_in[9] = 3001;
# line 204 "../sncExample.stt"
			seq_pvPutTmo(seqg_env, 0/*cardwrite_in*/ + (CH_ID)(9), DEFAULT, DEFAULT_TIMEOUT);
		}
		return;
	}
}

/****** Code for state "linac_in_02" in state set "ss1" ******/

/* Event function for state "linac_in_02" in state set "ss1" */
static seqBool seqg_event_ss1_0_linac_in_02(SS_ID seqg_env, int *seqg_ptrn, int *seqg_pnst)
{
# line 209 "../sncExample.stt"
	if (seq_delay(seqg_env, 5))
	{
		*seqg_pnst = 21;
		*seqg_ptrn = 0;
		return TRUE;
	}
	return FALSE;
}

/* Action function for state "linac_in_02" in state set "ss1" */
static void seqg_action_ss1_0_linac_in_02(SS_ID seqg_env, int seqg_trn, int *seqg_pnst)
{
	switch(seqg_trn)
	{
	case 0:
		{
# line 210 "../sncExample.stt"
			seqg_var->cardwrite_in[10] = 3002;
# line 211 "../sncExample.stt"
			seq_pvPutTmo(seqg_env, 0/*cardwrite_in*/ + (CH_ID)(10), DEFAULT, DEFAULT_TIMEOUT);
		}
		return;
	}
}

/****** Code for state "linac_out_01" in state set "ss1" ******/

/* Event function for state "linac_out_01" in state set "ss1" */
static seqBool seqg_event_ss1_0_linac_out_01(SS_ID seqg_env, int *seqg_ptrn, int *seqg_pnst)
{
# line 216 "../sncExample.stt"
	if (seq_delay(seqg_env, 5))
	{
		*seqg_pnst = 22;
		*seqg_ptrn = 0;
		return TRUE;
	}
	return FALSE;
}

/* Action function for state "linac_out_01" in state set "ss1" */
static void seqg_action_ss1_0_linac_out_01(SS_ID seqg_env, int seqg_trn, int *seqg_pnst)
{
	switch(seqg_trn)
	{
	case 0:
		{
# line 217 "../sncExample.stt"
			seqg_var->cardwrite_out[9] = 3002;
# line 218 "../sncExample.stt"
			seq_pvPutTmo(seqg_env, 14/*cardwrite_out*/ + (CH_ID)(9), DEFAULT, DEFAULT_TIMEOUT);
		}
		return;
	}
}

/****** Code for state "linac_out_02" in state set "ss1" ******/

/* Event function for state "linac_out_02" in state set "ss1" */
static seqBool seqg_event_ss1_0_linac_out_02(SS_ID seqg_env, int *seqg_ptrn, int *seqg_pnst)
{
# line 223 "../sncExample.stt"
	if (seq_delay(seqg_env, 5))
	{
		*seqg_pnst = 23;
		*seqg_ptrn = 0;
		return TRUE;
	}
	return FALSE;
}

/* Action function for state "linac_out_02" in state set "ss1" */
static void seqg_action_ss1_0_linac_out_02(SS_ID seqg_env, int seqg_trn, int *seqg_pnst)
{
	switch(seqg_trn)
	{
	case 0:
		{
# line 224 "../sncExample.stt"
			seqg_var->cardwrite_out[10] = 3001;
# line 225 "../sncExample.stt"
			seq_pvPutTmo(seqg_env, 14/*cardwrite_out*/ + (CH_ID)(10), DEFAULT, DEFAULT_TIMEOUT);
		}
		return;
	}
}

/****** Code for state "delay" in state set "ss1" ******/

/* Event function for state "delay" in state set "ss1" */
static seqBool seqg_event_ss1_0_delay(SS_ID seqg_env, int *seqg_ptrn, int *seqg_pnst)
{
# line 230 "../sncExample.stt"
	if (seq_delay(seqg_env, 5))
	{
		*seqg_pnst = 0;
		*seqg_ptrn = 0;
		return TRUE;
	}
	return FALSE;
}

/* Action function for state "delay" in state set "ss1" */
static void seqg_action_ss1_0_delay(SS_ID seqg_env, int seqg_trn, int *seqg_pnst)
{
	switch(seqg_trn)
	{
	case 0:
		{
# line 231 "../sncExample.stt"
			for (seqg_var->i = 0; seqg_var->i <= 13; seqg_var->i++)
			{
# line 232 "../sncExample.stt"
				seqg_var->cardwrite_in[seqg_var->i] = 0;
# line 233 "../sncExample.stt"
				seqg_var->cardwrite_out[seqg_var->i] = 0;
# line 234 "../sncExample.stt"
				seq_pvPutTmo(seqg_env, 0/*cardwrite_in*/ + (CH_ID)(seqg_var->i), DEFAULT, DEFAULT_TIMEOUT);
# line 235 "../sncExample.stt"
				seq_pvPutTmo(seqg_env, 14/*cardwrite_out*/ + (CH_ID)(seqg_var->i), DEFAULT, DEFAULT_TIMEOUT);
			}
# line 238 "../sncExample.stt"
			printf("1 cycle is down!!!\n");
# line 239 "../sncExample.stt"
			seqg_var->cyclereset_snl = 1;
# line 240 "../sncExample.stt"
			printf("Now caput 'cyclereset:ao' into %d.\n", seqg_var->cyclereset_snl);
# line 241 "../sncExample.stt"
			seq_pvPutTmo(seqg_env, 28/*cyclereset_snl*/, DEFAULT, DEFAULT_TIMEOUT);
		}
		return;
	}
}

#undef seqg_var

/************************ Tables ************************/

/* Channel table */
static seqChan seqg_chans[] = {
	/* chName, offset, varName, varType, count, eventNum, efId, monitored, queueSize, queueIndex */
	{"Cardnumber-1", offsetof(struct seqg_vars, cardwrite_in[0]), "cardwrite_in[0]", P_INT32T, 1, 1, 0, 1, 0, 0},
	{"Cardnumber-3", offsetof(struct seqg_vars, cardwrite_in[1]), "cardwrite_in[1]", P_INT32T, 1, 2, 0, 1, 0, 0},
	{"Cardnumber-5", offsetof(struct seqg_vars, cardwrite_in[2]), "cardwrite_in[2]", P_INT32T, 1, 3, 0, 1, 0, 0},
	{"Cardnumber-7", offsetof(struct seqg_vars, cardwrite_in[3]), "cardwrite_in[3]", P_INT32T, 1, 4, 0, 1, 0, 0},
	{"Cardnumber-9", offsetof(struct seqg_vars, cardwrite_in[4]), "cardwrite_in[4]", P_INT32T, 1, 5, 0, 1, 0, 0},
	{"Cardnumber-11", offsetof(struct seqg_vars, cardwrite_in[5]), "cardwrite_in[5]", P_INT32T, 1, 6, 0, 1, 0, 0},
	{"Cardnumber-13", offsetof(struct seqg_vars, cardwrite_in[6]), "cardwrite_in[6]", P_INT32T, 1, 7, 0, 1, 0, 0},
	{"Cardnumber-15", offsetof(struct seqg_vars, cardwrite_in[7]), "cardwrite_in[7]", P_INT32T, 1, 8, 0, 1, 0, 0},
	{"Cardnumber-17", offsetof(struct seqg_vars, cardwrite_in[8]), "cardwrite_in[8]", P_INT32T, 1, 9, 0, 1, 0, 0},
	{"Cardnumber-19", offsetof(struct seqg_vars, cardwrite_in[9]), "cardwrite_in[9]", P_INT32T, 1, 10, 0, 1, 0, 0},
	{"Cardnumber-21", offsetof(struct seqg_vars, cardwrite_in[10]), "cardwrite_in[10]", P_INT32T, 1, 11, 0, 1, 0, 0},
	{"Cardnumber-23", offsetof(struct seqg_vars, cardwrite_in[11]), "cardwrite_in[11]", P_INT32T, 1, 12, 0, 1, 0, 0},
	{"Cardnumber-25", offsetof(struct seqg_vars, cardwrite_in[12]), "cardwrite_in[12]", P_INT32T, 1, 13, 0, 1, 0, 0},
	{"Cardnumber-27", offsetof(struct seqg_vars, cardwrite_in[13]), "cardwrite_in[13]", P_INT32T, 1, 14, 0, 1, 0, 0},
	{"Cardnumber-2", offsetof(struct seqg_vars, cardwrite_out[0]), "cardwrite_out[0]", P_INT32T, 1, 15, 0, 1, 0, 0},
	{"Cardnumber-4", offsetof(struct seqg_vars, cardwrite_out[1]), "cardwrite_out[1]", P_INT32T, 1, 16, 0, 1, 0, 0},
	{"Cardnumber-6", offsetof(struct seqg_vars, cardwrite_out[2]), "cardwrite_out[2]", P_INT32T, 1, 17, 0, 1, 0, 0},
	{"Cardnumber-8", offsetof(struct seqg_vars, cardwrite_out[3]), "cardwrite_out[3]", P_INT32T, 1, 18, 0, 1, 0, 0},
	{"Cardnumber-10", offsetof(struct seqg_vars, cardwrite_out[4]), "cardwrite_out[4]", P_INT32T, 1, 19, 0, 1, 0, 0},
	{"Cardnumber-12", offsetof(struct seqg_vars, cardwrite_out[5]), "cardwrite_out[5]", P_INT32T, 1, 20, 0, 1, 0, 0},
	{"Cardnumber-14", offsetof(struct seqg_vars, cardwrite_out[6]), "cardwrite_out[6]", P_INT32T, 1, 21, 0, 1, 0, 0},
	{"Cardnumber-16", offsetof(struct seqg_vars, cardwrite_out[7]), "cardwrite_out[7]", P_INT32T, 1, 22, 0, 1, 0, 0},
	{"Cardnumber-18", offsetof(struct seqg_vars, cardwrite_out[8]), "cardwrite_out[8]", P_INT32T, 1, 23, 0, 1, 0, 0},
	{"Cardnumber-20", offsetof(struct seqg_vars, cardwrite_out[9]), "cardwrite_out[9]", P_INT32T, 1, 24, 0, 1, 0, 0},
	{"Cardnumber-22", offsetof(struct seqg_vars, cardwrite_out[10]), "cardwrite_out[10]", P_INT32T, 1, 25, 0, 1, 0, 0},
	{"Cardnumber-24", offsetof(struct seqg_vars, cardwrite_out[11]), "cardwrite_out[11]", P_INT32T, 1, 26, 0, 1, 0, 0},
	{"Cardnumber-26", offsetof(struct seqg_vars, cardwrite_out[12]), "cardwrite_out[12]", P_INT32T, 1, 27, 0, 1, 0, 0},
	{"Cardnumber-28", offsetof(struct seqg_vars, cardwrite_out[13]), "cardwrite_out[13]", P_INT32T, 1, 28, 0, 1, 0, 0},
	{"cyclereset:ao", offsetof(struct seqg_vars, cyclereset_snl), "cyclereset_snl", P_INT, 1, 29, 0, 1, 0, 0},
};

/* Event masks for state set "ss1" */
static const seqMask seqg_mask_ss1_0_init[] = {
	0x00000000,
};
static const seqMask seqg_mask_ss1_0_ringhall_in_01[] = {
	0x00000000,
};
static const seqMask seqg_mask_ss1_0_ringhall_in_02[] = {
	0x00000000,
};
static const seqMask seqg_mask_ss1_0_ringhall_in_03[] = {
	0x00000000,
};
static const seqMask seqg_mask_ss1_0_ringhall_in_04[] = {
	0x00000000,
};
static const seqMask seqg_mask_ss1_0_ringhall_in_05[] = {
	0x00000000,
};
static const seqMask seqg_mask_ss1_0_ringhall_in_06[] = {
	0x00000000,
};
static const seqMask seqg_mask_ss1_0_ringhall_in_07[] = {
	0x00000000,
};
static const seqMask seqg_mask_ss1_0_ringcenter_in_01[] = {
	0x00000000,
};
static const seqMask seqg_mask_ss1_0_ringcenter_in_02[] = {
	0x00000000,
};
static const seqMask seqg_mask_ss1_0_ringcenter_out_01[] = {
	0x00000000,
};
static const seqMask seqg_mask_ss1_0_ringcenter_out_02[] = {
	0x00000000,
};
static const seqMask seqg_mask_ss1_0_ringhall_out_01[] = {
	0x00000000,
};
static const seqMask seqg_mask_ss1_0_ringhall_out_02[] = {
	0x00000000,
};
static const seqMask seqg_mask_ss1_0_ringhall_out_03[] = {
	0x00000000,
};
static const seqMask seqg_mask_ss1_0_ringhall_out_04[] = {
	0x00000000,
};
static const seqMask seqg_mask_ss1_0_ringhall_out_05[] = {
	0x00000000,
};
static const seqMask seqg_mask_ss1_0_ringhall_out_06[] = {
	0x00000000,
};
static const seqMask seqg_mask_ss1_0_ringhall_out_07[] = {
	0x00000000,
};
static const seqMask seqg_mask_ss1_0_linac_in_01[] = {
	0x00000000,
};
static const seqMask seqg_mask_ss1_0_linac_in_02[] = {
	0x00000000,
};
static const seqMask seqg_mask_ss1_0_linac_out_01[] = {
	0x00000000,
};
static const seqMask seqg_mask_ss1_0_linac_out_02[] = {
	0x00000000,
};
static const seqMask seqg_mask_ss1_0_delay[] = {
	0x00000000,
};

/* State table for state set "ss1" */
static seqState seqg_states_ss1[] = {
	{
	/* state name */        "init",
	/* action function */   seqg_action_ss1_0_init,
	/* event function */    seqg_event_ss1_0_init,
	/* entry function */    0,
	/* exit function */     0,
	/* event mask array */  seqg_mask_ss1_0_init,
	/* state options */     (0)
	},
	{
	/* state name */        "ringhall_in_01",
	/* action function */   seqg_action_ss1_0_ringhall_in_01,
	/* event function */    seqg_event_ss1_0_ringhall_in_01,
	/* entry function */    0,
	/* exit function */     0,
	/* event mask array */  seqg_mask_ss1_0_ringhall_in_01,
	/* state options */     (0)
	},
	{
	/* state name */        "ringhall_in_02",
	/* action function */   seqg_action_ss1_0_ringhall_in_02,
	/* event function */    seqg_event_ss1_0_ringhall_in_02,
	/* entry function */    0,
	/* exit function */     0,
	/* event mask array */  seqg_mask_ss1_0_ringhall_in_02,
	/* state options */     (0)
	},
	{
	/* state name */        "ringhall_in_03",
	/* action function */   seqg_action_ss1_0_ringhall_in_03,
	/* event function */    seqg_event_ss1_0_ringhall_in_03,
	/* entry function */    0,
	/* exit function */     0,
	/* event mask array */  seqg_mask_ss1_0_ringhall_in_03,
	/* state options */     (0)
	},
	{
	/* state name */        "ringhall_in_04",
	/* action function */   seqg_action_ss1_0_ringhall_in_04,
	/* event function */    seqg_event_ss1_0_ringhall_in_04,
	/* entry function */    0,
	/* exit function */     0,
	/* event mask array */  seqg_mask_ss1_0_ringhall_in_04,
	/* state options */     (0)
	},
	{
	/* state name */        "ringhall_in_05",
	/* action function */   seqg_action_ss1_0_ringhall_in_05,
	/* event function */    seqg_event_ss1_0_ringhall_in_05,
	/* entry function */    0,
	/* exit function */     0,
	/* event mask array */  seqg_mask_ss1_0_ringhall_in_05,
	/* state options */     (0)
	},
	{
	/* state name */        "ringhall_in_06",
	/* action function */   seqg_action_ss1_0_ringhall_in_06,
	/* event function */    seqg_event_ss1_0_ringhall_in_06,
	/* entry function */    0,
	/* exit function */     0,
	/* event mask array */  seqg_mask_ss1_0_ringhall_in_06,
	/* state options */     (0)
	},
	{
	/* state name */        "ringhall_in_07",
	/* action function */   seqg_action_ss1_0_ringhall_in_07,
	/* event function */    seqg_event_ss1_0_ringhall_in_07,
	/* entry function */    0,
	/* exit function */     0,
	/* event mask array */  seqg_mask_ss1_0_ringhall_in_07,
	/* state options */     (0)
	},
	{
	/* state name */        "ringcenter_in_01",
	/* action function */   seqg_action_ss1_0_ringcenter_in_01,
	/* event function */    seqg_event_ss1_0_ringcenter_in_01,
	/* entry function */    0,
	/* exit function */     0,
	/* event mask array */  seqg_mask_ss1_0_ringcenter_in_01,
	/* state options */     (0)
	},
	{
	/* state name */        "ringcenter_in_02",
	/* action function */   seqg_action_ss1_0_ringcenter_in_02,
	/* event function */    seqg_event_ss1_0_ringcenter_in_02,
	/* entry function */    0,
	/* exit function */     0,
	/* event mask array */  seqg_mask_ss1_0_ringcenter_in_02,
	/* state options */     (0)
	},
	{
	/* state name */        "ringcenter_out_01",
	/* action function */   seqg_action_ss1_0_ringcenter_out_01,
	/* event function */    seqg_event_ss1_0_ringcenter_out_01,
	/* entry function */    0,
	/* exit function */     0,
	/* event mask array */  seqg_mask_ss1_0_ringcenter_out_01,
	/* state options */     (0)
	},
	{
	/* state name */        "ringcenter_out_02",
	/* action function */   seqg_action_ss1_0_ringcenter_out_02,
	/* event function */    seqg_event_ss1_0_ringcenter_out_02,
	/* entry function */    0,
	/* exit function */     0,
	/* event mask array */  seqg_mask_ss1_0_ringcenter_out_02,
	/* state options */     (0)
	},
	{
	/* state name */        "ringhall_out_01",
	/* action function */   seqg_action_ss1_0_ringhall_out_01,
	/* event function */    seqg_event_ss1_0_ringhall_out_01,
	/* entry function */    0,
	/* exit function */     0,
	/* event mask array */  seqg_mask_ss1_0_ringhall_out_01,
	/* state options */     (0)
	},
	{
	/* state name */        "ringhall_out_02",
	/* action function */   seqg_action_ss1_0_ringhall_out_02,
	/* event function */    seqg_event_ss1_0_ringhall_out_02,
	/* entry function */    0,
	/* exit function */     0,
	/* event mask array */  seqg_mask_ss1_0_ringhall_out_02,
	/* state options */     (0)
	},
	{
	/* state name */        "ringhall_out_03",
	/* action function */   seqg_action_ss1_0_ringhall_out_03,
	/* event function */    seqg_event_ss1_0_ringhall_out_03,
	/* entry function */    0,
	/* exit function */     0,
	/* event mask array */  seqg_mask_ss1_0_ringhall_out_03,
	/* state options */     (0)
	},
	{
	/* state name */        "ringhall_out_04",
	/* action function */   seqg_action_ss1_0_ringhall_out_04,
	/* event function */    seqg_event_ss1_0_ringhall_out_04,
	/* entry function */    0,
	/* exit function */     0,
	/* event mask array */  seqg_mask_ss1_0_ringhall_out_04,
	/* state options */     (0)
	},
	{
	/* state name */        "ringhall_out_05",
	/* action function */   seqg_action_ss1_0_ringhall_out_05,
	/* event function */    seqg_event_ss1_0_ringhall_out_05,
	/* entry function */    0,
	/* exit function */     0,
	/* event mask array */  seqg_mask_ss1_0_ringhall_out_05,
	/* state options */     (0)
	},
	{
	/* state name */        "ringhall_out_06",
	/* action function */   seqg_action_ss1_0_ringhall_out_06,
	/* event function */    seqg_event_ss1_0_ringhall_out_06,
	/* entry function */    0,
	/* exit function */     0,
	/* event mask array */  seqg_mask_ss1_0_ringhall_out_06,
	/* state options */     (0)
	},
	{
	/* state name */        "ringhall_out_07",
	/* action function */   seqg_action_ss1_0_ringhall_out_07,
	/* event function */    seqg_event_ss1_0_ringhall_out_07,
	/* entry function */    0,
	/* exit function */     0,
	/* event mask array */  seqg_mask_ss1_0_ringhall_out_07,
	/* state options */     (0)
	},
	{
	/* state name */        "linac_in_01",
	/* action function */   seqg_action_ss1_0_linac_in_01,
	/* event function */    seqg_event_ss1_0_linac_in_01,
	/* entry function */    0,
	/* exit function */     0,
	/* event mask array */  seqg_mask_ss1_0_linac_in_01,
	/* state options */     (0)
	},
	{
	/* state name */        "linac_in_02",
	/* action function */   seqg_action_ss1_0_linac_in_02,
	/* event function */    seqg_event_ss1_0_linac_in_02,
	/* entry function */    0,
	/* exit function */     0,
	/* event mask array */  seqg_mask_ss1_0_linac_in_02,
	/* state options */     (0)
	},
	{
	/* state name */        "linac_out_01",
	/* action function */   seqg_action_ss1_0_linac_out_01,
	/* event function */    seqg_event_ss1_0_linac_out_01,
	/* entry function */    0,
	/* exit function */     0,
	/* event mask array */  seqg_mask_ss1_0_linac_out_01,
	/* state options */     (0)
	},
	{
	/* state name */        "linac_out_02",
	/* action function */   seqg_action_ss1_0_linac_out_02,
	/* event function */    seqg_event_ss1_0_linac_out_02,
	/* entry function */    0,
	/* exit function */     0,
	/* event mask array */  seqg_mask_ss1_0_linac_out_02,
	/* state options */     (0)
	},
	{
	/* state name */        "delay",
	/* action function */   seqg_action_ss1_0_delay,
	/* event function */    seqg_event_ss1_0_delay,
	/* entry function */    0,
	/* exit function */     0,
	/* event mask array */  seqg_mask_ss1_0_delay,
	/* state options */     (0)
	},
};

/* State set table */
static seqSS seqg_statesets[] = {
	{
	/* state set name */    "ss1",
	/* states */            seqg_states_ss1,
	/* number of states */  24
	},
};

/* Program table (global) */
seqProgram sncExample = {
	/* magic number */      2002004,
	/* program name */      "sncExample",
	/* channels */          seqg_chans,
	/* num. channels */     29,
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
static void sncExampleRegistrar (void) {
    seqRegisterSequencerCommands();
    seqRegisterSequencerProgram (&sncExample);
}
epicsExportRegistrar(sncExampleRegistrar);
