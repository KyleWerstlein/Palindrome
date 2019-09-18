#include <cstring>
#include <iostream>

using namespace std;

int main() {
  char str[80];
  char str2[80];
  cout << "input your string!" << endl;
  cin.get(str, 81);
  cin.get();
  int length = strlen(str);
  int letterCount = 0;
  int nonLetterCount = 0;
  for(int i = 0; i < length; i++) {
    if((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123)) {
      str2[letterCount] = str[i];
      letterCount++;
    }
    else {
      cout << str[i] << " is not a letter" << endl;
      nonLetterCount++;
    }
  }
  length = length - nonLetterCount;
  char strFinal[length];
  for( int i = 0; i < length; i++) {
    strFinal[i] = str2[length - 1 - i];
  }
  cout << "length " << strlen(str2) << endl;
  cout << "str " << str << endl;
  cout << "str2 " << str2 << endl;
  cout << "strFinal " << strFinal << endl;
  return 0;
}
