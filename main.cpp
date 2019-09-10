/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Clog_10
 *
 * Created on 9 de septiembre de 2019, 09:27 PM
 */

#include <iostream>

using namespace std;

void convert(int n){
if(n==0)return;
     convert(n/2);
     cout<<n%2;
}


int main(){

    cout << "Conversor de decimal a binario en C++" << endl;
    int n;
    cout << "Ingresa el numero a convertir"<<endl;
    cin>>n;

    convert(n);
    return 0;

}



