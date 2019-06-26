# Lesson 1

## Setup

 * GitHub repo name: `cicone`
 * Travis CI: enabled
    * `cppcheck`
    * OCLint 
    * Codecov 
 * Testing: custom

## Files

 * [lesson_1/.travis.yml](lesson_1/.travis.yml)
 * [lesson_1/README.md](lesson_1/README.md)
 * [lesson_1/scripts/do_oclint](lesson_1/scripts/do_oclint)
 * [lesson_1/scripts/get_code_cov](lesson_1/scripts/get_code_cov)
 * [lesson_1/scripts/install_oclint](lesson_1/scripts/install_oclint)

## Issues

### Create `bool_to_coin`

 * Difficulty: 3/10

`bool_to_coin` is a function to convert a boolean to
a coin side: `true` becomes the string `heads`, where
`false` becomes the string `tails`.

It's current definition, however, is clearly just a stub.
Enable its tests and make the function pass all tests.

### Create `calc_proper_divs`

 * Difficulty: 4/10

`calc_proper_divs` is a function to calculate all proper divisors of a number
in one vector. A proper divisor `p` of a number `n` is a value less than `n`, 
for which `n % p == 0`.
For example, 6 has proper divisors 1, 2, 3.

It's current definition, however, is clearly just a stub.
Enable its tests and make the function pass all tests.

### Create `calc_sum`

 * Difficulty: 4/10

`calc_sum` is a function to sum multiple values.

It's current definition, however, is clearly just a stub.
Enable its tests and make the function pass all tests.

### Create `coin_to_bool`

 * Difficulty: 3/10

`coin_to_bool` is a function to convert a coin side (represented
as a string) to a boolean: the string `heads` becomes `true`, where
the string `tails` becomes `false`.

It's current definition, however, is clearly just a stub.
Enable its tests and make the function pass all tests.

### Create `int_to_roman`

 * Difficulty: 4/10

`int_to_roman` is a function to convert an integer value
to a Roman string, for example `3` becomes `III`.

It's current definition, however, is clearly just a stub.
Enable its tests and make the function pass all tests.

For now, it only will support values from 0 to and including 3.
Create a new Issue if you want to extend the range
of supported values.

### Create `int_to_word`

 * Difficulty: 3/10

`int_to_word` is a function to convert an integer value
to its written and spoken equivalent, for example `3` becomes `three`.

It's current definition, however, is clearly just a stub.
Enable its tests and make the function pass all tests.

For now, it only will support values from 0 to and including 3.
Create a new Issue if you want to extend the range
of supported values.

### Create `is_abundant` 1: use

Depends on:

 * [ ] `calc_sum`
 * [ ] `calc_proper_divs`

 * Difficulty: 5/10

`is_abundant` is a function to determine if a number is abundant number.
A number is abundant if the sum of its proper divisor exceeds itself.
For example, 24 is abundant, as its the proper divisors are 1, 2, 3, 4, 6, 8, and 12.
The sum of these is 36. Because 36 is more than 24, the number is abundant.

:warning: Use `calc_sum` and `calc_proper_divs` to implement `is_abundant` :warning:

It's current definition, however, is clearly just a stub.
Enable its tests and make the function pass all tests.

### Create `is_deficient`

Depends on:

 * [ ] `calc_sum`
 * [ ] `calc_proper_divs`

 * Difficulty: 5/10

`is_deficient` is a function to determine if a number is deficient.
A number is deficient if the sum of its proper divisor is less than itself.
For example, 8 is deficient, as its the proper divisors are 1, 2, 4.
The sum of these is 7. Because 7 is less than 8, the number is deficient.

:warning: Use `calc_sum` and `calc_proper_divs` to implement `is_deficient` :warning:

It's current definition, however, is clearly just a stub.
Enable its tests and make the function pass all tests.

### Create `is_even`

 * Difficulty: 3/10

`is_even` is a function to determine if a number is even (as opposite
of odd), e.g. 2 is an even number.

It's current definition, however, is clearly just a stub.
Enable its tests and make the function pass all tests.


### Create `is_odd`

 * Difficulty: 3/10

`is_odd` is a function to determine if a number is odd (as opposite
of even), e.g. 3 is an odd number.

It's current definition, however, is clearly just a stub.
Enable its tests and make the function pass all tests.

### Create `is_perfect`

Depends on:

 * [ ] `calc_sum`
 * [ ] `calc_proper_divs`

 * Difficulty: 5/10

`is_perfect` is a function to determine if a number is a perfect number.
A perfect number has the sum of its proper divisor equal to itself.
For example, 6 has proper divisors 1, 2, 3. Because 1 + 2 + 3 == 6, 6 is
a perfect number.

:warning: Use `calc_sum` and `calc_proper_divs` to implement `is_perfect` :warning:

It's current definition, however, is clearly just a stub.
Enable its tests and make the function pass all tests.

### Create `is_prime`

 * Difficulty: 6/10

`is_prime` is a function to determine if a number is a prime number.

It's current definition, however, is clearly just a stub.
Enable its tests and make the function pass all tests.

### Create `roman_to_int`

 * Difficulty: 4/10

`roman_to_int` is a function to convert a
Roman string to an integer value
to a Roman string, for example `IV` becomes `4`.

It's current definition, however, is clearly just a stub.
Enable its tests and make the function pass all tests.

For now, it only will support values from 0 to and including 4.
Create a new Issue if you want to extend the range
of supported values.

### Create `word_to_int`

 * Difficulty: 4/10

`word_to_int` is a function to convert the written/spoken form of
a number to an integer value, for example the string `three` becomes `3`.

It's current definition, however, is clearly just a stub.
Enable its tests and make the function pass all tests.

For now, it only will support values from 0 to and including 3.
Create a new Issue if you want to extend the range
of supported values.
