## TDD starter template
This contains starter code for a C++ project built with CMake and using code from third party sources:
- Googletest (included by CMake as an `ExternalProject`)
- nlohmann/json (included as a single header file)
- xtest (included by CMake using `find_package`)

Relatively flat directory structure:
```
 |- include  (for public headers)
 |
 |- src      (for source code, internal headers)
 |
 |- tests    (for test code, with internal headers)
 |
 |- third_party
      |
      |- include    (for third-party headers)
      |     |
      |    ...
     ...
 ```
Note:
* Run `./test_script.sh` to compile and run tests.
* You can make `.h`, `.hpp` symlinks in `tests` folder pointing to internal headers in `src` folder to make sure they are synced.
