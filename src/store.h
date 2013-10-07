#ifndef INCLUDED_STORE_H
#define INCLUDED_STORE_H

#include "game-cmd.h"

/*** Constants ***/

/*
 * Total number of stores (see "store.c", etc)
 */
#define MAX_STORES	10

#define MAX_STORES_MORIA	6

/*
 * Total number of stores (see "store.c", etc)
 */
#define MAX_INVENTORY_HOME	24


/*
 * Store index definitions (see "store.c", etc)
 */
#define STORE_GENERAL	0
#define STORE_ARMOR		1
#define STORE_WEAPON	2
#define STORE_TEMPLE	3
#define STORE_ALCHEMY	4
#define STORE_MAGIC		5
#define STORE_B_MARKET	6
#define STORE_HOME		7
#define STORE_GUILD		8
#define STORE_BOOKSHOP	9


/*
 * Store bit definitions (see "store.c", etc)
 */
#define SF1_GENERAL		0x00000001
#define SF1_ARMOR		0x00000002
#define SF1_WEAPON		0x00000004
#define SF1_TEMPLE		0x00000008
#define SF1_ALCHEMY		0x00000010
#define SF1_MAGIC		0x00000020
#define SF1_B_MARKET	0x00000040
/* Home is not valid for stock objects */
#define SF1_HOME		0x00000080
/* Guild is not valid for stock objects */
#define SF1_GUILD		0x00000100
#define SF1_BOOKSHOP	0x00000200

/*** Types ***/

/*
 * A store owner
 */
struct owner_type
{
	u32b owner_name;	/* Name (offset) */
	s32b max_cost;		/* Purse limit */
};


/*
 * A store, with an owner, various state flags, a current stock
 * of items, and a table of items that are often purchased.
 */
struct store_type
{
	byte owner;				/* Owner index */

	byte stock_num;			/* Stock -- Number of entries */
	s16b stock_size;		/* Stock -- Total Size of Array */
	object_type *stock;		/* Stock -- Actual stock items */
};



/*** Functions ***/



#endif /* INCLUDED_STORE_H */

