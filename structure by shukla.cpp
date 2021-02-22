#include<iostream>
using namespace std;

struct book{
    int pages;
    string tittle;
    float price;
};

int main(){
    book b1;
    cout<<"Enter the Page , Tittle & Price : ";
    cin>>b1.pages>>b1.tittle>>b1.price;

    cout<<"\n"<<b1.pages<<b1.tittle<<b1.price;

    return 0;
}
