#ifndef SIMPLE_H_
#define SIMPLE_H_

#include "sqlite3ext.h"

#ifdef __cplusplus
extern "C" {
#endif  /* __cplusplus */


#if !defined(SQLITE_CORE)
/**
 * Initialize simple extension from a sqlite app/library.
*/
int sqlite3_simple_init(sqlite3 *db, char **pzErrMsg, const sqlite3_api_routines *pApi);
#else
/**
 * Initialize simple extension as a built-in sqlite extension.
*/
int sqlite3SimpleInit(sqlite3 *db);
#endif

#ifdef __cplusplus
}  /* extern "C" */
#endif  /* __cplusplus */


#endif