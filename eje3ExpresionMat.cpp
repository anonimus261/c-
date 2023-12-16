#include <iostream>

int main(){
    float a,b,res;
    std::cout<<"Humano porfavor ingresa los siguiente: \n";
    std::cout<<"valor a:";std::cin>>a;
    std::cout<<"valor b:";std::cin>>b;
    //exp,raiz,*,/,+,-
    res=(a/b)+1;
    std::cout<<"\nHumano aqui esta tu resultado:"<<res<<"\n";
    system("pause");
    return 0;
}