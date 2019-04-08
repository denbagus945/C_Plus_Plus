/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>

using namespace std;

int
main ()
{
  cout<<"==================================="<<endl;

  cout<< "{} Perpustakaan Indonesia Cerdas {}"<<endl;

  cout<<"{}     Kota Semarang-Jateng      {}"<< endl;

  cout<<"==================================="<<endl;
  
  string judul;

  cout<<"Silahkan tulis judul bukunya ";

  cin>>judul;
  
  string pengarang;

  cout<<"Silahkan tulis pengarang bukunya ";

  cin>>pengarang;
  
  int harga;

  cout<<"Silahkan tulis berapa harganya ";

  cin>>harga;
  
  int stok;

  cout<<"Silahkan tulis stok bukunya ";

  cin>>stok;

  cout<<"Jadi data buku yang dimasukan adalah"<<endl;
  
  cout<<"Judul     : "<<judul<<endl;
  
  cout<<"Pengarang : "<<pengarang<<endl;
  
  cout<<"Stok      : "<<harga<<endl;
  
  cout<<"Harga     : "<<stok<<endl;

  return 0;
}
