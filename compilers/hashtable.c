#include <stdio.h>
#include <stdlib.h>
#include "hashtable.h"
#include "types.h"

static int new_size(int);

#define do_hash(key,table) (unsigned int)(*(table)->type->hash)((key))

#define FIND_ENTRY(table, ptr, hash_val, hash_pos) do { \
  bin_pos = hash_val % (table)->num_bins; \
  ptr = (table)->bins[bin_pos]; \
  if(PTR_NOT_EQUAL(table, ptr->next, hash_val, key)) {\
    while (PTR_NOT_EQUAL(table, ptr->next, hash_val, key)) {\
      ptr = ptr->next;\
    } \
    ptr = ptr->next;\
  } \
} while(0)

#define PTR_NOT_EQUAL(table, ptr, hash_val, key) ((ptr) != 0 && \
          (ptr->hash != (hash_val) || !EQUAL((table), (key), (ptr)->key)))

#define EQUAL(table, x, y) \
  ((x) == (y) || (*table->type->compare)((x), (y)) == 0)

struct st_table_entry{
  unsigned int hash;
  char *key;
  char *record;
  struct st_table_entry *next;
};

struct st_table {
  struct st_hash_type *type;
  int num_bins;
  int num_entries;
  struct st_table_entry **bins;
};

struct st_hash_type {
  int (*compare)();
  int (*hash)();
};

// static int numcmp(int, int);
// static int numhash(int);
//
// static int numcmp(int x, int y) {
//   return x != y;
// }
//
// static int numhash(int x) {
//   return x;
// }
//
// static struct st_hash_type type_numhash = {
//   numcmp,
//   numhash
// };
//
//
// struct st_table * st_init_numtable() {
//   return st_init_table(&type_numhash);
// }

int st_lookup(st_table *table, register char key, char **value) {
  unsigned int hash_val, bin_pos;
  register st_table_entry *ptr;

  hash_val = do_hash(key, table);
  FIND_ENTRY(table, ptr, hash_val, bin_pos);

  if(ptr == 0) {
    return 0;
  }
  if(value != 0) {
    *value = ptr->record;
  }
  return 1;
}

// Allocates memory for a given type and returns a pointer to that.
#define alloc(type) (type *)malloc((unsigned)sizeof(type))

// Initializes a table with a given size.
st_table * st_init_table_with_size(st_hash_type * type, int size) {
  st_table * table;
  int real_size = new_size(size);
  table = alloc(st_table);
  table->type = type;
  table->num_entries = 0;
  table->num_bins = real_size;
  table->bins = (st_table_entry **)calloc(size, sizeof(st_table_entry *));
  return table;
}

st_table * st_init_table(st_hash_type * type) {
    return st_init_table_with_size(type, 0);
}

// Table of prime numbers 2^n+a, 2<=n<=30.
static long primes[] = {
	8 + 3,
	16 + 3,
	32 + 5,
	64 + 3,
	128 + 3,
	256 + 27,
	512 + 9,
	1024 + 9,
	2048 + 5,
	4096 + 3,
	8192 + 27,
	16384 + 43,
	32768 + 3,
	65536 + 45,
	131072 + 29,
	262144 + 3,
	524288 + 21,
	1048576 + 7,
	2097152 + 17,
	4194304 + 15,
	8388608 + 9,
	16777216 + 43,
	33554432 + 35,
	67108864 + 15,
	134217728 + 29,
	268435456 + 3,
	536870912 + 11,
	1073741824 + 85,
	0
};
#define MINSIZE 8

static int new_size(int size) {
  int i, real_size, primes_count = sizeof(primes)/sizeof(primes[0]);

  for (i = 0, real_size = MINSIZE; i < primes_count; i++, real_size = real_size << 1) {
    if (real_size > size) return primes[i];
  }
  return -1;
}
