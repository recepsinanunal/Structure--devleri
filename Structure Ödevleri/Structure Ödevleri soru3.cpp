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
    cout << "G�nderen Ad� Soyad�: " << gonderi.gonderen.ad_soyad << endl;
    cout << "G�nderen Adres: " << gonderi.gonderen.adresi << endl;
    cout << "G�nderen Telefon No: " << gonderi.gonderen.telefon_no << endl;
    
    cout << "Al�c� Ad� Soyad�: " << gonderi.alici.ad_soyad << endl;
    cout << "Al�c� Adres: " << gonderi.alici.adresi << endl;
    cout << "Al�c� Telefon No: " << gonderi.alici.telefon_no << endl;
    
    cout << "A��rl�k: " << gonderi.agirlik << " kg" << endl;
    cout << "Hacim: " << gonderi.hacim << " m�" << endl;
    cout << "Garanti: " << (gonderi.garanti ? "Evet" : "Hay�r") << endl;
    cout << "�cret: " << fixed << setprecision(2) << gonderi.ucret << " TL" << endl;
    
 
    cout << "\nKurye Bilgileri:"<<endl;;
    cout << "Kurye Ad� Soyad�: " << kurye.ad_soyad << endl;
    cout << "Kurye Telefon No: " << kurye.telefon_no << endl;

  
    cout << "Kurye " << kurye.ad_soyad << " taraf�ndan g�nderi al�nd� ve "  << gonderi.alici.ad_soyad << " adl� ki�iye teslim edilecek."<<endl;
}

int main() 
{
setlocale(LC_ALL,"Turkish");
	
    Kurye kurye1 = {"Ali Y�lmaz", "05321234567"};
    
  
    Gonderi gonderiler[5] = {
        {1, 2.5, 0.03, true, 50.75, {"Recep Sinan �nal", "Konya, Cadde No:4", "05421717525"}, {"Emre Yaylac�", "Amasya, Sokak No:10", "05434561234"}},
        {2, 3.0, 0.04, false, 65.50, {"Efe Emir Yaz�c�", "Ayd�n, Park No:1", "05554896245"}, {"Emrullah Can Erdo�an", "Ankara, Mahalle No:7", "05549631578"}},
        {3, 1.5, 0.02, true, 45.00, {"Berk Pamuk", "Samsun, Cadde No:15", "05554717858"}, {"Nail �nal", "Konya, Mahalle No:5", "05347891534"}},
        {4, 4.0, 0.05, false, 75.20, {"H�seyin Karaca", "Ayd�n, Cadde No:22", "05423657896"}, {"Tunahan Alt�nayak", "Konya, Sokak No:8", "05471679862"}},
        {5, 2.0, 0.03, true, 55.10, {"Burak Yi�italp", "Diyarbak�r, Park No:3", "05436846429"}, {"Musa Selim Ulu", "Kocaeli, Mahalle No:12", "05363216549"}}
    };
    

    for (int i = 0; i < 5; i++) {
        islemYap(gonderiler[i], kurye1);
    }

    return 0;
}

