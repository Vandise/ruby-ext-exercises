require "test_helper"

require "constraint"

class ConstraintTest < Minitest::Test
  def test_that_it_has_a_version_number
    refute_nil ::Constraint::VERSION
  end
  def test_character_counter_returns_string
    char_count = ::Constraint::count_characters()
    assert char_count.class, String
  end
end
