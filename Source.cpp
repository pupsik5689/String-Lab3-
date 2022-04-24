#include "String.h"
#include <string>

int main()
{
  TString a;
  TString b(10, 'F');
  TString c (b);
  a = b;
  std::cout << a.GetStr() <<"\n";
  //std::cin >> c;
  //std::cout << c;

  TString d;
  d = a + b;

  if (a == b)
  {
    std::cout << "YES\n";
  }
  else
  {
    std::cout << "NO\n";
  }

  std::cout << d.GetLen() << "\n";

  d = "efcdeefgfeffef";

  std::cout << "\nFirstTimeWord " << d.FWord("gf") << "\n\n";
  d.KStr(6);


  std::cout << "\nAllWordIndexes ";  d.IndsWord("ef");
  std::cout << "\n" << d.FSymb('g');
  std::cout << "\nMostCommonSymb " << d.MostCommonSymb() << "\n";

  std::cout << "\nLetterWithoutRepeat " << d.WithoutRepeat() << "\n";
  
  
  std::cout << "\nCountLetters\n"; d.CountLetter();
  
  
  std::cout << "\n\n\n";

  if (a > d)
    std::cout << "YES1\n";
  else
    std::cout << "NO1\n";

  if (a > d)
    std::cout << "YES2\n";
  else
    std::cout << "NO2\n";

  a = "abcdefg";
  d = "abcdeeg";
  if (a > d)
    std::cout << "YES3\n";
  else
    std::cout << "NO3\n";

  std::cout << a[5] << "\n";

  return 0;
}
