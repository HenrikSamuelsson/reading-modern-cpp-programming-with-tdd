# Reading Modern C++ Programming with Test-Driven Development

Repository with content related to reading the book Modern C++ Programming with Test-Driven Development - Code Better Sleep Better, written by Jeff Langr.

## Book Errata

<https://pragprog.com/cms/errata/lotdd-errata/>

## Bazel

Currently using Bazel to build the projects.

Command to build is:

```bash
bazel test --test_output=all //:soundex_test
```

Where soundex_test is the "name" variable in the Bazel BUILD file.

## Key Takeaways

Some notes on things learned from each chapter in the book.

### Chapter 3

#### Red-Green-Refactor Cycle

When doing test driven development so is the following cycle repeated again and again.

1. Write a test, should fail causing "red"

2. Write code to get the test to pass moving status into "green"

3. Optimize design also known as "refactor", all tests should still pass

#### Unit Test Parts

A unit test have up to four parts:

1. Setup of context (Arrange/Given)
2. Invoke behavior to verify (Act/When)
3. Verify expected outcome (Assert/Then)
4. Cleanup

#### Time Your Test Cycle

Work in tiny steps adding minimal increments to the code. For example 5 minutes to come up and setup the next test. 10 minutes to get the test to pass. And then 10 minutes refactor the code.
