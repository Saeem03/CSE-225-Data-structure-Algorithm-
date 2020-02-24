#include <iomanip>
#include "Md_Saeem_Hossain_Shanto_1912218642_studentinfo.h"
studentInfo::studentInfo(){

    cgpa=0;
    id=0;
}
studentInfo::studentInfo(string name_val, int id_val, double cgpa_val){
    name= name_val;
    id=id_val;
    cgpa=cgpa_val;
}


void studentInfo::print(){
    cout <<setw(8)<<left << "("<<id <<",  " <<setw(10)<<left << name <<",  " <<setw(4)<<left << cgpa<<")" ;
}
void studentInfo::Id(int temp){
    id=temp;
}
void studentInfo::Name(string  temp){
    name=temp;
}
void studentInfo::CGPA(double temp){
    cgpa=temp;
}

bool studentInfo :: operator ==(studentInfo x)
{
    return (id==x.id);
}
bool studentInfo :: operator !=(studentInfo x)
{
    return (id!=x.id);
}

