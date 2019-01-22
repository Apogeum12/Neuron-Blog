#ifndef _NEURON_HPP_
#define _NEURON_HPP_

#include <iostream>
#include <string>


class Neuron{
    public:
        Neuron(double val, char typeNeuron);
        void activated();
        void derived();

        // Metody
        double getVal() {return this->val;}
        double getActivatedVal() {return this->activedVal;}
        double getDerivedVal() {return this->derivedVal;}

    private:
        double val;
        double activedVal;
        double derivedVal;
        char NameActivationFunction;
};
#endif