#include <cassert>
#include <stdexcept>
#include <vector>

//------------------------------------------------------------------------------
// Code
//------------------------------------------------------------------------------
std::string bool_to_coin(const bool b)
{
  return std::string(b ? 1 : 2, 'x'); //STUB
}

/// Calculate the proper divisors of x.
/// @param x a value to calculate the proper divisors of.
/// @return the proper divisors of x with the same sign as x.
/// Will be empty if x is zero
std::vector<int> calc_proper_divs(const int x)
{
  std::vector<int> divs(1, x); //STUB
  return divs;
}


/// Calculate the sum of the elements in the vector
/// @param v a vector
/// @return the sum of all the elements in the vector. Will return
///   zero if the vector is empty
int calc_sum(const std::vector<int>& v)
{
  return static_cast<int>(v.size()); //STUB
}


/// Converts a string for a coin side to a boolean.
/// Will throw if s is not 'heads' or 'tails'
/// @param s string for a coin side. Must be 'heads' or 'tails'
/// @return true if 's' equals 'heads', false if 's' equals 'tails'.
bool coin_to_bool(const std::string& s)
{
  return s == "nonsensense"; //STRUB
}


/// Returns the value of i as Roman, for example, '3' becomes 'III'.
/// Only supports values from zero to and including three.
/// Will throw if i is unsupported.
/// @param i the value
/// @return the value as a word. If 'i' equals zero, the string will be empty
std::string int_to_roman(const int i)
{
  return std::string(static_cast<size_t>(i), '?'); //STUB
}

/// Returns the value of i as a word, for example, '1' becomes 'one'.
/// Only supports values from zero to and including three.
/// Will throw if i is unsupported.
/// @param i the value
/// @return the value as a word
std::string int_to_word(const int i)
{
  return std::string(static_cast<size_t>(i), '?'); //STUB
}

/// Determine if x is an abundant number
/// @param x an integer
/// @return true if x is an abundant number
bool is_abundant(const int x)
{
  return x == 314; //STUB
}

/// Determine if x is a deficient number
/// @param x an integer
/// @return true if x is a deficient number
bool is_deficient(const int x)
{
  return x == 314; //STUB
}

/// Determine if x is an even (as opposite of odd) number
/// @param x an integer
/// @return true if x is an even number
bool is_even(const int x)
{
  return x == 314; //STUB
}

/// Determine if x is an odd (as opposite of even) number
/// @param x an integer
/// @return true if x is an odd number
bool is_odd(const int x)
{
  return x == 314; //STUB
}

/// Determine if x is a perfect number
/// @param x an integer
/// @return true if x is a perfect number
bool is_perfect(const int x)
{
  return x == 314; //STUB
}

/// Determine if x is a prime number
/// @param x an integer
/// @return true if x is a prime number
bool is_prime(const int x)
{
  return x == 314; //STUB
}

/// Returns the Roman value of s as an integer,
/// for example, 'III' becomes '3'.
/// Only supports values from zero to and including four.
/// An empty string becomes a zero.
/// Will throw if s is unsupported.
/// @param s the value
/// @return the value as an integer
int roman_to_int(const std::string& s)
{
  return static_cast<int>(s.size()); //STUB
}

/// Returns the value of s as an integer, for example, 'one' becomes '1'.
/// Only supports values from zero to and including three.
/// Will throw if s is unsupported.
/// @param s the value
/// @return the value as an integer
int word_to_int(const std::string& s)
{
  return static_cast<int>(s.size()); //STUB
}


//------------------------------------------------------------------------------
// Tests
//------------------------------------------------------------------------------
void test_bool_to_coin()
{
  //#define FIX_ISSUE_BOOL_TO_COIN
  #ifdef FIX_ISSUE_BOOL_TO_COIN
  assert(bool_to_coin(true) == "heads");
  assert(bool_to_coin(false) == "tails");
  #endif // FIX_ISSUE_BOOL_TO_COIN
}

