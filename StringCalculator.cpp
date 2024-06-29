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
    size_t end;
    
    while ((end = s.find_first_of(delimiters, start)) != std::string::npos) {
        tokens.emplace_back(s.substr(start, end - start));
        start = end + 1;
    }
    
    tokens.emplace_back(s.substr(start));
    return tokens;
}
bool StringCalculator::isNumberGreaterThan1000(int num)
{
   if(num>1000)
      return true;
    return false;
}
int StringCalculator::convertAndSum(const std::vector<std::string>& tokens) {
   int sum = 0; 
   for (const auto& token : tokens) {
        if (!token.empty()) {
            int number = std::stoi(token);
            if (isNumberGreaterThan1000(number) == false) {
                sum += number;
            }
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
