#include<iostream>

using namespace::std;

float input(string text){
double angka;
cout<<"nilai  "<<text<<" :"; cin>>angka;
return angka;

}
void grade(float aa){

if(aa>80)
    {cout<<"Anda Dapat Nilai 'A'";}
else if(aa>60)
    {cout<<"Anda Dapat Nilai 'B'";}
else if(aa>40)
    {cout<<"Anda Dapat Nilai 'C'";}
else if(aa>20)
    {cout<<"Anda Dapat Nilai 'D'";}
else if(aa>0)
    {cout<<"Anda Dapat Nilai 'E'";}

}

    struct bismillah{
int tugas,absen,uts,uas;
 float ta, akhir, utsak, ujak;};

main(){
float aa;
bismillah bb;
bb.uts=input(" UTS ");
bb.uas=input(" UAS ");
bb.tugas=input("TUGAS");
bb.absen=input("ABSEN");
cout<<endl;
bb.utsak=bb.uts*20/100;
bb.ujak=bb.uas*30/100;
bb.ta=bb.tugas*35/100;
bb.akhir=bb.absen*15/100;
cout<<" nilai UTS Akhir    :"<<bb.utsak<<endl;
cout<<" nilai UAS Akhir    :"<<bb.ujak<<endl;
cout<<" nilai TUGAS Akhir  :"<<bb.ta<<endl;
cout<<" nilai ABSEN Aahir  :"<<bb.akhir<<endl<<endl;
aa=bb.utsak+bb.ujak+bb.ta+bb.akhir;
cout<<" Nilai Akhir Semua:"<<aa<<endl;
grade(aa);
cout<<endl;



}
