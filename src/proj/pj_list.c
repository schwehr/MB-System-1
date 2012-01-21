/* Added HAVE_CONFIG_H for autogen files */
#ifdef HAVE_CONFIG_H
#  include <mbsystem_config.h>
#endif


/* Projection System: default list of projections
** Use local definition of PJ_LIST_H for subset.
*/
#define PJ_LIST_H "pj_list.h"
#include "projects.h"

struct PJ_LIST  *pj_get_list_ref()

{
    return pj_list;
}
