#include "constraint.h"

VALUE constraint;
VALUE constraint_version;

void Init_constraint() {
  constraint_version = rb_str_new("1.0", 4);
  constraint = rb_define_module("Constraint");
  rb_define_const(constraint, "VERSION", constraint_version);
  init_saying_hello();
}

static VALUE say_hello() {
  char name[25];
  char buffer[100];
  int len = 0;
  printf("What is your name? ");
  scanf("%s", name);
  len = sprintf(buffer, "Hello, %s, nice to meet you!", name);
  return rb_str_new(buffer, len);
}

void init_saying_hello() {
  rb_define_method(rb_cObject, "say_hello", say_hello, 0);
}
