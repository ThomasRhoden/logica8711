#include<iostream>
#include<iomanip>

    int main(){

        int a = 8;
        //int número inteiro
        float b = 9.6;
        //float número de ponto flutuante máx 4 bytes
        double c = 4.6;
        //double ocupa 8 bytes

        double d = 8.1234567899;

        std::cout<<std::fixed<<std::setprecision(10)<<d<<std::endl;

        return 0;
        

    }