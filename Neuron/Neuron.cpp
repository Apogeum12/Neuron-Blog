#include "src/Neuron.hpp"
#include <cmath>

Neuron::Neuron(double val, char type_Neuron){
    this->val = val;
    this->NameActivationFunction = type_Neuron;
    this->activated();
    this->derived();
}

void Neuron::activated(){
    if (this->NameActivationFunction == 's'){
        this->activedVal = 1/(1+exp(-this->val));
    }
    else if (this->NameActivationFunction == 't'){
        this->activedVal = tanh(this->val);
    }
    else if (this->NameActivationFunction == 'r'){
        if (this->val >= 0) this->activedVal = 1;
        else this->activedVal = 0;
    }
    else std::cerr<<("Bad name activation function !");
}

void Neuron::derived(){
    if (this->NameActivationFunction == 's'){
        this->derivedVal = this->activedVal*(1 - this->activedVal);
    }
    else if (this->NameActivationFunction == 't'){
        this->derivedVal = 1 - pow(this->activedVal, 2);
    }
    else if (this->NameActivationFunction == 'r'){
        if (this->activedVal >= 0) this->derivedVal = 1;
        else this->derivedVal = 0;
    }
}
