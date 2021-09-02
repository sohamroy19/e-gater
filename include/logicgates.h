/**
 * @brief	External header that includes all logic gates
 * 
 * All headers have been included despite the fact that
 * nandgate.h also includes logicgate.h, notgate.h & andgate.h
 * norgate.h also includes orgate.h
 * This is safe due to the usage of include guards, and has been done
 * to ensure that this header does not break due to future changes
 */

#include "../gates/andgate.h"
#include "../gates/logicgate.h"
#include "../gates/nandgate.h"
#include "../gates/norgate.h"
#include "../gates/notgate.h"
#include "../gates/orgate.h"
#include "../gates/xnorgate.h"
#include "../gates/xorgate.h"