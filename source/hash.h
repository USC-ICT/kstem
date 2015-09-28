/*
 * lisp debug version 0.8 a source level debugger for lisp
 * Copyright (C) 1998 Marc Mertens
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 * 
 * You can reach me at : mmertens@akam.be
 */

/*
 * Header file for hash and list functions used in the debugger
 */

#ifndef __kstem_hash_h__
#define __kstem_hash_h__

/* List */
typedef struct list
{
  const char *key;
  void *data;
  struct list *next;
} LIST;


/* Hash table */

typedef struct hash
{
  int l;
  LIST **t;
} HASH;

#ifdef __cplusplus
extern "C" {
#endif

/* Prototypes of list and hash functions */

LIST *cons(const char *key,void *data,LIST *lst);
void *search(const char *key,LIST *lst);
// leuski::
// this hash implemetation assumes that it owns the data you pass it.
// and the data is allocated on the heap. So it can free the data when
// it does not need it anymore. Kstem passes it things from the static
// data storage (not heap) and never clears up the table. Lets disable the
// code, which would cause bugs anyway...
//LIST *delete_key(const char *key,LIST *lst);
//LIST *delete_all(const char *key,LIST *lst);
int hash(const char *key,int m);
HASH *create_hash(int m);
void insert_hash(HASH *h,const char *key,void *data);
void *search_hash(HASH *h,const char *key);
//void delete_hash(HASH *h,const char *key);

#ifdef __cplusplus
}
#endif

#endif /* __kstem_hash_h__ */