#include"file.h"
#include<stdbool.h>

bool checkFile(File file,int fd,char fileName[50]){
    file.fileDesc = fopen(fileName,"r+");//r+->open for reading and writing,the stream is positioned at the beginning of the file
    if(file.fileDesc != NULL){
        return true;
    }else{
        return false;
    }
}

void open(File file){
    
}

