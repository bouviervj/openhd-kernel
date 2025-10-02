#ifndef UTIL_FS_H
#define UTIL_FS_H

#include <string>
#include <sstream>
#include <stdio.h>
#include <iostream>

namespace util::fs{

static bool file_exists(const std::string& filename){
    FILE* fp=fopen(filename.c_str(),"r");
    if(fp){
        fclose(fp);
        return true;
    }
    return false;
}

static bool service_file_exists(const std::string& service_name){
    std::stringstream ss;
    ss<<"/etc/systemd/system/"<<service_name<<".service";
    return file_exists(ss.str());
}

static void write_file(const std::string& filename,const std::string& content){
    FILE *f = fopen(filename.c_str(), "w");
    if (f == NULL){
        std::cout<<"Error opening file!["<<filename.c_str()<<"]"<<std::endl;
        return;
    }
    const auto res=fputs(content.c_str(),f);
    if(res<0){
        std::cout<<"Cannot write to file "<<filename.c_str()<<std::endl;
    }
    fclose(f);
}

}
#endif // UTIL_FS_H
