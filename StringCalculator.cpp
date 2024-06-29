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
std::vector<std::string> StringCalculator::split(const std::string& s, const std::string& delimiters) {
    std::vector<std::string> tokens;
    size_t start = 0;
    size_t end = s.find_first_of(delimiters);
    while (end != std::string::npos) {
        if (end != start) {
            tokens.push_back(s.substr(start, end - start));
        }
        start = end + 1;
        end = s.find_first_of(delimiters, start);
    }
    if (start < s.length()) {
        tokens.push_back(s.substr(start));
    }
    return tokens;
}
int StringCalculator::convertAndSum(const std::vector<std::string>& tokens) {
    int sum = 0;
    for (const std::string& token : tokens) {
        if (!token.empty()) {
            sum += std::stoi(token);
        }
    }
    return sum;
}

int StringCalculator::add(string input)
{
  if(input.compare("")==0)
    return 0;
  int sum = 0;
  std::stringstream ss(input);
  std::string token;
  containsNegative(input);
  std::vector<std::string> tokens = split(input, ",\n");
  return convertAndSum(tokens);
}
