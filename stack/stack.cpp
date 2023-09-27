#include <iostream>
#include "stack.hpp"
using namespace std;
int main(){
    stack a;
    for(int i= 0;i<10;i++){
        a.headinsert(i);
    }
    for(int i = 0;i<10 ; i++){
        int x;
        a.pop(x);
        cout<<x<<endl;
    }
}