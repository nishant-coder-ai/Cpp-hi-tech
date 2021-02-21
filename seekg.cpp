#include<iostream>
#include<fstream>
#include<conio.h>

using namespace std;

int main(){
    ifstream obj;
    obj.open("Jarvis.txt");
    char ch;
    cout<<obj.tellg()<<endl;
    obj>>ch;
    cout<<ch;
    cout<<obj.tellg()<<endl;     /// now the get pointer is at 1 position , to assign it again to 0 , we use seekg();
    obj.seekg(0);
    cout<<obj.tellg()<<endl;     /// now it is at 0., WE CAN ASSIGN it at any position we want.
    obj.seekg(8);
    cout<<obj.tellg()<<endl;
    /// another way of doing this ;
    /// now get pointer is pointing at 8 position.
    obj.seekg(2, ios_base::cur);      /// increase by 2 position , from current position.
    cout<<obj.tellg()<<endl;            /// at 10 position
    obj.seekg(2, ios_base::beg);      /// increase by 2 position , from beginning.
    cout<<obj.tellg()<<endl;            /// at 2 position
    obj.seekg(-2, ios_base::end);
    cout<<obj.tellg()<<endl;
    cout<<(char)obj.get();



    return 0;
}
