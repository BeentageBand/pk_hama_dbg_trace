/*=====================================================================================*/
/**
 * dbg_log.h
 * author : puch
 * date : Oct 22 2015
 *
 * description : Any comments
 *
 */
/*=====================================================================================*/
#ifndef DBG_LOG_H_
#define DBG_LOG_H_
/*=====================================================================================*
 * Project Includes
 *=====================================================================================*/
#include "dbg_log_types.h"
/*=====================================================================================* 
 * Standard Includes
 *=====================================================================================*/

/*=====================================================================================* 
 * Exported X-Macros
 *=====================================================================================*/

/*=====================================================================================* 
 * Exported Define Macros
 *=====================================================================================*/
#ifdef __cplusplus
extern "C" {
#endif
/*=====================================================================================* 
 * Exported Type Declarations
 *=====================================================================================*/

/*=====================================================================================* 
 * Exported Object Declarations
 *=====================================================================================*/

/*=====================================================================================* 
 * Exported Function Prototypes
 *=====================================================================================*/
extern void Dbg_Log_Print(Dbg_Feat_Id_T const fid, uint8_t const instance, char const * file,
      Dbg_Verbose_Lvl_T const info, int const line, char const * fmt, ...);
/*=====================================================================================* 
 * Exported Function Like Macros
 *=====================================================================================*/
#define Dbg_FID_Def(fid, instance) fid, instance, __FILE__

#define Dbg_Info(_args...) \
		Dbg_Log_Print(Dbg_FID, DBG_INFO, __LINE__, _args)

#define Dbg_Warn(args...) \
		Dbg_Log_Print(Dbg_FID, DBG_WARN, __LINE__, _args)

#ifdef __cplusplus
}
#endif
/*=====================================================================================* 
 * dbg_log.h
 *=====================================================================================*
 * Log History
 *
 *=====================================================================================*/
#endif /*DBG_LOG_H_*/
