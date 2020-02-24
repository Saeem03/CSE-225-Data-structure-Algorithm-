#ifndef MD_SAEEM_HOSSAIN_SHANTO_1912218642_STUDENTINFO_H_INCLUDED
#define MD_SAEEM_HOSSAIN_SHANTO_1912218642_STUDENTINFO_H_INCLUDED

#include<iostream>
using namespace std;
class studentInfo{
public:
    studentInfo();
    studentInfo(string, int , double );
    void print();
    void Id(int);
    void Name(string);
    void CGPA(double);
    bool operator ==(studentInfo);
    bool operator !=(studentInfo);

private:
    string name;
    int id;
    double cgpa;
};



#endif // MD_SAEEM_HOSSAIN_SHANTO_1912218642_STUDENTINFO_H_INCLUDED
