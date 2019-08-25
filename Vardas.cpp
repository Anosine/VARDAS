#include <iostream>
#include <string>
#include<windows.h>

using namespace std;
int dydis,kintamas,len,originalas;
string Vardas;
void duomenys()
{
	cout << "Koks Jusu vardas: ";
	cin >> Vardas;
	cout<< ""<< endl;
	len = Vardas.length();
	cout << "Iveskite remelio dydi (nuo 1 iki 10) : ";
	cin >> dydis;
	originalas=dydis;

}
int patikra()
{
	if (dydis>0&&dydis<11)
	{
	    if (len%2==0)
	{
	    if (dydis%2==0)
	{

		return dydis;
	}

	else
    {
        dydis--;
        return dydis;
	}
	}

	else {
        if (dydis%2!=0)
	{

		return dydis;
	}
    else {
        dydis--;
        return dydis;
    }

	}
	}
	else {
		cerr << "Netinkamas simbolis.\n";
		dydis=((dydis*0)-100000);
		return 0;
	}

}


void linija()
{
  for(int i=0;i<dydis;i++)
{
    cout<<"*";
}
  cout<<""<<endl;
}
void tuscia()
{


kintamas=((dydis-12-len)/2);
for(int i=0;i<=kintamas;i++)
{

    cout<<" ";
}

}

void taskai()
{
for(int zo=0;zo<originalas; zo++)
{
 cout<<"*";
  for(int i=0;i<dydis-2;i++)
{
    cout<<" ";
}
  cout<<"*"<<endl;
}
}
void printeris()
{
dydis+=25;
linija();
taskai();

cout<<"*";
tuscia();
cout <<"Sveikas, "<<Vardas;
tuscia();
cout<<"*"<<endl;

taskai();
linija();

}

int main()
{
	duomenys();
	patikra();
    if(dydis>=0&&dydis<=11)
    {
      printeris();
    }
    else
    {
     Vardas="Pokstas" ;
    }
Sleep(4000);
}
