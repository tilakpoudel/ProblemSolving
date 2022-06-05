/* Write a function:
class Solution { public void solution (int N); }
that prints out ASCII-art in the shape of the capital letter L, made up of copies of the capital letter L. Parameter N is an integer (between 1 and 100) and represents the expected size of the ASCII art (the output should comprise N rows, the last of which should comprise N letters L).
For example, here is the output for N = 4:
L
L
L
The function should not return any value.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";

    cin >> n;

    for (int i = 1; i <=n; i++) {
        if(i == n) {    
            for (int j = 1; j <= i; j++) {
                cout << "L";
            }   
        } else {
            cout << "L \n";
        }
    }

  return 0;
}