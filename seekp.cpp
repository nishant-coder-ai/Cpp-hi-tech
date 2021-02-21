#include<iostream>
#include<fstream>
#include<conio.h>

using namespace std;

int main(){
    ofstream obj;
    obj.open("Jarvis.txt", ios::ate|ios::app);
    char ch;
    cout<<obj.tellp()<<endl;
   obj.seekp(2, ios_base::beg);
    cout<<obj.tellp()<<endl;
    obj.close();
    getch();

    return 0;
}
