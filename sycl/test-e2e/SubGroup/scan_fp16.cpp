// REQUIRES: aspect-fp16
// REQUIRES: gpu

// RUN: %{build} -o %t.out
// RUN: %{run} %t.out

// This test verifies the correct work of the sub-group algorithms
// exclusive_scan() and inclusive_scan().

#include "scan.hpp"
#include <iostream>
int main() {
  queue Queue;
  check<class KernelName_dlpo, sycl::half>(Queue);
  std::cout << "Test passed." << std::endl;
  return 0;
}
