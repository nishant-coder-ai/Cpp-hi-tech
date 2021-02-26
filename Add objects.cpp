#include<iostream>

using namespace std;

class addComplex{
    private:
        int a,b;
    public:
        void setData(int x, int y){
             a = x;
             b = y;
        }
        void showData(){
            cout<<"a : "<<a<<" , b : "<<b<<endl;
        }
    addComplex add(addComplex h){
        addComplex temp;
        temp.a = a + h.a;
        temp.b = b + h.b;
        return temp;

    }


};

int main(){
    addComplex a1,a2,a3;
    a1.setData(3,4);
    a2.setData(3,80);
    a3 = a1.add(a2);
    a3.showData();
    return 0;
}
