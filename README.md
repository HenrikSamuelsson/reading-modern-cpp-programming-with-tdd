# Reading Modern C++ Programming with Test-Driven Development

Repository with content related to reading the book Modern C++ Programming with Test-Driven Development - Code Better Sleep Better, written by Jeff Langr.

## Bazel

Currently using Bazel to build the projects.

Commmand to build is:

```bash
bazel test --test_output=all //:soundex_test
```

Where soundex_test is the "name" variable in the Bazel BUILD file.
