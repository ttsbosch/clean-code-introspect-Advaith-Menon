#include "StringCalculator.h"
#include<iostream>
#include<string>
using namespace std;
int StringCalculator::add(string input)
{
  if(input.compare("")==0 || input == "0")
    return 0;
  int sum = 0;
  std::stringstream ss(input);
  std::string token;
  while (getline(ss, token, ',')) {
        sum += std::stoi(token);
    }
  return sum;
}
