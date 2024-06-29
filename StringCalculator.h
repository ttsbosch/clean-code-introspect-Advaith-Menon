#include<iostream>
#include<string>
#include <stdexcept>
#include <vector>
#include <algorithm>
using namespace std;
class StringCalculator
{
   public:
   int add(string input);
   void containsNegative(const std::string& input);
   std::vector<std::string> split(const std::string& s, const std::string& delimiters);
   int convertAndSum(const std::vector<std::string>& tokens);
};
