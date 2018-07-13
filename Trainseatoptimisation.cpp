#include <iostream>
using namespace std;

int main(){
long input;
int seat;
cin>>input;
for(int i=0;i<input;i++){
cin>>seat;
switch (seat % 12){
case 0: cout << seat - 11<< " WS" << endl; break;
case 1: cout << seat + 11<< " WS" << endl; break;
case 2: cout << seat + 9 << " MS" << endl; break;
case 3: cout << seat + 7 << " AS" << endl; break;
case 4: cout << seat + 5 << " AS" << endl; break;
case 5: cout << seat + 3 << " MS" << endl; break;
case 6: cout << seat + 1 << " WS" << endl; break;
case 7: cout << seat - 1 << " WS" << endl; break;
case 8: cout << seat - 3 << " MS" << endl; break;
case 9: cout << seat - 5 << " AS" << endl; break;
case 10: cout<< seat - 7 << " AS" << endl; break;
case 11: cout<< seat - 9 << " MS" << endl; break;
}
}
}