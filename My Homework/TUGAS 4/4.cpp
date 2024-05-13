#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int y,z;
    int sum;
    int input;
    for(y = 1; y <= 9; y += 2) {
        sum = 1;
	    for(z = 1; z <= y; z += 2) {
            if(z != 1)
            cout << " * "; 
            cout << z;
   	        sum = sum * z;
            } cout << " = " << sum << endl;
   }

return 0;
}
