
#include "CxxTemplate.h"
#include "NewClass.h"
#include "SumFunc.h"

#include <string>
#include <iostream>
#include <chrono>
#include <string>

using namespace std::chrono_literals;


namespace cxxt {

CxxApplication::CxxApplication( int argc, char *argv[] ) {
  std::cout << "Hello CMake." << std::endl;
  ::NewClass newClass;
  newClass.run();

  ::SumFunc sumFunc;
  std::cout << "sum of 3 and 4: " << sumFunc.sum(3, 4) << std::endl;
}

CxxApplication::~CxxApplication() {
  // TODO cleanup
}

} // namespace cxxt


int main( int argc, char *argv[] ) {
  cxxt::CxxApplication app( argc, argv );

  return 0;
}
