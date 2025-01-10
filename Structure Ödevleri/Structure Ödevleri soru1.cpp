#include <iostream>
#include <string>
#include <iostream>
using namespace std;


struct Otomobil {
    string marka;   
    string model;  
    int yil;       
    char yakit;     
    int km;        
    int fiyat;    
};

int main()
{
setlocale(LC_ALL,"Turkish");	
      
    Otomobil binek = {"Nissan", "Micra", 2009, 'G', 150000, 350000};
    Otomobil suv = {"Peugeot", "5008", 2020, 'D', 50000, 1250000};
    Otomobil ticari = {"Volkswagen", "Transporter", 2010, 'D', 180000, 700000};

    
    cout << "Binek Aracýn Bilgileri"<<endl;
    cout << "Marka: " << binek.marka << endl;
    cout << "Model: " << binek.model << endl;
    cout << "Yil: " << binek.yil << endl;
    cout << "Yakit: " << binek.yakit << endl;
    cout << "Kilometre: " << binek.km << endl;
    cout << "Fiyat: " << binek.fiyat << " TL" << endl;
    cout<<" " << endl;

    cout << "SUV Aracýn Bilgileri"<<endl;
    cout << "Marka: " << suv.marka << endl;
    cout << "Model: " << suv.model << endl;
    cout << "Yil: " << suv.yil << endl;
    cout << "Yakit: " << suv.yakit << endl;
    cout << "Kilometre: " << suv.km << endl;
    cout << "Fiyat: " << suv.fiyat << " TL" << endl;
	cout<<" " << endl;


    cout << "Ticari Aracýn Bilgileri"<<endl;
    cout << "Marka: " << ticari.marka << endl;
    cout << "Model: " << ticari.model << endl;
    cout << "Yil: " << ticari.yil << endl;
    cout << "Yakit: " << ticari.yakit << endl;
    cout << "Kilometre: " << ticari.km << endl;
    cout << "Fiyat: " << ticari.fiyat << " TL" << endl;
	cout<<" " << endl;

	system("pause");
    return 0;
}