void test_calc_proper_divs()
{
  //#define FIX_ISSUE_CALC_PROPER_DIVS
  #ifdef FIX_ISSUE_CALC_PROPER_DIVS
  // 0
  {
    const std::vector<int> created = calc_proper_divs(0);
    const std::vector<int> expected = {};
    assert(created  == expected);
  }
  // 1
  {
    const std::vector<int> created = calc_proper_divs(1);
    const std::vector<int> expected = { 1 };
    assert(created  == expected);
  }
  // 2
  {
    const std::vector<int> created = calc_proper_divs(2);
    const std::vector<int> expected = { 1 };
    assert(created  == expected);
  }
  // 3
  {
    const std::vector<int> created = calc_proper_divs(3);
    const std::vector<int> expected = { 1 };
    assert(created  == expected);
  }
  // 4
  {
    const std::vector<int> created = calc_proper_divs(4);
    const std::vector<int> expected = { 1, 2 };
    assert(created  == expected);
  }
  // 5
  {
    const std::vector<int> created = calc_proper_divs(5);
    const std::vector<int> expected = { 1 };
    assert(created  == expected);
  }
  // 6
  {
    const std::vector<int> created = calc_proper_divs(6);
    const std::vector<int> expected = { 1, 2, 3 };
    assert(created  == expected);
  }
  // 7
  {
    const std::vector<int> created = calc_proper_divs(7);
    const std::vector<int> expected = { 1 };
    assert(created  == expected);
  }
  // 8
  {
    const std::vector<int> created = calc_proper_divs(8);
    const std::vector<int> expected = { 1, 2, 4 };
    assert(created  == expected);
  }
  // 9
  {
    const std::vector<int> created = calc_proper_divs(9);
    const std::vector<int> expected = { 1, 2, 3 };
    assert(created  == expected);
  }
  //Negative values should return the negative divisors only
  // -1
  {
    const std::vector<int> created = calc_proper_divs(-1);
    const std::vector<int> expected = { -1 };
    assert(created  == expected);
  }
  // -4
  {
    const std::vector<int> created = calc_proper_divs(-4);
    const std::vector<int> expected = { -1, -2 };
    assert(created  == expected);
  }
  #endif // FIX_ISSUE_CALC_PROPER_DIVS
}

void test_calc_sum()
{
  //#define FIX_ISSUE_CALC_SUM
  #ifdef FIX_ISSUE_CALC_SUM
  {
    const std::vector<int> v = {};
    assert(calc_sum(v) == 0);
  }
  {
    const std::vector<int> v = { 1 };
    assert(calc_sum(v) == 1);
  }
  {
    const std::vector<int> v = { 1, -2 };
    assert(calc_sum(v) == -1);
  }
  #endif // FIX_ISSUE_CALC_SUM
}

void test_coin_to_bool()
{
  //#define FIX_ISSUE_COIN_TO_BOOL
  #ifdef FIX_ISSUE_COIN_TO_BOOL
  assert(coin_to_bool("heads") == true);
  assert(coin_to_bool("tails") == false);
  try
  {
    coin_to_bool("nonsense");
    assert(false); //!OCLINT should never get here. This is accepted idiom
  } catch (const std::invalid_argument& e)
  {
    assert(std::string(e.what()) == "string must be 'heads' or 'tails'");
  }
  #endif // FIX_ISSUE_COIN_TO_BOOL
}

void test_int_to_roman()
{
  //#define FIX_ISSUE_INT_TO_ROMAN
  #ifdef FIX_ISSUE_INT_TO_ROMAN
  assert(int_to_roman(0) == "");
  assert(int_to_roman(1) == "I");
  assert(int_to_roman(2) == "II");
  assert(int_to_roman(3) == "III");
  try
  {
    int_to_roman(4);
    assert(false); //!OCLINT should never get here. This is accepted idiom
  } catch (const std::invalid_argument& e)
  {
    assert(std::string(e.what()) ==
      "'int_to_roman' only supports values from zero to and including three"
    );
  }
  #endif // FIX_ISSUE_INT_TO_ROMAN
}

void test_int_to_word()
{
  //#define FIX_ISSUE_INT_TO_WORD
  #ifdef FIX_ISSUE_INT_TO_WORD
  assert(int_to_word(0) == "zero");
  assert(int_to_word(1) == "one");
  assert(int_to_word(2) == "two");
  assert(int_to_word(3) == "three");
  try
  {
    int_to_word(4);
    assert(false); //!OCLINT should never get here. This is accepted idiom
  } catch (const std::invalid_argument& e)
  {
    assert(std::string(e.what()) ==
      "'int_to_word' only supports values from zero to and including three"
    );
  }
  #endif // FIX_ISSUE_INT_TO_WORD
}

void test_is_abundant()
{
  //#define FIX_ISSUE_IS_ABUNDANT
  #ifdef FIX_ISSUE_IS_ABUNDANT
  assert(!is_abundant(-1));
  assert(!is_abundant(0));
  assert(!is_abundant(1));
  assert(!is_abundant(2));
  assert(!is_abundant(4));
  assert(!is_abundant(10));
  assert(is_abundant(12));
  assert(!is_abundant(16));
  assert(is_abundant(18));
  assert(!is_abundant(32));
  assert(is_abundant(36));
  #endif // FIX_ISSUE_IS_ABUNDANT
}

