#include "Md_Saeem_Hossain_Shanto_1912218642_timestamp.h"
#include <iomanip>
TimeStamp::TimeStamp(){

    ss=0;
    mm=0;
    hh=0;
}
TimeStamp::TimeStamp(int ss_val, int mm_val, int hh_val){
    ss= ss_val;
    hh=mm_val;
    hh=hh_val;
}


void TimeStamp::print(){
    cout <<setw(3)<<left << hh <<" " <<setw(3)<<left << mm <<" " <<setw(3)<<left << ss ;
}
void TimeStamp::Second(int temp){
    ss=temp;
}
void TimeStamp::Minute(int  temp){
    mm=temp;
}
void TimeStamp::Hour(int temp){
    hh=temp;
}

bool TimeStamp :: operator ==(TimeStamp x)
{
    return (hh==x.hh && ss==x.ss && mm==x.mm);
}
bool TimeStamp :: operator !=(TimeStamp x)
{
    return (hh!=x.hh ||ss!=x.ss || mm!=x.mm);
}
bool TimeStamp :: operator <(TimeStamp x)
{
    return ((hh<x.hh) || ((hh==x.hh)&&(mm<x.mm)) || ((hh=x.hh)&&(mm==x.mm) && (ss<x.ss)));
}
bool TimeStamp :: operator >(TimeStamp x)
{
    return ((hh>x.hh) || ((hh==x.hh)&&(mm>x.mm)) || ((hh==x.hh)&&(mm==x.mm) && (ss>x.ss)));
}

