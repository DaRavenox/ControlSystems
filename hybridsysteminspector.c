/*Copyright 2018 Jonas Hongisto

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in
the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the
Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE
FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION 
WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.


Created by Jonas Hongisto on 2018-03-04.
*/


#include <zconf.h>

//Struct for the transitions, '-->' in the formal language. Edge is a pointer to a pointer between two states.
typedef struct{
    char state1;
    char state2;
    char generator;

} transition;

//Struct for the whole transition system. Includes pointers to the lists of states, generators and transitions.
typedef struct{
    char* state_ptr;
    u_int8_t number_of_states;

    char* generators;
    u_int8_t number_of_generators;

    transition* transitions;
    u_int8_t number_of_transitions;

} transitionsystem;