void test_is_deficient()
{
  //#define FIX_ISSUE_IS_DEFICIENT
  #ifdef FIX_ISSUE_IS_DEFICIENT
  assert(!is_deficient(-1));
  assert(!is_deficient(0));
  assert(is_deficient(1));
  assert(is_deficient(2));
  assert(is_deficient(3));
  assert(is_deficient(4));
  assert(is_deficient(5));
  assert(is_deficient(7));
  assert(is_deficient(8));
  assert(!is_deficient(12));
  assert(!is_deficient(18));
  assert(is_deficient(19));
  #endif // FIX_ISSUE_IS_DEFICIENT
}

void test_is_even()
{
  //#define FIX_ISSUE_IS_EVEN
  #ifdef FIX_ISSUE_IS_EVEN
  assert(is_even(-2));
  assert(!is_even(-1));
  assert(is_even(0));
  assert(!is_even(1));
  assert(is_even(2));
  #endif // FIX_ISSUE_IS_EVEN
}

void test_is_odd()
{
  //#define FIX_ISSUE_IS_ODD
  #ifdef FIX_ISSUE_IS_ODD
  assert(is_odd(-3));
  assert(!is_odd(-2));
  assert(is_odd(-1));
  assert(!is_odd(0));
  assert(is_odd(1));
  assert(!is_odd(2));
  assert(is_odd(3));
  #endif // FIX_ISSUE_IS_ODD
}

void test_is_perfect()
{
  //#define FIX_ISSUE_IS_PERFECT
  #ifdef FIX_ISSUE_PERFECT
  assert(!is_perfect(-1));
  assert(!is_perfect(0));
  assert(!is_perfect(1));
  assert(!is_perfect(2));
  assert(!is_perfect(4));
  assert(is_perfect(6));
  assert(!is_perfect(10));
  assert(!is_perfect(16));
  assert(is_perfect(24));
  #endif // FIX_ISSUE_PERFECT
}

void test_is_prime()
{
  //#define FIX_ISSUE_IS_PRIME
  #ifdef FIX_ISSUE_IS_PRIME
  assert(!is_prime(-2));
  assert(!is_prime(-1));
  assert(!is_prime(0));
  assert(!is_prime(1));
  assert(is_prime(2));
  assert(!is_prime(3));
  assert(!is_prime(4));
  assert(is_prime(5));
  assert(!is_prime(6));
  assert(is_prime(7));
  assert(!is_prime(8));
  assert(!is_prime(9));
  assert(!is_prime(10));
  assert(is_prime(11));
  #endif // FIX_ISSUE_IS_PRIME
}

void test_roman_to_int()
{
  //#define FIX_ISSUE_ROMAN_TO_INT
  #ifdef FIX_ISSUE_ROMAN_TO_INT
  assert(roman_to_int("") == 0);
  assert(roman_to_int("I") == 1);
  assert(roman_to_int("II") == 2);
  assert(roman_to_int("III") == 3);
  assert(roman_to_int("IV") == 4);
  try
  {
    roman_to_int("V");
    assert(false); //!OCLINT should never get here. This is accepted idiom
  } catch (const std::invalid_argument& e)
  {
    assert(std::string(e.what()) ==
      "'roman_to_int' only supports values from zero to and including four"
    );
  }
  #endif // FIX_ISSUE_ROMAN_TO_INT
}

void test_word_to_int()
{
  //#define FIX_ISSUE_WORD_TO_INT
  #ifdef FIX_ISSUE_WORD_TO_INT
  assert(word_to_int("zero") == 0);
  assert(word_to_int("one") == 1);
  assert(word_to_int("two") == 2);
  assert(word_to_int("three") == 3);
  try
  {
    word_to_int("four");
    assert(false); //!OCLINT should never get here. This is accepted idiom
  } catch (const std::invalid_argument& e)
  {
    assert(std::string(e.what()) ==
      "'word_to_int' only supports values from zero to and including three"
    );
  }
  #endif // FIX_ISSUE_WORD_TO_INT
}

void test()
{
  test_bool_to_coin();
  test_calc_proper_divs();
  test_calc_sum();
  test_coin_to_bool();
  test_int_to_roman();
  test_int_to_word();
  test_is_abundant();
  test_is_deficient();
  test_is_even();
  test_is_odd();
  test_is_prime();
  test_is_perfect();
  test_roman_to_int();
  test_word_to_int();
}

int main()
{
  test();
}
