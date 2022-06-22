#include <iostream>
using namespace std;
class studi{
  private:
    int *nim;
    int nimMhs[10];
    string *nama;
    string namaMhs[10];
    
  public:
  void dwi(){
  	//DISINI ADALAH BAGIAN DARI INPUT
  	cout<<"================================="<<endl;
    cout << "|\tMAHASISWA YANG MASUK \t|"<<endl;
	cout << "|\t  Babak FINAL\t\t|"<<endl;
	cout<<"================================="<<endl;
    for (int i=0; i<5; i++){
      cout << " NIM PESERTA : ";
      cin >> nimMhs[i];
      cout << "NAMA PESERTA : ";
      cin >> namaMhs[i];
    }
    cout<<endl;
}
  void lifa(){
  	//DISINI ADLAH BAGIAN DARI PROSES
  	cout << "==============================="<<endl;
  	cout << "\tDATA YANG TERSIMPAN \n";
  	cout << "==============================="<<endl;
    nim = new int[5];
    nama = new string[5];
    for(int i=0; i<5; i++){
      *nim = nimMhs[i];
      nim += 1;
      *nama = namaMhs[i];
      nama+=1;
    }
  }
  void qonita(){
  	//DISINI ADALAH BAGIAN DARI OUTPUT
    nim -=5 ;
    nama -= 5;
    cout<<"\tDATA MAHASISWA "<<endl;
    for (int i=0; i<5; i++) {
      cout << "\nNama ke-" << i+1 << " : ";
      cout << *nama ;
      nama += 1;
      cout << "\nNim : " ;
      cout << *nim ;
      nim += 1;
    }
  }

};
int main(){
	//PADA MAIN KITA MEMANGGIL CLASS STUDI,DWI(INPUT),LIFA(PROSES),QONITA(OUTPUT)
  studi studi;
  studi.dwi();
  studi.lifa();
  studi.qonita(); 
}
