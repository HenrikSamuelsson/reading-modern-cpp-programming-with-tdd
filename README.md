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

### Chapter 3

A unit test have up to four parts:

1. Setup of context (Arrange/Given)
2. Invoke behavior to verify (Act/When)
3. Verify expected outcome (Assert/Then)
4. Cleanup
