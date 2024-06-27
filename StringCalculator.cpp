#include "StringCalculator.h"
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
void StringCalculator::containsNegative(const std::string& input) {
   if (input.find('-') != std::string::npos) {
        throw std::runtime_error("Negative numbers not allowed");
    }
}
int StringCalculator::add(string input)
{
  if(input.compare("")==0)
    return 0;
  int sum = 0;
  std::stringstream ss(input);
  std::string token;
  containsNegative(input);
  char delimiter = ',';

    while (getline(ss, token, delimiter)) {
        sum += std::stoi(token);
    }
   return sum;
}
