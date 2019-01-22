#include <iostream>
#include<string>

#include "src/Neuron.hpp"

int main(void){
    // Sigmoid function A:
    printf("Sigmoid(x): \n");
    char nazwa = 's';
    Neuron *n1 = new Neuron(-0.1, nazwa);
    std::cout<<"Val Neuron: "<<n1->getVal() << std::endl;
    std::cout<<"Activated Val Neuron: "<< n1->getActivatedVal() <<std::endl;
    std::cout<<"Derivated Val Neuron: "<<n1->getDerivedVal() << std::endl;
    delete n1;

    printf("Tanh(x) \n");
    nazwa = 't';
    Neuron *n2 = new Neuron(-0.1, nazwa);
    std::cout<<"Val Neuron: "<<n2->getVal() << std::endl;
    std::cout<<"Activated Val Neuron: "<< n2->getActivatedVal() <<std::endl;
    std::cout<<"Derivated Val Neuron: "<<n2->getDerivedVal() << std::endl;
    delete n2;

    printf("Relu: \n");
    nazwa = 'r';
    Neuron *n3 = new Neuron(-0.1, nazwa);
    std::cout<<"Val Neuron: "<<n3->getVal() << std::endl;
    std::cout<<"Activated Val Neuron: "<< n3->getActivatedVal() <<std::endl;
    std::cout<<"Derivated Val Neuron: "<<n3->getDerivedVal() << std::endl;
    delete n3;

    system("pause");
    return 0;
}
