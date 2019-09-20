#include <cstring>
#include <iostream>

using namespace std;

int main() {
  char str[80]; // string can be up to be 80 characters
  char str2[80];
  cout << "input your string!" << endl;
  cin.get(str, 81);
  cin.get(); // take input
  int length = strlen(str); // get string length
  int letterCount = 0;
  int nonLetterCount = 0;
  for(int i = 0; i < length; i++) {  // walk through array
    if((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123)) { // if str[i] is a letter
      str2[letterCount] = str[i]; //copy to string to str array without non-letters
      letterCount++; // count letters 
    }
    else {
      cout << str[i] << " is not a letter" << endl;
      nonLetterCount++;
    }
  }
  length = length - nonLetterCount;
  char strFinal[length]; // array size is equal to number of letters
  for( int i = 0; i < length; i++) { // reverse string
    strFinal[i] = str2[length - 1 - i];
  }
  bool isPalindrome = true;
  for(int i = 0; i < length; i++ ) { 
    if(str2[i] != strFinal[i]) { // check for palindrome
      isPalindrome = false;
    }
  }
  if(isPalindrome) {
    cout << "Palindrome!" << endl;
  }
  else {
    cout << "Not a palindrome!" << endl;
  }
  int length2 = strlen(strFinal);
  for(int i = 0; i < length2; i++) { // print reversed string
    if((strFinal[i] > 64 && strFinal[i] < 91) || (strFinal[i] > 96 && strFinal[i] < 123 )) {
      cout << strFinal[i];
    }
  }
  return 0;
}
