## TDD starter template
This contains starter code for a C++ project built with CMake and using code from third party sources:
- Googletest (included by CMake as an `ExternalProject`)
- nlohmann/json (included as a single header file)
- xtest (included by CMake using `find_package`)

Relatively flat directory structure:
```
 |- include  (for headers)
 |
 |- src      (for source code except tests)
 |
 |- tests    (for test code)
 |
 |- third_party
      |
      |- include    (for third-party headers)
      |     |
      |    ...
     ...
 ```
