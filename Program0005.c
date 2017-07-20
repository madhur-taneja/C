Ques:


CODE:

#include <cmath>
#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int i;
    string time;
    cin >> time;
    //cout << time[8];
    if(time[8] == 'P')
        {
        if(time[0] == '1' && time[1] == '2')
            {
            time[0] = '1';
            time[1] = '2';
        }
        else {
            time[0] += 1;
            time[1] += 2;
        }
    }
    else if(time[8] == 'A')
        {
        if(time[0] == '1' && time[1] == '2')
            {
            time[0] = '0';
            time[1] = '0';
        }
    }
    for(i=0;i<8;i++)
        {
        cout << time[i];
    }
    return 0;
}
