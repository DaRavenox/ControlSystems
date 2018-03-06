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
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>

#ifndef CONTROLSYSTEMS_HYBRIDSYSTEMINSPECTOR_H
#define CONTROLSYSTEMS_HYBRIDSYSTEMINSPECTOR_H
// ----------- STRUCTS ------------------------
//Struct for the transitions, '-->' in the formal language.
typedef struct{
    char state1;
    char state2;
    char generator;

} transition;

//Struct for the whole transition system. Includes pointers to the lists of states, generators and transitions.
typedef struct{
    char* state_ptr;
    int number_of_states;

    char* generator_ptr;
    int number_of_generators;

    transition* transition_ptr;
    int number_of_transitions;

    char* init_state_ptr;
    int number_of_init_states;

    char* final_state_ptr;
    int number_of_final_states;

} transitionsystem;


typedef struct {
    char stateTS1;
    char stateTS2;

}simulation;


typedef struct {
    char*** edgemap;
    char* keymap;
    char* initial_state_ptr;
    char* final_state_ptr;
}transition_map;

//--------------------------------------------



// ----------- FUNCTIONS ------------------------

int initializeTS(char* file_path);
transition_map createTransitionMap(transitionsystem TS);
int isSimulation(transitionsystem T1, transitionsystem T2);
simulation* matchStatesForSimulation(transition** transition_from_init_T1, transition** transition_from_init_T2);
int readNextNonWhiteChar(FILE* file_ptr, char* destination);
int readNextXNonWhiteChar(FILE* file_ptr, int number_of_characters, char** destination_array);
// ----------------------------------------------

#endif //CONTROLSYSTEMS_HYBRIDSYSTEMINSPECTOR_H
