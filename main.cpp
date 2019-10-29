#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {

    vector<vector<string>> item { {"pistol","10" },{"pedang","12" },{"panah","20" },{"peluru","17" },{"ak47", "5"} };
    vector<vector<string>> inventory;
    vector<vector<string>>::iterator inventory1;

    int menu =0;
    int maks;
    int maks_item = item.size();
    int jumlahInventory;
    int itemTerpilih;
	int hapus;

    cout << "Jumlah item tersedia = 10"<< endl;
    cout << "Maksimum Inventory =";
    cin >> maks;
    cout << endl;

    for (int menu=0; menu !=4; ++menu){
        cout << "Pilih salah satu " << endl;
        cout << "1.Lihat isi Inventory" << endl;
        cout << "2.hapus item" << endl;
        cout << "3.tambah item" << endl;
        cout << "4.keluar" << endl;
        cin >> menu;

        if (menu==1){
                if (inventory.size()==0){
                    cout << "Isi Tasnya masih kosong \n" << endl;
                } else{
                    cout << "Isi tasnya adalah" << endl;
                        for(inventory1 = inventory.begin(); inventory1 != inventory.end(); ++inventory1){
                            cout << *inventory1 << endl;
                            }
                    }
                }

        }else if(menu==2){
            if(inventory.size()==0){
                cout << "Belum memilki sebuah item" << endl;
            }else{
                cout << "Hapus item ke: ";
				cin >> hapus;
                inventory.erase(inventory.begin() + (hapus - 1));
                jumlahInventory--;
                cout << "Jumlah isi tasnya sekarang : " << jumlahInventory << endl;
				}

            }

        }else if(menu==3){
            if(inventory.size()< maks{
                cout <<"Tas Anda penuh" << endl;
                inventory.assign(item.begin(), item.begin()jumlahInventory++);
            }else{
				cout << "Jumlah isi tasnya sekarang : " << endl;
            }


        }else if(menu==4){
            cout<<"Apakah Anda ingin keluar ??" << endl;
        }else{
            cout<<"Menu yang anda pilih tidak ada" << endl;
        }

    }
    return 0;
}
