#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
using namespace std;
int main() {
  system("clear");
  string input, text, cmt, varv, var1, var2, var3, var4, var5, var6, var7, var8,
      var9, var10;
  int print, add1, add2, sub1, sub2, mul1, mul2, div1, div2, wait, pow1, pow2,
      varn;
  int loop = 1;
  while (loop == 1) {
    cin >> input;
    if (input == "0") {
      cin >> input;
      if (input == "1") {
        cin >> text;
        if (text == "1") {
          cin >> text;
          cout << text;
          text = "";
        } else if (text == "2") {
          getline(cin, text);
          cout << text;
          text = "";
        } else {
          cout << "\033[31m"
               << "\033[41m"
               << "Invalid statement, try: '1' or '2'"
               << "\033[0m";
        }
      } else if (input == "-0") {
        getline(cin, cmt);
      } else if (input == "10") {
        cout << endl;
      } else if (input == "20") {
        cout << " ";
      } else if (input == "2") {
        cin >> add1;
        cin >> add2;
        cout << add1 + add2;
      } else if (input == "-2") {
        cin >> sub1;
        cin >> sub2;
        cout << sub1 - sub2;
      } else if (input == "4") {
        cin >> mul1;
        cin >> mul2;
        cout << mul1 * mul2;
      } else if (input == "-4") {
        cin >> div1;
        cin >> div2;
        cout << div1 / div2;
      } else if (input == "111") {
        system("clear");
      } else if (input == "11") {
        cin >> wait;
        sleep(wait);
      } else if (input == "6") {
        cin >> pow1;
        cin >> pow2;
        cout << pow(pow1, pow2);
      } else if (input == "8") {
        cin >> varn;
        if (varn == 1) {
          cin >> var1;
        } else if (varn == 2) {
          cin >> var2;
        } else if (varn == 3) {
          cin >> var3;
        } else if (varn == 4) {
          cin >> var4;
        } else if (varn == 5) {
          cin >> var5;
        } else if (varn == 6) {
          cin >> var6;
        } else if (varn == 7) {
          cin >> var7;
        } else if (varn == 8) {
          cin >> var8;
        } else if (varn == 9) {
          cin >> var9;
        } else if (varn == 10) {
          cin >> var10;
        }
      } else if (input == "9") {
        cin >> varv;
        if (varv == "1") {
          cout << var1;
        } else if (varv == "2") {
          cout << var2;
        } else if (varv == "3") {
          cout << var3;
        } else if (varv == "4") {
          cout << var4;
        } else if (varv == "5") {
          cout << var5;
        } else if (varv == "6") {
          cout << var6;
        } else if (varv == "7") {
          cout << var7;
        } else if (varv == "8") {
          cout << var8;
        } else if (varv == "9") {
          cout << var9;
        } else if (varv == "10") {
          cout << var10;
        }
      }

      else if (input == "help") {
        cout << "\033[33m"
             << "'0' must be used at the start of each statement." << endl
             << "'1' followed by '1' or '2', 1 making it single word print, or "
                "2 "
                "to print multiple words."
             << endl
             << "'10' new line." << endl
             << "'20' prints a space." << endl
             << "'2 # #' # + #" << endl
             << "'-2 # #' # - #" << endl
             << "'4 # #' # * #" << endl
             << "'-4 # #' # / #" << endl
             << "'6 # #' # to the power of #" << endl
             << "'8 # input' variable (1,2,3,4,5,6,7,8,9,10) = input." << endl
             << "'9 #' prints value of variable (1,2,3,4,5,6,7,8,9,10) to "
                "console."
             << endl
             << "'-0 text' comment." << endl
             << "'111' clear console." << endl
             << "'11 #' wait # seconds."
             << "\033[0m";
      } else {
        cout << "\033[31m"
             << "\033[41m"
             << "Invalid statement"
             << "\033[0m";
      }
    }
  }
} 
