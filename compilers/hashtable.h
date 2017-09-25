#ifndef _HASHTABLE_H
#define _HASHTABLE_H

typedef struct st_table st_table;
typedef struct st_table_entry st_table_entry;
typedef struct st_hash_type st_hash_type;

st_table * st_init_numtable();
int st_lookup(st_table *, register char, char **);

#endif
