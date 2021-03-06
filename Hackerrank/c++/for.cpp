//INPUT FORMAT

//You will be given two positive integers,a  and b (a<=b), separated by a newline.

//OUTPUT FORMAT

//For each integer n in the inclusive interval [a,b]:

//If 1<=n<=9 , then print the English representation of it in lowercase. That is "one" for 1, "two" for 2, and so on.
//Else if n>9  and it is an even number, then print "even".
//Else if n>9  and it is an odd number, then print "odd".


#include <iostream>
using namespace std;

int main() {

    int a, b;
    string represent[10] = {"zero", "one", "two", "three", "four",\
    	"five", "six", "seven", "eight", "nine"};
    cin >> a >> b;
    for(int i = a; i <= b; i++) {

        if(i > 9) {
            if(i % 2 == 0)
                cout << "even\n";
            else cout << "odd\n";
        }
        else {
            cout << represent[i]<<endl;
        }
    }
    return 0;
}

