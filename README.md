# Unit Neurons
Unit Neurons is a repository for development of a C++ neural network library
where each neuron is expressed using object instances embedded with its own states and functionalities,
in hopes of gaining more understanding of neural nets through the perspective of complex systems.

We call for contributions on further development of the library by adding more functionalities, fixing bugs, etc.

## Vision
Artifical neural networks are models that attempt to imitate features and functionalities of biological
neural networks. Preexisting neural network libraries such as TensorFlow, PyTorch, and Keras strictly use
matrix multiplication and neurons expressed in layers to execute feedforward and feedback loops.

However, in reality, a biological neural network is a network of mutually interacting neurons with their own function
of calculating the signal output given the signal input. In our library, we treat each neuron as an object instance
that includes a state, a feedforward method, and a feedback method.

The generated static library can be found [here](https://github.com/johnlime/UnitNeurons/blob/master/DerivedData/Unit%20Neurons/Build/Products/Debug/libUnit%20Neurons.a).

## Current Features
- Unit neurons for floating point values

- Multithreaded feedback operations

## Open Problems
- Implementation of other activation functions (such as Leaky ReLU, etc).

- Implementations of other neural network models
  - Spiking neural networks
    - Boltzmann machine
    - Hopfield network

## Major Contributors
