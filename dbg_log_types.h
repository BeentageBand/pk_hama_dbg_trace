/*=====================================================================================*/
/**
 * dbg_log_types.h
 * author : puch
 * date : Oct 22 2015
 *
 * description : Any comments
 *
 */
/*=====================================================================================*/
#ifndef DBG_LOG_TYPES_H_
#define DBG_LOG_TYPES_H_
/*=====================================================================================*
 * Project Includes
 *=====================================================================================*/
#include "std_reuse.h"
#include "dbg_log_uset.h"
/*=====================================================================================* 
 * Standard Includes
 *=====================================================================================*/

/*=====================================================================================* 
 * Exported X-Macros
 *=====================================================================================*/
#define DBG_FID_X(fid, desc) fid,
/*=====================================================================================* 
 * Exported Define Macros
 *=====================================================================================*/
#ifdef __cplusplus
extern "C" {
#endif
/*=====================================================================================* 
 * Exported Type Declarations
 *=====================================================================================*/
typedef enum
{
   DBG_FID_LIST(DBG_FID_X)
   DBG_TOTAL_FID_ITEMS
}Dbg_FID_T;

typedef enum
{
   DBG_VERB_LVL,
   DBG_INFO_LVL,
   DBG_WARN_LVL,
   DBG_FAULT_LVL
}Dbg_Lvl_T;
/*=====================================================================================* 
 * Exported Object Declarations
 *=====================================================================================*/

/*=====================================================================================* 
 * Exported Function Prototypes
 *=====================================================================================*/

/*=====================================================================================* 
 * Exported Function Like Macros
 *=====================================================================================*/

#ifdef __cplusplus
}
#endif
/*=====================================================================================* 
 * dbg_log_types.
 *=====================================================================================*
 * Log History
 *
 *=====================================================================================*/
#endif /*DBG_LOG_TYPES_H_*/
