#include <iostream>
using namespace std;
int main() {

    int repeat, innum, out, tmp;
    cin >> repeat;
    while(repeat--)
    {
        out = 0;
        cin >> innum;
        while(innum)
        {
            innum = innum/5;
            out = out + innum;
        }
        cout << out << endl;
    }
    return 0;

}
