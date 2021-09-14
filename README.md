# [e-gater](https://github.com/sohamroy19/e-gater)
A C++ implementation of logic gates and simple gate-level circuits. Documentation here: https://sohamroy19.github.io/e-gater/  

The objective of this project is to emulate logic gates and simple gate-level circuits. The code is not meant to be fast or efficient in implementing components or computations, but is intended to be analogous to their actual physical design.  
  
The logic gates considered as basic are the AND, OR, and NOT gates. All other circuit elements have been built using them.  

The repository has been configured with GitHub Actions to auto-generate [Doxygen](http://www.doxygen.nl/)-style Documentation with each push or pull request [here](https://sohamroy19.github.io/e-gater/).

Use [CMake](https://cmake.org/) to build automatically:
- Run CMake with the [CMakeLists.txt](CMakeLists.txt) in the root directory
- Run the `make` command to build the libraries and executables
- Execute demo.exe in the generated build/ subdirectory

TODO:
- [x] Basic logic gates
- [x] Other gates using basic ones
- [x] CMake
- [x] LogicGate base class
- [x] Truth Table Helper
- [x] Doxygen-Style Documentation
- [x] Build instructions
- [x] General Combination base class
- [x] Complete documentation and demo
- [ ] Latches
- [ ] Clock System
- [ ] Flip-Flops