#include "StringCalculator.h"
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int StringCalculator::add(string input)
{
  if(input.compare("")==0)
    return 0;
  int sum = 0;
  std::stringstream ss(input);
  std::string token;
  while (getline(ss, token, ',')) {
        int num = std::stoi(token);
        if (num < 0) {
            throw std::runtime_error("Negative numbers not allowed");
        }
        sum += num;
    }
  return sum;
}
