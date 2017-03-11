#include "constraint.h"

VALUE constraint;
VALUE constraint_version;

void Init_constraint() {
  constraint_version = rb_str_new("1.0", 4);
  constraint = rb_define_module("Constraint");
  rb_define_const(constraint, "VERSION", constraint_version);
  init_quotes();
}

/*
 * Before people start yelling at me about how extensions should
 * function:
 *  It would be best to simply create a method
 *  that will take parameters and print out the content.
 *  For now stick to what the exercise says to do.
 */

static VALUE quote_person() {
  char *c_quote_buffer = malloc(MAX_INPUT_SIZE);
  char *c_author = malloc(MAX_INPUT_SIZE);
  char *c_out_buffer = malloc(MAX_INPUT_SIZE * 2);
  unsigned int c_len = 0;

  printf("What is the quote? ");
  fgets(c_quote_buffer, MAX_INPUT_SIZE, stdin);
  printf("Who said it? ");
  fgets(c_author, MAX_INPUT_SIZE, stdin);
  c_len = sprintf(c_out_buffer, "%s says \"%s\"", c_author, c_quote_buffer);

  return rb_str_new(c_out_buffer, c_len);
}

void init_quotes() {
  rb_define_method(rb_cObject, "quote", quote_person, 0);
}
