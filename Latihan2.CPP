#include <iostream.h>
#include <conio.h>

int main (){
int angkabulan, tahun, jumlahhari;
cout<<"Angka Bulan : ";
cin>> angkabulan;
cout<<"Tahun : ";
cin>> tahun;
switch(angkabulan){
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12: jumlahhari=31; break;
case 4:
case 6:
case 9:

case 11: jumlahhari=30; break;
case 2: if(tahun%4==0)jumlahhari=29;
else jumlahhari=28; break;
}
cout<<"Jumlah hari"<<jumlahhari;
getch();
return 0;
}
