// Samuel Verdugo
// srvdugo@csu.fullerton.edu
// @SamDugo26
// Partners: @elizabethdle

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  int n{int(arguments.size()) - 1};

  if (n < 1) {
    std::cout << "error: You must supply at least one number\n";
    return 1;
  }

  double total{0.0};
  bool first{true};
  for (const std::string& argument : arguments) {
    if (first) {
      first = false;
    } else {
      double number{std::stod(argument, nullptr)};
      total += number;
    }
  }

  double average{total / n};

  std::cout << "average = " << average << "\n";

  return 0;
}