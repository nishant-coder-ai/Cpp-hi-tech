#include<iostream>
#include<conio.h>

using namespace std;

struct book{
    int pages;
    char tittle[20];
    float price;
};
void display(book k);
book input();

int main(){
    book b1;
    b1 = input();
    display(b1);
    return 0;
}

void display(book k){
    cout<<"\n"<<k.pages<<" "<<k.tittle<<" "<<k.price<<endl;

}

book input(){
    book b;
    cout<<"Enter the Pages , Tittle And Price of the Book : "<<endl;
    cin>>b.pages>>b.tittle>>b.price;
    return b;

}
