#include<iostream>
#include<conio.h>
using namespace std;

struct book{
    int pages;
    char title[20];
    float price;
}; /// book b2 can also be written as  -->  }b2;

/// book b2;              global Variable

int main(){
    book b1 = {69, "F**k you !", 98.39};          /// local Variable
    book b2;
    b2.pages = 89;
    b2.price = 87.88;
/// b2.title = "Lexcrop";  this will throw Error ,         we have to know , how a string fit in character array.
    strcpy(b2.title, "Lexcrop");


    return 0;
}
