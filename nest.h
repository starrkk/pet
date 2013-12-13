#ifndef PET_NEST_H
#define PET_NEST_H

#include <isl/aff.h>
#include <isl/id.h>
#include <isl/space.h>
#include <isl/set.h>
#include <isl/map.h>

#include "pet.h"

#if defined(__cplusplus)
extern "C" {
#endif

__isl_give isl_id *pet_nested_clang_expr(isl_ctx *ctx, void *expr);
__isl_give isl_id *pet_nested_pet_expr(__isl_take pet_expr *expr);

int pet_nested_in_id(__isl_keep isl_id *id);
int pet_nested_in_map(__isl_keep isl_map *map, int pos);
int pet_nested_any_in_space(__isl_keep isl_space *space);
int pet_nested_any_in_pw_aff(__isl_keep isl_pw_aff *pa);
int pet_nested_n_in_space(__isl_keep isl_space *space);
int pet_nested_n_in_set(__isl_keep isl_set *set);
int pet_nested_n_in_map(__isl_keep isl_map *map);

__isl_give isl_set *pet_nested_remove_from_set(__isl_take isl_set *set);

struct pet_stmt *pet_stmt_remove_nested_parameters(struct pet_stmt *stmt);

#if defined(__cplusplus)
}
#endif

#endif
