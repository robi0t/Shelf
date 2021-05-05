#ifndef VISITOR_H
#define VISITOR_H
#include "AST.h"

typedef struct VISITOR_STRUCT
{
  //todo: remove this
} visitor_T;

visitor_T* init_visitor();

AST_T* visitor_visit(visitor_T* visitor, AST_T* node);

AST_T* visitor_visit_variable_definition(visitor_T* visitor, AST_T* node);

AST_T* visitor_visit_function_definition(visitor_T* visitor, AST_T* node);

AST_T* visitor_visit_variable(visitor_T* visitor, AST_T* node);

AST_T* visitor_visit_function_call(visitor_T* visitor, AST_T* node);

AST_T* visitor_visit_string(visitor_T* visitor, AST_T* node);

AST_T* visitor_visit_number(visitor_T* visitor, AST_T* node);

AST_T* visitor_visit_compound(visitor_T* visitor, AST_T* node);
#endif
