#include <iostream>
#include "module0.h"
#include <nlohmann/json.hpp>

// for convenience
using json = nlohmann::json;

int main(){
  printf("Hello, World!\n");
  double a{4.0}, b{5.9};
  printf( "%lf %lf  \n" , squareRoot(a), cubed(b));
  //
  json j = R"(
    {
      "a":1,
      "b":[2,3,4,5]
    }
  )"_json;
  std::cout << j << '\n';

  return 1;
}
