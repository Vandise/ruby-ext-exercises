require "test_helper"

require "constraint"

class ConstraintTest < Minitest::Test
  def test_that_it_has_a_version_number
    refute_nil ::Constraint::VERSION
  end
  def test_that_it_returns_a_string()
    value = ::Constraint::quote()
    puts value
    assert value.class, String
  end
end
