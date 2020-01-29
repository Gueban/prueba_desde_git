#include <iostream>

using namespace std;

class amigos{
public:
    virtual void frase(){
        cout<<"Frase de amigos:"<<endl;
    }
};

class juanpa:public amigos{
public:
    void frase(){
        cout<<"cual? :l"<< endl;
    }
};

class chepix: public amigos{
public:
    void frase(){
        cout<<"Vergazos? v:<"<<endl;
    }
};

template <class T>
T sum(T a, T b){
    return a+b;
}

class poderosisimas: public amigos{
public:
    void frase(){
        cout<<"soy de Nebaj York :D"<<endl;
    }
};

int main()
{
    cout << "Hello Mike!" << endl;
    cout << "First page!" << endl;
    juanpa j;
    chepix c;
    poderosisimas p;
    amigos *a1 = &j;
    amigos *a2 = &c;
    amigos *a3 = &p;
    amigos o;
    o.frase();
    a1->frase();
    a2->frase();
    a3->frase();

    int x = 17;
    int y = 25;

    cout<<"Resultado: "<<sum(x,y)<<endl;

    return 0;
}
