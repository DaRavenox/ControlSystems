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



#include "hybridsysteminspector.h"

//Read Transition systems from file

int initializeTS(char* file_path){
    FILE* file_ptr = fopen(file_path, "r");
    if(file_ptr == NULL) return -1;

    int number_of_TS;
    fscanf(file_ptr,"%d",&number_of_TS);
    transitionsystem array_of_TS[number_of_TS];
    for (int counter = 0; counter < number_of_TS ; counter++) {
        //Read in number of states and states
        fscanf(file_ptr,"%d",&array_of_TS[counter].number_of_states);
        array_of_TS[counter].state_ptr = (char *) malloc(sizeof(char)*array_of_TS[counter].number_of_states);
        for (int i = 0; i <array_of_TS[counter].number_of_states; i++) {
            readNextNonWhiteChar(file_ptr,&array_of_TS[counter].state_ptr[i]);
        }
        //Read in number of generators and generators
        fscanf(file_ptr,"%d",&array_of_TS[counter].number_of_generators);
        array_of_TS[counter].generator_ptr = (char *) malloc(sizeof(char)*array_of_TS[counter].number_of_states);
        for (int i = 0; i <array_of_TS[counter].number_of_generators; i++) {
            readNextNonWhiteChar(file_ptr,&array_of_TS[counter].generator_ptr[i]);
        }
        //Read in number of transitions and transitions
        fscanf(file_ptr,"%d",&array_of_TS[counter].number_of_transitions);
        array_of_TS[counter].transition_ptr = (transition *) malloc(sizeof(transition)*array_of_TS[counter].number_of_transitions);

        for (int i = 0; i <array_of_TS[counter].number_of_transitions; i++) {
            char* destination_array[3];
            destination_array[0] = &array_of_TS[counter].transition_ptr[i].state1;
            destination_array[1] = &array_of_TS[counter].transition_ptr[i].generator;
            destination_array[2] = &array_of_TS[counter].transition_ptr[i].state2;
            readNextXNonWhiteChar(file_ptr, 3,destination_array);
        }
        //Read in number of initial states and initial states
        fscanf(file_ptr,"%d",&array_of_TS[counter].number_of_init_states);
        array_of_TS[counter].init_state_ptr = (char *) malloc(sizeof(char)*array_of_TS[counter].number_of_init_states);
        for (int i = 0; i <array_of_TS[counter].number_of_init_states; i++) {
            readNextNonWhiteChar(file_ptr,&array_of_TS[counter].init_state_ptr[i]);
        }
        //Read in number of final states and final states
        fscanf(file_ptr,"%d",&array_of_TS[counter].number_of_final_states);
        array_of_TS[counter].final_state_ptr = (char *) malloc(sizeof(char)*array_of_TS[counter].number_of_final_states);
        for (int i = 0; i <array_of_TS[counter].number_of_final_states; i++) {
            readNextNonWhiteChar(file_ptr,&array_of_TS[counter].final_state_ptr[i]);
        }
    }
    return 1;
}


int readNextXNonWhiteChar(FILE* file_ptr, int number_of_characters,char** destination_array){
    for (int i = 0; i < number_of_characters; i++) {
        if(!readNextNonWhiteChar(file_ptr,destination_array[i])) return 0;
    }
    return 1;
}



int readNextNonWhiteChar(FILE* file_ptr, char* destination){
    char curr = ' ';
    while(isspace(curr)){
        fscanf(file_ptr,"%c",&curr);
        if(curr == EOF) return  0;
    }
    *destination = curr;
    return 1;
}



int isSimulation(transitionsystem T1, transitionsystem T2){
    return 0;

}