#include <iostream>

int main(){
    char sexo[10];
    int edad;
    float estatura;

    std::cout<<"Humano!!! escribe lo siguiente";
    std::cout<<"\nsexo: "; std::cin>>sexo;
    std::cout<<"\nEdad: "; std::cin>>edad;
    std::cout<<"\nEstatura: "; std::cin>>estatura;

    std::cout<<"\nHUMANO!!! AHI ESTAN TUS DATOS\n";
    std::cout<<"sexo:"<<sexo<<"\n";
    std::cout<<"sexo:"<<edad<<"\n";
    std::cout<<"sexo:"<<estatura<<"\n";



    system("pause");
    return 0;
}