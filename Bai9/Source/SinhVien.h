
#ifndef SINH_VIEN_H
#define SINH_VIEN_H

#include<iostream>
#include<string>

using namespace std;

struct sinhvien
{
    long long msv;// ma sinh vien
    string hodem; // ho dem
    string ten; //ten sinh vien
    float DiemTB; // diem trung binh
    string tenlop; //ten lop
};

istream& operator>>(istream& input, sinhvien &a)
{
    cout<<"Nhap ma sinh vien:"; input>>a.msv;
    input.ignore();
    if(a.msv<0)
    {
        return input;
    }
    cout<<"Nhap ho dem:";getline(input,a.hodem);
    cout<<"Nhap ten:";getline(input,a.ten);
    cout<<"Nhap Diem Trung Binh:";input>>a.DiemTB;
    input.ignore();
    cout<<"Nhap Ten Lop:";getline(input,a.tenlop);
    return input;
}

ostream& operator<<(ostream& output,sinhvien a)
{
    output<<a.msv<<"\t"<<a.hodem<<"\t"<<a.ten<<"\t"<<a.DiemTB<<"\t"<<a.tenlop<<"\n";
    return output;
}



#endif