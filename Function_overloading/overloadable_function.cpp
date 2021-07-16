// Function overloading is a feature of object oriented programming
// where two or more functions can have the same name but different parameters.
//
// When a function name is overloaded with different jobs it is called Function Overloading.
//
// In Function Overloading “Function” name should be
// the same and the arguments should be different.
//
// Function overloading can be considered as an example of
// polymorphism feature in C++.


int sum(int a, int b){
  return a+b;
}

int sum(int a,int b, int c){
  return a+b+c;
}


#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {


  //here we add numbers by passing them to function of same name
  std::cout << "Sum of 2 and 5 is "<<sum(2,5) << '\n';

  //here we add numbers by passing them to function of same name
  //In seconde term we pass different parameters with same function

  std::cout << "Sum of 1, 2 and 3 is "<<sum(1,2,3) << '\n';

  return 0;
}
