#include "constraint.h"

VALUE constraint;
VALUE constraint_version;

void Init_constraint() {
  constraint_version = rb_str_new("1.0", 4);
  constraint = rb_define_module("Constraint");
  rb_define_const(constraint, "VERSION", constraint_version);
  init_character_counter();
}

static VALUE count_characters() {
  char c_buffer[50];
  char c_out_str[100];
  int c_str_len = 0;
  printf("What is the input string? ");
  scanf("%s", c_buffer);
  c_str_len = sprintf(c_out_str, "%s has %lu characters.", c_buffer, strlen(c_buffer));
  return rb_str_new(c_out_str, c_str_len);
}

void init_character_counter() {
  rb_define_method(rb_cObject, "count_characters", count_characters, 0); 
}
