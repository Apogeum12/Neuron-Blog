#include "src/Neuron.hpp"

#include <iostream>

int main(void){
    char nazwa = 's';
    double val = -0.1;
    // Sigmoid function A:
    printf("Sigmoid(x): \n");
    Neuron *n1 = new Neuron(val, nazwa);
    std::cout<<"Val Neuron: "<<n1->getVal() << std::endl;
    std::cout<<"Activated Val Neuron: "<< n1->getActivatedVal() <<std::endl;
    std::cout<<"Derivated Val Neuron: "<<n1->getDerivedVal() << std::endl;
    delete n1;

    printf("Tanh(x) \n");
    nazwa = 't';
    Neuron *n2 = new Neuron(val, nazwa);
    std::cout<<"Val Neuron: "<<n2->getVal() << std::endl;
    std::cout<<"Activated Val Neuron: "<< n2->getActivatedVal() <<std::endl;
    std::cout<<"Derivated Val Neuron: "<<n2->getDerivedVal() << std::endl;
    delete n2;

    printf("Relu: \n");
    nazwa = 'r';
    Neuron *n3 = new Neuron(val, nazwa);
    std::cout<<"Val Neuron: "<<n3->getVal() << std::endl;
    std::cout<<"Activated Val Neuron: "<< n3->getActivatedVal() <<std::endl;
    std::cout<<"Derivated Val Neuron: "<<n3->getDerivedVal() << std::endl;
    delete n3;

    system("pause");
    return 0;
}
