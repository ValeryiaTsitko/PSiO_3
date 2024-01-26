#include <iostream>
#include <vector>

using namespace std;

class Printer {
public:
    virtual void print(int a) = 0;
};

class SquarePrinter : public Printer{
public:
    void print(int a){
        for (int i = 0; i <= a; ++i){
            for (int j = 0; j < a; ++j){
                cout << "#";
            }
            cout << endl;
        }
    }
};

class TrianglePrinter : public Printer{
public:
    void print(int a) {
    for (int i = 1; i <= a; ++i){
            for (int j = 1; j <= a - i; ++j){
                cout << " ";
            }
            for (int j = 1; j <= 2 * i - 1; ++j){
                cout << "#";
            }
            cout << endl;
        }
    }
};

int main(){

    SquarePrinter * printsquare = new SquarePrinter;
    printsquare -> print(5);

    TrianglePrinter * printtriangle = new TrianglePrinter;
    printtriangle -> print(5);

    return 0;
}