#include <bits/stdc++.h>
using namespace std;

class animals
{
private:
  string breed;
  int age;

public:
  setdata(int ages, string catogries);
  string color;
  string name;
  string animalsCat;

  getdata()
  {
    std::cout << "Animal is " << animalsCat << '\n';
    std::cout << "Name is " << name << '\n';
    std::cout << "Color is " << color << '\n';
    std::cout << "breed is " << breed << '\n';
    std::cout << "age is " << age << '\n';
  }
};

animals ::setdata(int ages, string catogries)
{
  age = ages;
  breed = catogries;
}

int main(int argc, char const *argv[])
{

  animals dog;
  dog.animalsCat = "Dog";
  dog.color = "Black";
  dog.name = "Happy";
  dog.setdata(5, "Lambdore");
  dog.getdata();

  std::cout << '\n'
            << '\n'
            << '\n'
            << '\n';

  animals cat;
  cat.animalsCat = "Cat";
  cat.color = "Brown";
  cat.name = "Afsi";
  cat.setdata(3, "Indian");
  cat.getdata();
  return 0;
}
