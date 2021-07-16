#include <bits/stdc++.h>
using namespace std;

class Binary
{
private:
  string s;

public:
  getBinaryNumber(void);
  checkBinaryNumber(void);
  complimantBinaryNumber(void);
};

void Binary ::getBinaryNumber(void)
{
  std::cout << "Enter Binar Number: ";
  std::cin >> s;
}

void Binary ::checkBinaryNumber(void)
{
  for (int i = 0; i < s.length(); i++)
  {
    if (s.at(i) == '0' && s.at(i) == '1')
    {
      std::cout << "Binary Number" << '\n';
    }
    std::cout << "Not Binary Number." << '\n';
  }
}

void Binary ::complimantBinaryNumber(void)
{
  for (int i = 0; i < s.length(); i++)
  {

    if (s.at(i) == 0)
    {
      s.at(i) = 1;
    }
    else
      s.at(i) = 0;
  }
}

int main(int argc, char const *argv[])
{
  Binary b;
  b.getBinaryNumber();
  b.checkBinaryNumber();
  b.complimantBinaryNumber();
  return 0;
}
