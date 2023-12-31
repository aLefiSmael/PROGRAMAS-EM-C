#ifndef TABLE_H
#define TABLE_H

typedef struct table
{
  struct table *proximo;
  char palavra[50];
} table;

typedef table *ptr_table;

#endif