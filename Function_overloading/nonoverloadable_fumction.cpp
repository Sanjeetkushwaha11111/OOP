// In C++, following function declarations cannot be overloaded.
//

#include <bits/stdc++.h>
using namespace std;

// 1) Function declarations that differ only in the return type.
// i.e., function having different return type but same name
/*int sum(int a, int b){
  return a+b;
}

char sum(int a, int b){
  return a+b;
}*/

//2) Member function declarations with the same name and the name
//  parameter-type-list cannot be overloaded if any of them is a static member
//  function declaration. For example, following program fails in compilation.

void add(int a, int b)
{
  return;
}

static void add(int a, int b, int c)
{
  return;
}

int main(int argc, char const *argv[])
{

  // 1):-
  /*   std::cout << "Sum of 2 and 3 is "<<sum(2,3) << '\n';
   std::cout << "Sum of 2 and 3 is "<<sum(2,3) << '\n';    */

  //  error: ambiguating new declaration of 'char sum(int, int)'
  // char sum(int a, int b)

  // 2):-
  std::cout << "Sum of 2 and 3 is " << add(2, 3) << '\n';
  std::cout << "Sum of 2, 7 and 7 is " << add(2, 5, 7) << '\n';

  return 0;
}
