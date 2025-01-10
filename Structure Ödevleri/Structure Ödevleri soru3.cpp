#include <iostream>
#include <string>
#include <iomanip>  
#include <locale.h>
using namespace std;


struct Kisi {
    string ad_soyad;
    string adresi;
    string telefon_no;
};


struct Gonderi {
    int gonderi_no;   
    float agirlik;     
    float hacim;       
    bool garanti;     
    float ucret;      
    
    Kisi gonderen;     
    Kisi alici;        
};


struct Kurye {
    string ad_soyad;
    string telefon_no;
};


void islemYap(const Gonderi &gonderi, const Kurye &kurye) {
  
    cout<<" "<<endl;
    cout << "Gonderi No: " << gonderi.gonderi_no << endl;
    cout<<"______________"<<endl;
    cout << "Gönderen Adý Soyadý: " << gonderi.gonderen.ad_soyad << endl;
    cout << "Gönderen Adres: " << gonderi.gonderen.adresi << endl;
    cout << "Gönderen Telefon No: " << gonderi.gonderen.telefon_no << endl;
    
    cout << "Alýcý Adý Soyadý: " << gonderi.alici.ad_soyad << endl;
    cout << "Alýcý Adres: " << gonderi.alici.adresi << endl;
    cout << "Alýcý Telefon No: " << gonderi.alici.telefon_no << endl;
    
    cout << "Aðýrlýk: " << gonderi.agirlik << " kg" << endl;
    cout << "Hacim: " << gonderi.hacim << " m³" << endl;
    cout << "Garanti: " << (gonderi.garanti ? "Evet" : "Hayýr") << endl;
    cout << "Ücret: " << fixed << setprecision(2) << gonderi.ucret << " TL" << endl;
    
 
    cout << "\nKurye Bilgileri:"<<endl;;
    cout << "Kurye Adý Soyadý: " << kurye.ad_soyad << endl;
    cout << "Kurye Telefon No: " << kurye.telefon_no << endl;

  
    cout << "Kurye " << kurye.ad_soyad << " tarafýndan gönderi alýndý ve "  << gonderi.alici.ad_soyad << " adlý kiþiye teslim edilecek."<<endl;
}

int main() 
{
setlocale(LC_ALL,"Turkish");
	
    Kurye kurye1 = {"Ali Yýlmaz", "05321234567"};
    
  
    Gonderi gonderiler[5] = {
        {1, 2.5, 0.03, true, 50.75, {"Recep Sinan Ünal", "Konya, Cadde No:4", "05421717525"}, {"Emre Yaylacý", "Amasya, Sokak No:10", "05434561234"}},
        {2, 3.0, 0.04, false, 65.50, {"Efe Emir Yazýcý", "Aydýn, Park No:1", "05554896245"}, {"Emrullah Can Erdoðan", "Ankara, Mahalle No:7", "05549631578"}},
        {3, 1.5, 0.02, true, 45.00, {"Berk Pamuk", "Samsun, Cadde No:15", "05554717858"}, {"Nail Ünal", "Konya, Mahalle No:5", "05347891534"}},
        {4, 4.0, 0.05, false, 75.20, {"Hüseyin Karaca", "Aydýn, Cadde No:22", "05423657896"}, {"Tunahan Altýnayak", "Konya, Sokak No:8", "05471679862"}},
        {5, 2.0, 0.03, true, 55.10, {"Burak Yiðitalp", "Diyarbakýr, Park No:3", "05436846429"}, {"Musa Selim Ulu", "Kocaeli, Mahalle No:12", "05363216549"}}
    };
    

    for (int i = 0; i < 5; i++) {
        islemYap(gonderiler[i], kurye1);
    }

    return 0;
}

