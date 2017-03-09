require "test_helper"

require "constraint"

class ConstraintTest < Minitest::Test
  def test_that_it_has_a_version_number
    refute_nil ::Constraint::VERSION
  end
  def test_say_hello_returns_string
    greet = ::Constraint::say_hello()
    assert_equal greet.class, String
  end
end
