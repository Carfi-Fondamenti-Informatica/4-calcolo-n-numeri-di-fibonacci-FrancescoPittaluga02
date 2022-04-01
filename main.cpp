#include <iostream>
using namespace std;


int main() {
    int n=0,i=0,primo_numero=1,secondo_numero=1,numero_successivo=0;
    cin>>n;
    if(n<3) {
        cout << "errore" << endl;
    }else {
        cout<<primo_numero<<endl;
        cout<<secondo_numero<<endl;
        for (int i=2;i<n;i++){
            numero_successivo=primo_numero+secondo_numero;
            cout<<numero_successivo<<endl;
            primo_numero=secondo_numero;
            secondo_numero=numero_successivo;
        }
    }
    return 0;
}
