#include<iostream>
#include<string>

int main(){

    std::string nome;
    int idade;
    float altura;

    std::cout<<"Qual seu nome: "<<std::endl;
    std::cin>>nome;
    std::cout<<"Qual a sua idade: "<<std::endl;
    std::cin>>idade;
    std::cout<<"Qual a sua altura: "<<std::endl;
    std::cin>>altura;

    std::cout<<"Bem-vindo(a) "<<nome<<"!!"<<std::endl;
    std::cout<<"Você tem "<<idade<<" anos e "<<altura<<" metros de altura!"<<std::endl;



    return 0;
}