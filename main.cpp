#include <iostream>
//https://khmt.uit.edu.vn/wecode/truonganpn/assignment/34/145
using namespace std;

int a;

int main()
{
    cin>>a;
    while (a>0) {
        if (!(a&1)) {
            cout<<"TRUE";
            return 0;
        }
        a/=10;
    }
    cout<<"FALSE";
    return 0;
}
