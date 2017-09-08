#include "hashtable.h"
#include "types.h"

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

typedef struct st_table_entry{
  unsigned int hash;
  char *key;
  char *record;
  struct st_table_entry *next;
} st_table_entry;

typedef struct st_table {
  struct st_hash_type *type;
  int num_bins;
  int num_entries;
  struct st_table_entry **bins;
} st_table;

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
