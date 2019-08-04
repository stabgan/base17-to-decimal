#include <iostream>
#include<string>
#include<math.h>

using namespace std;

int main() {
  int base = 17;
  int digit , i = 0, l = 0;
  int decimal = 0;
  string s;
  cin >> s;
  while(s[l]!='\0') {
    l++;
  }
  while(s[i]!='\0'){
    if(s[i] > 64){
      digit = int(s[i])-55;
    }
    else {
      digit = int(s[i])-48;
    }
    i++;
    decimal += digit*pow(base,l-i);
  }
  cout << decimal << endl;
}
