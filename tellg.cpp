#include<iostream>
#include<fstream>
#include<conio.h>

using namespace std;

int main(){
    ifstream obj;
    obj.open("Jarvis.txt");
    int pos;
    char ch;
    pos = obj.tellg();               /// tellg tells us Position of get pointer.
    cout<<pos<<"\n";

    obj>>ch;                           /// after reading the value , get pointer points to next value.
    pos = obj.tellg();
    cout<<pos<<"\n";
    obj>>ch;
    pos = obj.tellg();
    cout<<pos<<"\n";
    obj>>ch;
    pos = obj.tellg();
    cout<<pos<<"\n";
    obj>>ch;
    pos = obj.tellg();
    cout<<pos<<"\n";
    obj>>ch;



    obj.close();
    getch();

    return 0;
}

