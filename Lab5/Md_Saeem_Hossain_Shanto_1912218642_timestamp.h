   #ifndef MD_SAEEM_HOSSAIN_SHANTO_1912218642_TIMESTAMP_H_INCLUDED
#define MD_SAEEM_HOSSAIN_SHANTO_1912218642_TIMESTAMP_H_INCLUDED
#include<iostream>
using namespace std;
class TimeStamp{
public:
    TimeStamp();
    TimeStamp(int, int , int);
    void print();
    void Second(int);
    void Minute(int);
    void Hour(int);
    bool operator ==(TimeStamp);
    bool operator !=(TimeStamp);
    bool operator <(TimeStamp);
    bool operator >(TimeStamp);

private:
    int ss,mm,hh;
};




#endif // MD_SAEEM_HOSSAIN_SHANTO_1912218642_TIMESTAMP_H_INCLUDED
