#include <bits/stdc++.h>
using namespace std;

void super_digt(int n, int p){
    string numeroCadenaInv = "";
    string numeroRepetido = "";
    while(n){
        int dig = n%10;
        char digChar = '0'+dig;
        numeroCadenaInv.push_back(digChar);
        n = n/10;
    }
    
    for(int i=0 ; i< p; i++){
         for(int j=0 ; j< numeroCadenaInv.size(); j++){
            numeroRepetido.push_back(numeroCadenaInv[j]);
         }
    }

    while( numeroRepetido.size()!= 1){
        cout<<numeroRepetido<<endl;
        long long suma = 0;
        for(int i=0; i< numeroRepetido.size(); i++){
            int dig = numeroRepetido[i]-'0';
            suma+=dig;
        }
        string nuevoNumero = "";
        while(suma){
            int dig = suma%10;
            char digChar = '0'+dig;
            nuevoNumero.push_back(digChar);
            suma/= 10;
        }
        numeroRepetido = nuevoNumero;
    }
    cout<<numeroRepetido[0]<<endl;
}


int main(){
    int n =148;
    int p = 3;
    super_digt (n,p);
    return 0;
   
}
 