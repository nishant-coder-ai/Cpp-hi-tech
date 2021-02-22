#include<iostream>
#include<conio.h>

using namespace std;

struct book{
    int pages;
    char tittle[20];
    float price;
    void input(){
        cout<<"Enter the Pages , Tittle And Price of the Book : "<<endl;
        cin>>pages>>tittle>>price;

    }
    void display(){
    cout<<"\n"<<pages<<" "<<tittle<<" "<<price<<endl;


    }
};


int main(){
    book b1;
    b1.input();
    b1.display();
    return 0;
}


