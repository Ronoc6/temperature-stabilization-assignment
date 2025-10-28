#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h> 
#include <sys/socket.h>
#include <arpa/inet.h>


struct msg{
    double T;     // Temperature 
    int Index;    // Index indifying the process 
    int Done;
}; 

struct msg prepare_message(int i_Index, double i_Temperature);

