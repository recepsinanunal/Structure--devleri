#include <iostream>
#include <string>
#include <iostream>

using namespace std;


struct Kumas {
    string iplikTipi;   
    float dm2Agirlik;    
    string dokumaTipi;   
    string renk;         
    int miktar;          
};


struct Iskelet {
    string malzeme;      
    string birlestirme; 
    string tarz;         
    string boyut;      
    int miktar;          
};


struct Mobilya {
    Kumas kaplama;      
    Iskelet malzeme;    
    int fiyat;          
    int adet;           
};

int main() 
{
setlocale(LC_ALL,"Turkish");
    
    Mobilya mobilyalar[10] = {
        {{"Pamuk", 0.25, "Düz", "Mavi", 20}, {"Ahþap", "Vida", "Modern", "Orta", 10}, 5000, 5},
        {{"Polyester", 0.3, "Dokuma", "Kýrmýzý", 15}, {"Alüminyum", "Vida", "Klasik", "Büyük", 12}, 4000, 4},
        {{"Ýpek", 0.1, "Saten", "Yeþil", 25}, {"Çelik", "Kaynak", "Endüstriyel", "Küçük", 8}, 4200, 6},
        {{"Pamuk", 0.28, "Düz", "Sarý", 18}, {"Ahþap", "Vida", "Klasik", "Orta", 7}, 6000, 3},
        {{"Polyester", 0.35, "Dokuma", "Mavi", 10}, {"Çelik", "Kaynak", "Modern", "Büyük", 9}, 8000, 1},
        {{"Linen", 0.3, "Düz", "Beyaz", 12}, {"Ahþap", "Vida", "Retro", "Orta", 11}, 5500, 4},
        {{"Kadife", 0.45, "Kadife", "Beyaz", 20}, {"Alüminyum", "Kaynak", "Endüstriyel", "Büyük", 5}, 7500, 3},
        {{"Pamuk", 0.3, "Saten", "Lacivert", 22}, {"Çelik", "Kaynak", "Modern", "Orta", 15}, 4800, 4},
        {{"Yün", 0.5, "Dokuma", "Mavi", 42}, {"Ahþap", "Vida", "Klasik", "Küçük", 6}, 6500, 5},
        {{"Ýpek", 0.31, "Düz", "Beyaz", 10}, {"Alüminyum", "Kaynak", "Modern", "Büyük", 9}, 8500, 2}
    };

    
    int toplamFiyat = 0;

    
    for (int i = 0; i < 10; i++) {
    	cout<<" "<<endl;
        cout <<i + 1 <<". Mobilya"  << " Bilgileri"<<endl;
        cout<<"______________________"<<endl;

        cout << "Kumas Ýplik Tipi: " << mobilyalar[i].kaplama.iplikTipi << endl;
        cout << "Desimetrekare Aðýrlýk: " << mobilyalar[i].kaplama.dm2Agirlik << " kg" << endl;
        cout << "Dokuma Tipi: " << mobilyalar[i].kaplama.dokumaTipi << endl;
        cout << "Renk: " << mobilyalar[i].kaplama.renk << endl;
        cout << "Kumas Miktar: " << mobilyalar[i].kaplama.miktar << " adet" << endl;
        
    
        cout << "Iskelet Malzeme: " << mobilyalar[i].malzeme.malzeme << endl;
        cout << "Birleþtirme: " << mobilyalar[i].malzeme.birlestirme << endl;
        cout << "Tarz: " << mobilyalar[i].malzeme.tarz << endl;
        cout << "Boyut: " << mobilyalar[i].malzeme.boyut << endl;
        cout << "Iskelet Miktar: " << mobilyalar[i].malzeme.miktar << " adet" << endl;
        
       
        cout << "Fiyat: " << mobilyalar[i].fiyat << " TL" << endl;
        cout << "Adet: " << mobilyalar[i].adet << " adet" << endl;

        
        toplamFiyat += mobilyalar[i].fiyat * mobilyalar[i].adet;
    }

    
   	cout<<" "<<endl;
    cout << "Toplam Fiyat: " << toplamFiyat << " TL" << endl;

	system("pause");
    return 0;
}

