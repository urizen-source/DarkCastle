#ifndef MOBILE_H_
#define MOBILE_H_
/************************************************************************
| $Id: mobile.h,v 1.10 2004/07/17 19:04:39 urizen Exp $
| mobile.h
| Description:  This file contains the header information for mobile
|   control.
*/
void rebuild_rnum_references(int startAt, int type);
void    mprog_driver            ( char* com_list, CHAR_DATA* mob,
                                       CHAR_DATA* actor, OBJ_DATA* obj,
                                       void* vo );


#define ACT_SPEC       1
#define ACT_SENTINEL   1<<1
#define ACT_SCAVENGER  1<<2
#define ACT_NOTRACK    1<<3
#define ACT_NICE_THIEF 1<<4
#define ACT_AGGRESSIVE 1<<5
#define ACT_STAY_ZONE  1<<6
#define ACT_WIMPY      1<<7
			        /* aggressive only attack sleeping players */
#define ACT_2ND_ATTACK 1<<8
#define ACT_3RD_ATTACK 1<<9
#define ACT_4TH_ATTACK 1<<10
			         /* Each attack bit must be set to get up */
			         /* 4 attacks                             */
/*
 * For ACT_AGGRESSIVE_XXX, you must also set ACT_AGGRESSIVE
 * These switches can be combined, if none are selected, then
 * the mobile will attack any alignment (same as if all 3 were set)
 */
#define ACT_AGGR_EVIL       1<<11
#define ACT_AGGR_GOOD       1<<12
#define ACT_AGGR_NEUT       1<<13
#define ACT_UNDEAD          1<<14
#define ACT_STUPID          1<<15
#define ACT_CHARM           1<<16
#define ACT_HUGE            1<<17
#define ACT_DODGE           1<<18
#define ACT_PARRY           1<<19
#define ACT_RACIST          1<<20
#define ACT_FRIENDLY        1<<21
#define ACT_STAY_NO_TOWN    1<<22
#define ACT_NOMAGIC 	    1<<23
#define ACT_DRAINY          1<<24
#define ACT_BARDCHARM	    1<<25

struct race_shit
{
  char *singular_name;  /* dwarf, elf, etc.     */
  char *plural_name;     /* dwarves, elves, etc. */
   
  long body_parts;  /* bitvector for body parts       */
  long immune;      /* bitvector for immunities       */
  long resist;      /* bitvector for resistances      */
  long suscept;     /* bitvector for susceptibilities */
  long hate_fear;   /* bitvector for hate/fear        */
  long friendly;    /* bitvector for friendliness     */
  int  weight;      /* average weight of ths race    */
  int  height;      /* average height for ths race   */
  int affects;      /* automatically added affects   */
};


#endif
