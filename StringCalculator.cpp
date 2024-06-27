#include "StringCalculator.h"
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
bool StringCalculator::containsNegative(const std::string& input) {
    std::stringstream ss(input);
    std::string token;
    while (getline(ss, token, ',')) {
        int num = std::stoi(token);
        if (num < 0) {
            return true;
        }
    }
    return false;
}


int StringCalculator::add(string input)
{
  if(input.compare("")==0)
    return 0;
  int sum = 0;
  std::stringstream ss(input);
  std::string token;
  if (containsNegative(input)) {
        throw std::runtime_error("Negative numbers not allowed");
    }
  while (getline(ss, token, ',')) {
        int num = std::stoi(token);
        sum += num;
    }
  return sum;
}
