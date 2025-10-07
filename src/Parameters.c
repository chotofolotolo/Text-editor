#include"file.h"
#include<stdio.h>
#include<stdbool.h>

void readArgFileParameter(int argc,char* argv[],File file){
    if(argc > 0){
        
    }else{
        fprintf(stdout,"===== INVALID PARAMETERS ====\n");
    }
}

bool checkArgFileParameter(int argc,char* argv[]){
    if(argc > 0){
       return true; 
    }else{
        return false;
    }
}
