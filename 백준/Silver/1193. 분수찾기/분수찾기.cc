#include<iostream>
using namespace std;

int main(void)
{
    int num = 1;
    int input; cin >> input;
    int x = 1, y = 1;
    int state = 0;

    //cout << x << "/" << y << endl;
    // state = 0:홀수 1:짝수
    for(int i = 1; i < input; i ++) {
        if(state == 0) {
            if(y == 1) {
                state = 1;
                x ++;
            }
            else {
                x ++;
                y --;
            }
        }
        else {
            if(x == 1) {
                state = 0;
                y ++;
            }
            else {
                x --;
                y ++;
            }
        }
        
        // cout << x << "/" << y << endl;
    }
    cout << y << "/" << x << endl;
}