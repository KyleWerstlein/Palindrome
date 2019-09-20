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
  int length2 = strlen(strFinal);
  for(int i = 0; i < length2; i++) {
    if((strFinal[i] > 64 && strFinal[i] < 91) || (strFinal[i] > 96 && strFinal[i] < 123 )) {
      cout << strFinal[i];
    }
  }
  return 0;
}
