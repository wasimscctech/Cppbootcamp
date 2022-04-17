#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
    const string msg[4]= {"Wasim", "is that you?", "come on!", "pick up the phone already!"};
    srand(time(NULL));
    cout<<msg[rand() % 4];
    return 0;
}