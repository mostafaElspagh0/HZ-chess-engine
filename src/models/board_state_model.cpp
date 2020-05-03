#include<bits/stdc++.h>
using namespace std;
#define A1 21
#define H1 28
#define A8 91
#define H8 98
#define p 1
#define n 2
#define k 3
#define b 5
#define r 6
#define q 7

int get_index(string s)
{
    return((s[1] - '0' +1) * 10) + s[0] - 'A' + 1;
}

struct board_state 
{
    int board[120];
};
int* get_initialboard()
{
    int b[120];
    string s;
    for (int i = 31; i <= 38; i++)
    {
        b[i] = 1;
        
    }
    for (int i = 81; i <= 88; i++)
    {
        b[i] = -1;

    }
    b[21] =b[28] = r;
    b[22] = b[27] = n;
    b[23] = b[26] = b;
    b[24] = q;
    b[25] = k;

    b[91] = b[98] = -r;
    b[92] = b[97] = -n;
    b[93] = b[96] = -b;
    b[94] = q;
    b[95] = k;
    return b;
}
int main()
{

}