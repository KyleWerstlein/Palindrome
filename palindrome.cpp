#include <cstring>
#include <iostream>

using namespace std;

int main() {
  char str[5];
  char str2[5];
  cout << "input your string!" << endl;
  cin.get(str, 81);
  cin.get();
  int length = strlen(str);
  int letterCount = 0;
  for(int i = 0; i < length; i++) {
    if((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123)) {
      str2[letterCount] = str[(length - 1) - i];
      letterCount++;
    }
  }
  char strFinal[letterCount];
  cout << str << endl;
  cout << str2 << endl;
  cout << strFinal << endl;
  return 0;
}
