#include <iostream>
#include <string>
#include <windows.h>
#include <iomanip>
using namespace std;

const int MAX_AKUN = 1;
int shared = 5;

class Akun {
private:
    string username[MAX_AKUN];
    string password[MAX_AKUN];
    int jumlahAkun = 0;
    int pilihan;

public:
    void daftarAkun(string user, string pass) {
        for (int i = 0; i < jumlahAkun; i++) {
            if (username[i] == user) {
                cout << "\n=== \033[0;33mUsername sudah terdaftar! Gunakan username lain.\033[0m ===\n";

                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
                return;
            }
        }

        if (jumlahAkun < MAX_AKUN) {
            username[jumlahAkun] = user;
            password[jumlahAkun] = pass;
            jumlahAkun++;
            cout << "\n=== \033[0;33mAkun SIPA berhasil dibuat\033[0m ===\n";
        } else {
            cout << "\n=== \033[0;33mPendaftaran akun penuh!\033[0m ===\n";
        }
        
        cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
        system("pause > null");
    }

    bool login(string user, string pass) {
        for (int i = 0; i < jumlahAkun; i++) {
            if (username[i] == user && password[i] == pass) {
                cout << "\n=== \033[0;33mLogin Aplikasi SIPA berhasil!\033[0m ===\n";

                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
                return true;
            }
        }

        cout << "\n=== \033[0;33mLogin Aplikasi SIPA gagal! Username atau password salah.\033[0m ===\n";

        cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
        system("pause > null");
        return false;
    }

protected:
    void profilMahasiswa(){
        system("cls");
        cout << "======== Profil Mahasiswa ========\n\n";
        cout << "Jalur Pendaftaran\n\033[34m-\033[0m \n\n";
        cout << "Nomor KTP\n\033[34m-\033[0m \n\n";
        cout << "Jenis Kelamin\n\033[34m-\033[0m \n\n";
        cout << "Tempat Lahir\n\033[34m-\033[0m \n\n";
        cout << "Email\n\033[34m-\033[0m \n\n";
        cout << "Nomor Handphone\n\033[34m-\033[0m \n\n";
        cout << "Kewarganegaraan\n\033[34m-\033[0m \n\n";
        cout << "Agama\n\033[34m-\033[0m \n\n";
        cout << "Golongan Darah\n\033[34m-\033[0m \n\n";
        cout << "Nomor NPWP\n\033[34m-\033[0m \n\n";
        cout << "Penerima KIP\n\033[34m-\033[0m \n\n";
        cout << "Golongan UKT\n\033[34m-\033[0m \n\n";
        cout << "Dosen Wali\n\033[34m-\033[0m \n\n";

        cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
        system("pause > null");
    }

    void alamat(){
        system("cls");
        cout << "=========== Alamat ===========\n\n";
        cout << "Jalur Pendaftaran\n\033[34m-\033[0m \n\n";
        cout << "Negara\n\033[34m-\033[0m \n\n";
        cout << "Provinsi\n\033[34m-\033[0m \n\n";
        cout << "Kabupaten\n\033[34m-\033[0m \n\n";
        cout << "Kalurahan\n\033[34m-\033[0m \n\n";
        cout << "RT / RW\n\033[34m-\033[0m \n\n";
        cout << "Kode POS\n\033[34m-\033[0m \n\n";

        cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
        system("pause > null");
    }

    void profilKeluarga(){
        system("cls");
        cout << "======== Profil Keluarga ========\n\n";
        cout << "Nama Ayah\n\033[34m-\033[0m \n\n";
        cout << "Pekerjaan Ayah\n\033[34m-\033[0m \n\n";
        cout << "Nama Ibu\n\033[34m-\033[0m \n\n";
        cout << "Pekerjaan Ibu\n\033[34m-\033[0m \n\n";
        cout << "Alamat Orang Tua\n\033[34m-\033[0m \n\n";
        cout << "Nama Wali\n\033[34m-\033[0m \n\n";
        cout << "Pekerjaan Wali\n\033[34m-\033[0m \n\n";
        cout << "Alamat Wali\n\033[34m-\033[0m \n\n";

        cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
        system("pause > null");
    }

    void pengaturanDanprivasi(){
        cout << "\n=== \033[0;33mFitur masih dalam pengembangan.\033[0m ===\n";

        cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
        system("pause > null");
    }

    void menuAkun(){
        while (true){
            system("cls");
            cout << "============== Menu Akun ==============\n";
            cout << "1. Profil Mahasiswa\n";
            cout << "2. Alamat\n";
            cout << "3. Profil Keluarga\n";
            cout << "4. Pengaturan & Privasi\n";
            cout << "5. Kembali\n";
            cout << "=======================================\n";
            cout << "Pilih menu: ";
            cin >> pilihan;

            if(pilihan == 1){
                profilMahasiswa();
            } else if(pilihan == 2) {
                alamat();
            } else if(pilihan == 3) {
                profilKeluarga();
            } else if(pilihan == 4) {
                pengaturanDanprivasi();
            } else if(pilihan == 5){
                cout << "\n=== \033[0;33mAnda Keluar Dari Menu Akun\033[0m ===\n";

                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
                break;
            } else {
                cout << "\n=== \033[0;33mPilihan Tidak Valid\033[0m ===\n";

                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
            }
        }
        
    }
};

class AktivitasMahasiswa{
private:
    int pilihan;

public:
    int AkTesis = 0, AkKuliahKerjaNyata = 0, AkPraktikKerjaLapangan = 0, AkKompetisi = 0, AkTugasAkhirSkripsi = 0;
    
private:
    void AnggotaAktivitas(){
        cout << "Fachrezi Bachri (24010293203029300)\n";
        cout << "\e[1mJenis Peran : \e[0mKetua\n";
    }

    void Prefix(int prefix){
        if(prefix == 1){
            cout << "\n=========== Menambahkan Aktivitas Tesis ===========\n";
        } else if(prefix == 2) {
            cout << "\n=========== Menambahkan Aktivitas Kuliah Kerja Nyata ===========\n";
        } else if(prefix == 3) {
            cout << "\n=========== Menambahkan Aktivitas Praktik Kerja Lapangan ===========\n";
        } else if(prefix == 4) {
            cout << "\n=========== Menambahkan Aktivitas Kompetisi ===========\n";
        } else if(prefix == 5) {
            cout << "\n=========== Menambahkan Aktivitas Tugas Akhir / Skripsi ===========\n";
        }
    }

    void Notifikasi(int notif) {
        if (notif == 1) {
            cout << "\n=== \033[0;32mAnda Berhasil Menambahkan Aktivitas Tesis\033[0m ===\n";
        } else if (notif == 2) {
            cout << "\n=== \033[0;32mAnda Berhasil Menambahkan Aktivitas Kuliah Kerja Nyata\033[0m ===\n";
        } else if (notif == 3) {
            cout << "\n=== \033[0;32mAnda Berhasil Menambahkan Aktivitas Praktik Kerja Lapangan\033[0m ===\n";
        } else if (notif == 4) {
            cout << "\n=== \033[0;32mAnda Berhasil Menambahkan Aktivitas Kompetisi\033[0m ===\n";
        } else if (notif == 5) {
            cout << "\n=== \033[0;32mAnda Berhasil Menambahkan Aktivitas Tugas Akhir / Skripsi\033[0m ===\n";
        }
    }

    void Template(int pn){
        string Jaktivitas, Kaktivitas, Lokasi, skTugas, tSKTugas, Jkeanggotaan;

        AnggotaAktivitas();
        Prefix(pn);
        
        cin.ignore();
        cout << "\nJudul Aktivitas : ";
        getline (cin, Jaktivitas);
        cout << "Keterangan Aktivitas : ";
        getline (cin, Kaktivitas);
        cout << "Lokasi : ";
        getline (cin, Lokasi);
        cout << "SK Tugas : ";
        getline (cin, skTugas);
        cout << "Tanggal SK Tugas : ";
        getline (cin, tSKTugas);
        cout << "Jenis Keanggotaan : ";
        getline (cin, Jkeanggotaan);

        Notifikasi(pn);
    }

    void Gabungan(int menuAKM){
        system("cls");
        Template(menuAKM);

        if(menuAKM == 1){
            AkTesis += 1;
        } else if(menuAKM == 2) {
            AkKuliahKerjaNyata += 1;
        } else if(menuAKM == 3) {
            AkPraktikKerjaLapangan += 1;
        } else if(menuAKM == 4) {
            AkKompetisi += 1;
        } else if(menuAKM == 5) {
            AkTugasAkhirSkripsi += 1;
        }

        cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
        system("pause > null");
    }

    void TableAktivitas(){
        cout << "\n=========== Table Aktivitas ===========\n";
        cout << "Tesis - " << AkTesis << " Aktivitas\n";
        cout << "KuliahKerjaNyata - " << AkKuliahKerjaNyata << " Aktivitas\n";
        cout << "PraktikKerjaLapangan - " << AkPraktikKerjaLapangan << " Aktivitas\n";
        cout << "Kompetisi - " << AkKompetisi << " Aktivitas\n";
        cout << "TugasAkhirSkripsi - " << AkTugasAkhirSkripsi << " Aktivitas\n";
        cout << "=======================================\n";
        
    }

protected:
    void menuAktivitasMahasiswa(){
        while (true)
        {
            system("cls");
            TableAktivitas();

            cout << "\n=========== Menu Aktivitas Mahasiswa ===========\n";
            cout << "1. Tesis\n";
            cout << "2. Kuliah Kerja Nyata\n";
            cout << "3. Praktik Kerja Lapangan\n";
            cout << "4. Kompetisi\n";
            cout << "5. Tugas Akhir / Skripsi\n";
            cout << "6. Kembali\n";
            cout << "================================================\n";
            cout << "Pilih menu: ";
            cin >> pilihan;

            if(pilihan == 1){
                Gabungan(pilihan);
            } else if(pilihan == 2) {
                Gabungan(pilihan);
            } else if(pilihan == 3) {
                Gabungan(pilihan);
            } else if(pilihan == 4) {
                Gabungan(pilihan);
            } else if(pilihan == 5) {
                Gabungan(pilihan);
            } else if(pilihan == 6) {
                cout << "\n=== \033[0;33mAnda Keluar Dari Menu Aktivitas Mahasiswa\033[0m ===\n";
                
                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
                break;
            } else {
                cout << "\n=== \033[0;33mPilihan Tidak Valid\033[0m ===\n";

                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
            }
        }
    }
};

class Lirs {
private:
    int kuota = 7;
    
public:
    int& sks = shared;
    string IsiTableSemester1[3][5];
    int TableTambah = 0;
    
    string hariMK[3] = {"Rabu", "Selasa", "Senin"};

    string TableSemester1Array[3][4] = {
        {"13:00", "Algoritma dan Dasar Pemrograman", "INF11101", "R3 FTTK"},
        {"07:30", "Kalkulus", "INF12001", "R4 FTTK"},
        {"09:30", "Pengantar Teknologi Informasi", "FST12101", "R5 FTTK"}
    };

private:
    bool isMKSudahDiambil(string kodeMK) {
        for(int i = 0; i < TableTambah; i++) {
            if(IsiTableSemester1[i][2] == kodeMK) {
                return true;
            }
        }
        return false;
    }

    void tableSemester1(int TableSemester1) {
        string kodeMK = TableSemester1Array[TableSemester1-1][2];
        string namaMK = TableSemester1Array[TableSemester1-1][1];
        
        if(isMKSudahDiambil(kodeMK)) {
            cout << "\n=== \033[0;31mMata kuliah " << namaMK << " (" << kodeMK << ") sudah ada di jadwal Anda!\033[0m ===\n";
            cout << "\nTekan tombol apapun untuk melanjutkan : ";
            system("pause > null");
            return;
        }
        
        if (TableSemester1 == 1) {
            char Ytmenu1;

            system("cls");
            cout << "+======+=======+======================+======================+=========+============+==================+\n";
            cout << "| Hari |  Jam  |    Dosen Pengampu    | Durasi               | Ruangan |  Kuota     | Tahun Ajaran     |\n";
            cout << "+======+=======+======================+======================+=========+============+==================+\n";
            cout << "| Rabu | 13:00 | REZI                 | 150 m                | R3 FTTK |   " << kuota << " / 10   | 2024/2025 Genap  |\n";
            cout << "+======+=======+======================+======================+=========+============+==================+\n";
            cout << "\nApakah Ingin Menambahkan Ke Jadwal Perkuliahan (y/n) : ";
            cin >> Ytmenu1;

            if (Ytmenu1 == 'y' || Ytmenu1 == 'Y') {
                kuota -= 1;
                sks -= 2;

                IsiTableSemester1[TableTambah][0] = TableSemester1Array[TableSemester1 - 1][0];
                IsiTableSemester1[TableTambah][1] = TableSemester1Array[TableSemester1 - 1][1];
                IsiTableSemester1[TableTambah][2] = TableSemester1Array[TableSemester1 - 1][2];
                IsiTableSemester1[TableTambah][3] = TableSemester1Array[TableSemester1 - 1][3];
                IsiTableSemester1[TableTambah][4] = hariMK[TableSemester1 - 1];
                TableTambah++;

                cout << "\n=== \033[0;32mAnda Berhasil Menambahkan Jadwal Matakuliah Semester 1\033[0m ===\n";
                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
            } else if (Ytmenu1 == 'n' || Ytmenu1 == 'N') {
                cout << "\n=== \033[0;33mJadwal Matakuliah Tidak Ditambahkan\033[0m ===\n";
                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
            }
        } else if (TableSemester1 == 2) {
            char Ytmenu2;

            system("cls");
            cout << "+========+=======+======================+======================+=========+===========+==================+\n";
            cout << "| Hari   |  Jam  |    Dosen Pengampu    | Durasi               | Ruangan |  Kuota    | Tahun Ajaran     |\n";
            cout << "+========+=======+======================+======================+=========+===========+==================+\n";
            cout << "| Selasa | 07:30 | HAIK                 | 150 m                | R4 FTTK |   " << kuota << " / 11  | 2024/2025 Genap  |\n";
            cout << "+========+=======+======================+======================+=========+===========+==================+\n";
            cout << "\nApakah Ingin Menambahkan Ke Jadwal Perkuliahan (y/n) : ";
            cin >> Ytmenu2;

            if (Ytmenu2 == 'y' || Ytmenu2 == 'Y') {
                kuota -= 1;
                sks -= 4;

                IsiTableSemester1[TableTambah][0] = TableSemester1Array[TableSemester1 - 1][0];
                IsiTableSemester1[TableTambah][1] = TableSemester1Array[TableSemester1 - 1][1];
                IsiTableSemester1[TableTambah][2] = TableSemester1Array[TableSemester1 - 1][2];
                IsiTableSemester1[TableTambah][3] = TableSemester1Array[TableSemester1 - 1][3];
                IsiTableSemester1[TableTambah][4] = hariMK[TableSemester1 - 1];
                TableTambah++;

                cout << "\n=== \033[0;32mAnda Berhasil Menambahkan Jadwal Matakuliah Semester 1\033[0m ===\n";
                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
            } else if (Ytmenu2 == 'n' || Ytmenu2 == 'N') {
                cout << "\n=== \033[0;33mJadwal Matakuliah Tidak Ditambahkan\033[0m ===\n";
                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
            }
        } else if (TableSemester1 == 3) {
            char Ytmenu3;

            system("cls");
            cout << "+========+=======+======================+======================+=========+===========+=================+\n";
            cout << "| Hari   |  Jam  |    Dosen Pengampu    | Durasi               | Ruangan |  Kuota    | Tahun Ajaran    |\n";
            cout << "+========+=======+======================+======================+=========+===========+=================+\n";
            cout << "| Senin  | 09:30 | NAWW                 | 150 m                | R5 FTTK |   " << kuota << " / 12  | 2024/2025 Genap |\n";
            cout << "+========+=======+======================+======================+=========+===========+=================+\n";
            cout << "\nApakah Ingin Menambahkan Ke Jadwal Perkuliahan (y/n) : ";
            cin >> Ytmenu3;

            if (Ytmenu3 == 'y' || Ytmenu3 == 'Y') {
                kuota -= 1;
                sks -= 3;
                
                IsiTableSemester1[TableTambah][0] = TableSemester1Array[TableSemester1 - 1][0];
                IsiTableSemester1[TableTambah][1] = TableSemester1Array[TableSemester1 - 1][1];
                IsiTableSemester1[TableTambah][2] = TableSemester1Array[TableSemester1 - 1][2];
                IsiTableSemester1[TableTambah][3] = TableSemester1Array[TableSemester1 - 1][3];
                IsiTableSemester1[TableTambah][4] = hariMK[TableSemester1 - 1];
                TableTambah++;

                cout << "\n=== \033[0;32mAnda Berhasil Menambahkan Jadwal Matakuliah Semester 1\033[0m ===\n";
                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
            } else if (Ytmenu3 == 'n' || Ytmenu3 == 'N') {
                cout << "\n=== \033[0;33mJadwal Matakuliah Tidak Ditambahkan\033[0m ===\n";
                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
            }
        }
    }

    void menuSemester1() {
        int pilihanMenuSemester1;

        while (true) {
            system("cls");
            cout << "==================== Menu Semester 1 =====================\n";
            cout << "1. INF11101 - Algoritma dan Dasar Pemrograman        2 SKS\n";
            cout << "2. INF12001 - Kalkulus                               4 SKS\n";
            cout << "3. FST12101 - Pengantar Teknologi Informasi          3 SKS\n";
            cout << "4. Kembali                                                \n";
            cout << "==========================================================\n";
            cout << "Masukkan Pilihan (1-4) : ";
            cin >> pilihanMenuSemester1;

            if (pilihanMenuSemester1 == 1) {
                if (sks >= 2) {
                    tableSemester1(pilihanMenuSemester1);
                } else {
                    cout << "\n=== \033[0;31mJumlah SKS Tidak Cukup Untuk Mengambil MataKuliah Ini.\033[0m ===\n";
                    cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                    system("pause > null");
                }
            } else if (pilihanMenuSemester1 == 2) {
                if (sks >= 4) {
                    tableSemester1(pilihanMenuSemester1);
                } else {
                    cout << "\n=== \033[0;31mJumlah SKS Tidak Cukup Untuk Mengambil MataKuliah Ini.\033[0m ===\n";
                    cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                    system("pause > null");
                }
            } else if (pilihanMenuSemester1 == 3) {
                if (sks >= 3) {
                    tableSemester1(pilihanMenuSemester1);
                } else {
                    cout << "\n=== \033[0;31mJumlah SKS Tidak Cukup Untuk Mengambil MataKuliah Ini.\033[0m ===\n";
                    cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                    system("pause > null");
                }
            } else if (pilihanMenuSemester1 == 4) {
                cout << "\n=== \033[0;33mAnda Keluar Dari Menu Semester 1\033[0m ===\n";

                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
                break;
            } else {
                cout << "\n=== \033[0;33mPilihan Tidak Valid\033[0m ===\n";

                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
            }
        }
    }

public:
    void menuLirs() {
        int pilihan;
        while (true) {
            system("cls");
            cout << "=====================================================\n";
            cout << "                         SKS yang dapat diambil: \033[38;5;214m" << sks << "\033[0m\n";
            cout << "=====================================================\n";
            cout << "1. Semester 1\n";
            cout << "2. Semester 2\n";
            cout << "3. Semester 3\n";
            cout << "4. Semester 4\n";
            cout << "5. Semester 5\n";
            cout << "6. Semester 6\n";
            cout << "7. Semester 7\n";
            cout << "8. Semester 8\n";
            cout << "9. Kembali   \n";
            cout << "=====================================================\n";
            cout << "Masukan Pilihan (1-9) : ";
            cin >> pilihan;

            if (pilihan == 1) {
                menuSemester1();
            } else if (pilihan >= 2 && pilihan <= 8) { 
                cout << "\n=== \033[0;33mTidak Ada Isi Untuk Menu Ini\033[0m ===\n";

                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
            } else if (pilihan == 9) {
                cout << "\n=== \033[0;33mAnda Keluar Dari Menu Lirs\033[0m ===\n";

                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
                break;
            } else {
                cout << "\n=== \033[0;33mPilihan Tidak Valid\033[0m ===\n";

                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
            }
        }
    }
};

class KalenderAkademik{
private:
    int pilihan;

private:
    void showKalender(){
        system("cls");
        system("start https://calendar.google.com/calendar/");
        cout << "=== \033[0;33mSedang Membuka Kalender Di Goggel\033[0m ===\n";

        cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
        system("pause > null");
    }

    void KalenderAk(){
        system("cls");
        cout << "========= Kalender Akademik =========\n";
        cout << "8 Februari 2025 -  03 Maret 2025\n";
        cout << "17 Februari 2025 -  03 Maret 2025\n";
        cout << "=====================================\n";

        cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
        system("pause > null");
    }

protected:
    void menuKalenderAkademik(){
        while (true)
        {
            system("cls");
            cout << "========= Menu Kalender Akademik =========\n";
            cout << "1. Show Kalender\n";
            cout << "2. Kalender Akademik\n";
            cout << "3. Kembali\n";
            cout << "==========================================\n";
            cout << "Pilihan : ";
            cin >> pilihan;

            if(pilihan == 1){
                showKalender();
            } else if (pilihan == 2){
                KalenderAk();
            } else if (pilihan == 3){
                cout << "\n=== \033[0;33mAnda Keluar Dari Menu Kalender Akademik\033[0m ===\n";

                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
                break;
            } else {
                cout << "\n=== \033[0;33mPilihan Tidak Valid\033[0m ===\n";

                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
            }
        }
    }
};

class Lihs{
private:
    char pilihan;
    void TableLihs(){
            cout << "\n+=====+==========+================================+============+============+=====+===============+========+\n";
            cout << "| No  | Kode     | Nama Mata Kuliah               | Nilai Angka | Nilai Huruf | SKS | Nilai Index |  Aksi  |\n";
            cout << "+=====+==========+================================+============+============+=====+===============+========+\n";
            cout << "|  1  | UNV12105 | Bahasa Inggris                 |    100     |     A      |  2  |      4        |        |\n";
            cout << "+=====+==========+================================+============+============+=====+===============+========+\n";
            cout << "|  2  | INF11101 | Algoritma dan Dasar Pemrograman|    100     |     A      |  3  |      4        |        |\n";
            cout << "+=====+==========+================================+============+============+=====+===============+========+\n";
            cout << "|  3  | INF11102 | Organisasi dan Arsitektur Komp.|    100     |     A      |  2  |      4        |        |\n";
            cout << "+=====+==========+================================+============+============+=====+===============+========+\n";
            cout << "|  4  | INF11191 | Praktikum Dasar Pemrograman    |    100     |     A      |  2  |      4        |        |\n";
            cout << "+=====+==========+================================+============+============+=====+===============+========+\n";
            cout << "|  5  | INF12101 | Logika Informatika             |    100     |     A      |  2  |      4        |        |\n";
            cout << "+=====+==========+================================+============+============+=====+===============+========+\n";
            cout << "|  6  | INF12102 | Kalkulus I                     |    100     |     A      |  2  |      4        |        |\n";
            cout << "+=====+==========+================================+============+============+=====+===============+========+\n";
            cout << "|  7  | UNV12102 | Pancasila                      |    100     |     A      |  2  |      4        |        |\n";
            cout << "+=====+==========+================================+============+============+=====+===============+========+\n";
            cout << "|  8  | UNV12104 | Bahasa Indonesia               |    100     |     A      |  2  |      4        |        |\n";
            cout << "+=====+==========+================================+============+============+=====+===============+========+\n";
            cout << "|  9  | FST12101 | Pengantar Teknologi Informasi  |    100     |     A      |  2  |      4        |        |\n";
            cout << "+=====+==========+================================+============+============+=====+===============+========+\n";
            cout << "| IP Semester  : 4                                                 SKS Semester   : 20                     |\n";
            cout << "| IP Kumulatif : 4                                                 SKS Kumulatif  : 20                     |\n";
            cout << "+==========================================================================================================+\n";

            cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
            system("pause > null");
    }

protected:
    void menuLish(){
        while (true)
        {
            system("cls");
            cout << "========= Menu Lish =========\n";
            cout << "SKS Kumlatif : 20 SKS\n";
            cout << "IPK : 4\n";
            cout << "2024/2025 Ganjil : IPS:4\n";
            cout << "=============================\n\n";

            cout << "Lihat Lebih Banyak IPS (y/t) : ";
            cin >> pilihan;

            if(pilihan == 'y' || pilihan == 'Y'){
                TableLihs();
            } else if(pilihan == 't' || pilihan == 'T'){
                cout << "\n=== \033[0;33mAnda Keluar Dari Menu LISH\033[0m ===\n";

                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
                break;
            }
        }
    }
};

class SkipdanPrestasi{
private:
    int pilihan;

    // Data Skill Set
    int meuSkillSetpilihan;
    char SkillSetyt;
    string DataTableSkillSet[4][3];
    int DataTambahSkillSet = 0;

    string DataArraySkillSet[4][3] = {
        {
            "Mengembangkan dan memelihara strategi produk yang berhasil.",
            "Mengembangkan roadmap produk yang jelas dan terarah.",
            "Kemampuan analitis dan pemecahan masalah yang kuat"
        },
        {
            "Menguasai keterampilan mendengarkan, berbicara, membaca, dan menulis dalam Bahasa Inggris.",
            "Memahami dan menggunakan tata bahasa dasar Bahasa Inggris secara benar.",
            "Keterampilan Mendengarkan, Membaca, Menulis dan Berbicara"
        },
        {
            "Meningkatkan kualitas dan akurasi data untuk memastikan analisis yang dapat dipercaya.",
            "Mengembangkan dan menjaga integritas data untuk mewujudkan analisis yang akurat.",
            "Kemampuan dalam penggunaan alat analisis data seperti SQL, Python, R, atau alat analisis data lainnya."
        },
        {
            "Menjadi seorang programmer yang kompeten dan dapat berkontribusi dalam proyek-proyek pengembangan perangkat lunak.",
            "Menguasai bahasa pemrograman tertentu, seperti Java, Python, C++, atau JavaScript.",
            "Kemampuan pemecahan masalah yang kuat, termasuk pemecahan masalah logis dan algoritma."
        }
    };

    // Data Organisasi Dan Kepanitiaan
    int pilihanmenuOrganisasiDanKepanitiaan;
    char OKyt;
    string DataOKNamaKegiatan[5], DataOKJabatan[5], DataOKTanggalMulaiKegiatan[5], DataOKTanggalSelesaiKegiatan[5], DataOKSKJabatan[5];
    int DataOrganisasiKepanitiaan = 0;

    // Data Kopetensi Dan Prestasi
    int pilihanmenuKopetensiDanPrestasi;
    char KPyt;
    string DataKPJenisPrestasi[5], DataKPTingkatPrestasi[5], DataKPNamaPrestasi[5], DataKPTahunPrestasi[5], DataKPNamaPenyelenggara[5], DataKPPeringkat[5], DataKPNamaAktivitasTerkaitKompetisi[5], DataKPUploadPiagam[5];
    int DataKopetensiDanPrestasi = 0;

    // Data Sertifikat Profesi Dan Kompetensi
    int pilihanmenuSertifikatProfesiKompetensi;
    char SPKyt;
    string DataSPKBidangKompetensi[5], DataSPKNomorSertifikat[5], DataSPKNamaPenyelenggara[5], DataSPKTanggalTerbitSertifikat[5], DataSPKTanggalExpireSertifikat[5], DataSPKUploadSertifikat[5];
    int DataSPKSertifikatProfesiKompetensi = 0;

    // Data Beasiswa
    int pilihanmenuBeasiswa;
    char Beasiswayt;
    string DataBPeriodeSemester[5], DataBNamaDonatur[5], DataBJenisBeasiswa[5], DataBTanggalMulai[5], DataBTanggalSelesai[5], DataBUploadDokumenBeasiswa[5];
    int DataTambahBeasiswa = 0;

private:
    string potong(const string& teks, size_t maxPanjang) {
        if (teks.length() <= maxPanjang)
            return teks;
        else
            return teks.substr(0, maxPanjang - 3) + "...";
    }

    void TampilanSkillSet() {
        cout << "\n+====+=================================+================================+====================================+\n";
        cout << "| No | Goals                           | Objectives                     | Competencies (Skill Set)           |\n";
        cout << "+====+=================================+================================+====================================+\n";

        for (int i = 0; i < 4; i++) {
            cout << "| " << setw(2) << i + 1 << " | "
                << setw(31) << left << potong(DataArraySkillSet[i][0], 31) << " | "
                << setw(30) << left << potong(DataArraySkillSet[i][1], 30) << " | "
                << setw(34) << left << potong(DataArraySkillSet[i][2], 34) << " |" << endl;
            cout << "+====+=================================+================================+====================================+\n";
        }
    }

    void TableSkillset() {
        cout << "+====+=================================+================================+====================================+\n";
        cout << "| No | Goals                           | Objectives                     | Competencies (Skill Set)           |\n";
        cout << "+====+=================================+================================+====================================+\n";

        for (int i = 0; i < DataTambahSkillSet; i++) {
            cout << "| " << setw(2) << i + 1 << " | "
                << setw(31) << left << potong(DataTableSkillSet[i][0], 31) << " | "
                << setw(30) << left << potong(DataTableSkillSet[i][1], 30) << " | "
                << setw(34) << left << potong(DataTableSkillSet[i][2], 34) << " |" << endl;
            cout << "+====+=================================+================================+====================================+\n";
        }
    }

private:
    void KPJenisPrestasi(){
        int pilihankpjp;

        while (true) {
            cout << "===== Jenis Prestasi =====\n";
            cout << "1. Sains\n";
            cout << "2. Seni\n";
            cout << "3. Olahraga\n";
            cout << "4. Lain-lain\n";
            cout << "==========================\n";
            cout << "Masukan Pilihan (1-4) : ";
            cin >> pilihankpjp;
    
            if(pilihankpjp >= 1 && pilihankpjp <= 4){
                string jenis[] = {"Sains", "Seni", "Olahraga", "Lain-lain"};
                DataKPJenisPrestasi[DataKopetensiDanPrestasi] = jenis[pilihankpjp - 1];
                break;
            } else {
                cout << "\n=== \033[0;31mInput Jenis Prestasi Tidak Valid! Harap masukkan angka 1-4.\033[0m ===\n";
                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
                system("cls");
                continue;
            }
        }
        
    }

    void KPTingkatPrestasi(){
        int pilihankptp;

        while (true) {
            cout << "\n===== Tingkat Prestasi =====\n";
            cout << "1. Sekolah\n";
            cout << "2. Kecamatan\n";
            cout << "3. Nasional\n";
            cout << "4. Lain-lain\n";
            cout << "==========================\n";
            cout << "Masukan Pilihan (1-4) : ";
            cin >> pilihankptp;
    
            if(pilihankptp >= 1 && pilihankptp <= 4){
                string tingkat[] = {"Sekolah", "Kecamatan", "Nasional", "Lain-lain"};
                DataKPTingkatPrestasi[DataKopetensiDanPrestasi] = tingkat[pilihankptp - 1];
                break;
            } else {
                cout << "\n=== \033[0;31mInput Tingkat Prestasi Tidak Valid! Harap masukkan angka 1-4.\033[0m ===\n";
                continue;;
            }
        }
    }

    void KPTahunPrestasi(){
        int pilihankptahunp;

        while(true){
            cout << "\n===== Tingkat Prestasi =====\n";
            cout << "1. 2025\n";
            cout << "2. 2024\n";
            cout << "3. 2023\n";
            cout << "4. 2022\n";
            cout << "==========================\n";
            cout << "Masukan Pilihan (1-4) : ";
            cin >> pilihankptahunp;
            
            if(pilihankptahunp >= 1 && pilihankptahunp <= 4){
                string tahun[] = {"2025", "2024", "2023", "2022"};
                DataKPTahunPrestasi[DataKopetensiDanPrestasi] = tahun[pilihankptahunp - 1];
                break;
            } else {
                cout << "\n=== \033[0;31mInput Tahun Prestasi Tidak Valid! Harap masukkan angka 1-4.\033[0m ===\n";
                continue;
            }
        }
    }

private:
    void BPeriodeSemester(){
        int bps;

        while(true) {
            cout << "===== Periode Semester =====\n";
            cout << "1. 2024/2025 Genap          \n";
            cout << "2. 2024/2025 Ganjil         \n";
            cout << "3. 2023/2024 Genap          \n";
            cout << "============================\n";
            cout << "Masukan Pilihan : ";
            cin >> bps;
    
            if(bps >= 1 && bps <= 3 ){
                string tahun[] = {"2024/2025 Genap", "2024/2025 Ganjil", "2023/2024 Genap"};
                DataBPeriodeSemester[DataTambahBeasiswa] = tahun[bps - 1];
                break;
            } else {
                cout << "\n=== \033[0;31mInput Periode Semester Tidak Valid! Harap masukkan angka 1-3.\033[0m ===\n";
                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
                system("cls");
                continue;
            }
        }
    }

    void BNamaDonatur(){
        int bnd;

        while(true) {
            cout << "\n===== Nama Donatur =====\n";
            cout << "1. Bank Indonesia       \n";   
            cout << "2. KIP                  \n";
            cout << "========================\n";
            cout << "Masukan Pilihan : ";
            cin >> bnd;
    
            if(bnd >= 1 && bnd <= 3 ){
                string tahun[] = {"Bank Indonesia", "KIP"};
                DataBNamaDonatur[DataTambahBeasiswa] = tahun[bnd - 1];
                break;
            } else {
                cout << "\n=== \033[0;31mInput Nama Donatur Tidak Valid! Harap masukkan angka 1-2.\033[0m ===\n";
                continue;
            }
        }
    }

private:
    void menuOverviewSKPI(){
        system("cls");

        cout << "======== Menu Overview SKPI ========\n";
        cout << "\033[1;38;5;18m\nSurat Keterangan Pendamping Ijazah\n\033[0m";
        cout << "\033[0;36mNOMOR: -\n\n\033[0m";

        cout << "\033[1;33mIdentitas Diri Pemegang SKPI\n\n\033[0m";
        cout << "Nama\n\033[0;36m-\n\n\033[0m";
        cout << "NIM\n\033[0;36m-\n\n\033[0m";
        cout << "Tempat Dan Tanggal Lahir\n\033[0;36m-\n\n\033[0m";
        cout << "Tahun Lulus\n\033[0;36m-\n\n\033[0m";
        cout << "Nomor Ijazah\n\033[0;36m-\n\n\033[0m";
        cout << "Gelar\n\033[0;36m-\n\n\033[0m";

        cout << "\033[1;33mIdentitas Penyelenggaran Program\n\n\033[0m";
        cout << "Program Studi\n\033[0;36m-\n\n\033[0m";
        cout << "Bahasa Pengantar Kuliah\n\033[0;36mBahasa Indonesia\n\n\033[0m";
        cout << "Status Akreditasi\n\033[0;36m-\n\n\033[0m";
        cout << "Sistem Penilaian\n\033[0;36m-\n\n\033[0m";
        cout << "Jenis & Program Pendidikan Tinggi\n\033[0;36m-\n\n\033[0m";
        cout << "Lama Studi\n\033[0;36m-\n\n\033[0m";
        cout << "Jalur Masuk\n\033[0;36m-\n\n\033[0m";
        cout << "Peringkat Kompetensi Sesuai KKNI\n\033[0;36m-\n\n\033[0m";
        cout << "Jenis & Program Pendidikan Tinggi Lanjutan\n\033[0;36m-\n\n\033[0m";

        cout << "\033[1;33mKualifikasi Dan Hasil Yang Dicapai\n\n\033[0m";
        cout << "\033[0;36mundefined\n\033[0m";

        cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
        system("pause > null");
    }

    void menuSkillSet(){
        while (true) {
            int SkillSetpilihan;
            system("cls");
            cout << "===== Menu Skill Set =====\n";
            cout << "1. Tambah Data            \n";
            cout << "2. Show Table             \n";
            cout << "3. Kembali                \n";
            cout << "==========================\n";
            cout << "Masukan Pilihan : ";
            cin >> meuSkillSetpilihan;
    
            if(meuSkillSetpilihan == 1){
                while (true) {
                    system("cls");
                    TampilanSkillSet();
                    cout << "\nMasukkan Pilihan : ";
                    cin >> SkillSetpilihan;
        
                    if (SkillSetpilihan >= 1 && SkillSetpilihan <= 4) {
                        DataTableSkillSet[DataTambahSkillSet][0] = DataArraySkillSet[SkillSetpilihan - 1][0];
                        DataTableSkillSet[DataTambahSkillSet][1] = DataArraySkillSet[SkillSetpilihan - 1][1];
                        DataTableSkillSet[DataTambahSkillSet][2] = DataArraySkillSet[SkillSetpilihan - 1][2];
    
                        DataTambahSkillSet++;
                        cout << "\n=== \033[0;32mAnda Berhasil Menambahkan Data Skill Set\033[0m ===\n";
                    } else {
                        cout << "\n=== \033[0;31mInput Skill Set Tidak Valid! Harap masukkan angka 1-4.\033[0m ===\n";

                        cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                        system("pause > null");
                        continue;
                    }
    
                    cout << "\nApakah Anda ingin menambah data lagi? (y/n) : ";
                    cin >> SkillSetyt;
        
                    if (SkillSetyt == 'n' || SkillSetyt == 'N') {
                        break;
                    }
                }
            } else if(meuSkillSetpilihan == 2){
                system("cls");
                TableSkillset();

                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
            } else if(meuSkillSetpilihan == 3){
                cout << "\n=== \033[0;33mAnda Keluar Dari Menu Skill Set\033[0m ===\n";

                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
                break;
            } else {
                cout << "\n=== \033[0;33mPilihan Tidak Valid\033[0m ===\n";

                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
            }
        }
    }
    
    void menuOrganisasiDanKepanitiaan(){
        while (true) {
            system("cls");
            cout << "===== Menu Organisasi Kepanitiaan =====\n";
            cout << "1. Tambah Data                         \n";
            cout << "2. Show Table                          \n";
            cout << "3. Kembali                             \n";
            cout << "=======================================\n";
            cout << "Masukan Pilihan : ";
            cin >> pilihanmenuOrganisasiDanKepanitiaan;
    
            if(pilihanmenuOrganisasiDanKepanitiaan == 1){
                while (true) {
                    system("cls");
                    cout << "Masukan Nama Kegiatan : ";
                    cin >> DataOKNamaKegiatan[DataOrganisasiKepanitiaan];
                    cout << "Masukan Jabatan : ";
                    cin >> DataOKJabatan[DataOrganisasiKepanitiaan];
                    cout << "Masukan Tanggal Mulai Kegiatan : ";
                    cin >> DataOKTanggalMulaiKegiatan[DataOrganisasiKepanitiaan];
                    cout << "Masukan Tanggal Selesai Kegiatan : ";
                    cin >> DataOKTanggalSelesaiKegiatan[DataOrganisasiKepanitiaan];
                    cout << "Masukan SK Jabatan : ";
                    cin >> DataOKSKJabatan[DataOrganisasiKepanitiaan];

                    DataOrganisasiKepanitiaan++;
                    cout << "\n=== \033[0;32mAnda Berhasil Menambahkan Data Organisasi Kepanitiaan\033[0m ===\n";

                    cout << "\nApakah Ingin Menambah Data Lagi (y/t) : ";
                    cin >> OKyt;

                    if(OKyt == 't' || OKyt == 'T'){
                        break;
                    }
                }
            } else if(pilihanmenuOrganisasiDanKepanitiaan == 2){
                if (DataOrganisasiKepanitiaan == 0) {
                    system("cls");
                    cout << "=================\n";
                    cout << " Tidak ada data! \n";
                    cout << "=================\n";
                } else {
                    system("cls");
                    cout << "+=====+=========================+====================+===============+===============+=====================+\n";
                    cout << "| No  | Nama Kegiatan           | Jabatan            | Mulai         | Selesai       | SK Jabatan          |\n";
                    cout << "+=====+=========================+====================+===============+===============+=====================+\n";
                    
                    for (int i = 0; i < DataOrganisasiKepanitiaan; i++) {
                        cout << "| " << setw(1) << i + 1 << "   | "
                            << left << setw(23) << DataOKNamaKegiatan[i] << " | "
                            << left << setw(18) << DataOKJabatan[i] << " | "
                            << left << setw(13) << DataOKTanggalMulaiKegiatan[i] << " | "
                            << left << setw(13) << DataOKTanggalSelesaiKegiatan[i] << " | "
                            << left << setw(19) << DataOKSKJabatan[i] << " |\n";
                    }
                    cout << "+=====+=========================+====================+===============+===============+=====================+\n";
                }
                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
            } else if(pilihanmenuOrganisasiDanKepanitiaan == 3){
                cout << "\n=== \033[0;33mAnda Keluar Dari Menu Organisasi Kepanitiaan\033[0m ===\n";

                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
                break;
            } else {
                cout << "\n=== \033[0;33mPilihan Tidak Valid\033[0m ===\n";

                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
            }
        }
    }

    void menuKopetensiDanPrestasi(){
        while (true) {
            system("cls");
            cout << "===== Menu Kopetensi Dan Prestasi =====\n";
            cout << "1. Tambah Data                         \n";
            cout << "2. Show Table                          \n";
            cout << "3. Kembali                             \n";
            cout << "=======================================\n";
            cout << "Masukan Pilihan : ";
            cin >> pilihanmenuKopetensiDanPrestasi;
    
            if(pilihanmenuKopetensiDanPrestasi == 1){
                while (true) {
                    system("cls");

                    KPJenisPrestasi();
                    KPTingkatPrestasi();
                    cout << "\nMasukan Nama Prestasi : ";
                    cin >> DataKPNamaPrestasi[DataKopetensiDanPrestasi];
                    KPTahunPrestasi();
                    cout << "\nMasukan Nama Penyelenggara : ";
                    cin >> DataKPNamaPenyelenggara[DataKopetensiDanPrestasi];
                    cout << "Masukan Peringkat : ";
                    cin >> DataKPPeringkat[DataKopetensiDanPrestasi];
                    cout << "Masukan Nama Aktivitas Terkait Kompetisi : ";
                    cin >> DataKPNamaAktivitasTerkaitKompetisi[DataKopetensiDanPrestasi];
                    cout << "Masukan Upload Piagam : ";
                    cin >> DataKPUploadPiagam[DataKopetensiDanPrestasi];

                    DataKopetensiDanPrestasi++;
                    cout << "\n=== \033[0;32mAnda Berhasil Menambahkan Data Kopetensi Dan Prestasi\033[0m ===\n";

                    cout << "\nApakah Ingin Menambah Data Lagi (y/t) : ";
                    cin >> KPyt;

                    if(KPyt == 't' || KPyt == 'T'){
                        break;
                    }
                }
            } else if(pilihanmenuKopetensiDanPrestasi == 2){
                if (DataKopetensiDanPrestasi == 0) {
                    cout << "\n=================\n";
                    cout << "Tidak ada data!\n";
                    cout << "=================\n";
                } else {
                    system("cls");
                    cout << "+=====+===================+====================+===========+=======+=========+============+=================+=================+\n";
                    cout << "| No  | Nama Prestasi     | Penyelenggara      | Peringkat | Tahun | Jenis   | Tingkat    | Aktivitas       | Piagam          |\n";
                    cout << "+=====+===================+====================+===========+=======+=========+============+=================+=================+\n";
                    
                    for (int i = 0; i < DataKopetensiDanPrestasi; i++) {
                        cout << "| " << setw(3) << i + 1 << " | "
                            << left << setw(17) << DataKPNamaPrestasi[i] << " | "
                            << left << setw(18) << DataKPNamaPenyelenggara[i] << " | "
                            << left << setw(9) << DataKPPeringkat[i] << " | "
                            << left << setw(5) << DataKPTahunPrestasi[i] << " | "
                            << left << setw(7) << DataKPJenisPrestasi[i] << " | "
                            << left << setw(10) << DataKPTingkatPrestasi[i] << " | "
                            << left << setw(15) << DataKPNamaAktivitasTerkaitKompetisi[i] << " | "
                            << left << setw(15) << DataKPUploadPiagam[i] << " |\n";
                    }
                    cout << "+=====+===================+====================+===========+=======+=========+============+=================+=================+\n";
                }
                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
            } else if(pilihanmenuKopetensiDanPrestasi == 3){
                cout << "\n=== \033[0;33mAnda Keluar Dari Menu Kompetensi dan Prestasi\033[0m ===\n";
                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
                break;
            } else {
                cout << "\n=== \033[0;33mPilihan Tidak Valid\033[0m ===\n";

                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
            }
        }
        
    }
    
    void menuSertifikatProfesiKompetensi(){
        while (true) {
            system("cls");
            cout << "===== Menu Sertifikat Profesi Kompetensi =====\n";
            cout << "1. Tambah Data                                \n";
            cout << "2. Show Table                                 \n";
            cout << "3. Kembali                                    \n";
            cout << "==============================================\n";
            cout << "Masukan Pilihan : ";
            cin >> pilihanmenuOrganisasiDanKepanitiaan;

            if(pilihanmenuOrganisasiDanKepanitiaan == 1){
                while (true) {
                    system("cls");
                    cout << "Masukan Bidang Kompetensi : ";
                    cin >> DataSPKBidangKompetensi[DataSPKSertifikatProfesiKompetensi];
                    cout << "Masukan Nomor Sertifikat : ";
                    cin >> DataSPKNomorSertifikat[DataSPKSertifikatProfesiKompetensi];
                    cout << "Masukan Nama Penyelenggara : ";
                    cin >> DataSPKNamaPenyelenggara[DataSPKSertifikatProfesiKompetensi];
                    cout << "Masukan Tanggal Terbit Sertifikat : ";
                    cin >> DataSPKTanggalTerbitSertifikat[DataSPKSertifikatProfesiKompetensi];
                    cout << "Masukan Tanggal Expire Sertifikat : ";
                    cin >> DataSPKTanggalExpireSertifikat[DataSPKSertifikatProfesiKompetensi];
                    cout << "Masukan Upload Sertifikat : ";
                    cin >> DataSPKUploadSertifikat[DataSPKSertifikatProfesiKompetensi];

                    DataSPKSertifikatProfesiKompetensi++;
                    cout << "\n=== \033[0;32mAnda Berhasil Menambahkan Data Sertifikat Profesi Kompetensi\033[0m ===\n";

                    cout << "\nApakah Ingin Menambah Data Lagi (y/t) : ";
                    cin >> SPKyt;

                    if(SPKyt == 't' || SPKyt == 'T'){
                        break;
                    }
                }
            } else if(pilihanmenuOrganisasiDanKepanitiaan == 2){
                if (DataSPKSertifikatProfesiKompetensi == 0) {
                    system("cls");
                    cout << "=================\n";
                    cout << " Tidak ada data! \n";
                    cout << "=================\n";
                } else {
                    system("cls");
                    cout << "+=====+=========================+=======================+===========================+===========================+============================+============================+\n";
                    cout << "| No  | Bidang Kompetensi       | Nomor Sertifikat      | Nama Penyelenggara        | Tanggal Terbit Sertifikat | Tanggal Expire Sertifikat  | Upload Sertifikat          |\n";
                    cout << "+=====+=========================+=======================+===========================+===========================+============================+============================+\n";
            
                    for (int i = 0; i < DataSPKSertifikatProfesiKompetensi; i++) {
                        cout << "| " << setw(3) << i + 1 << " | "
                            << left << setw(23) << DataSPKBidangKompetensi[i] << " | "
                            << left << setw(21) << DataSPKNomorSertifikat[i] << " | "
                            << left << setw(25) << DataSPKNamaPenyelenggara[i] << " | "
                            << left << setw(25) << DataSPKTanggalTerbitSertifikat[i] << " | "
                            << left << setw(26) << DataSPKTanggalExpireSertifikat[i] << " | "
                            << left << setw(26) << DataSPKUploadSertifikat[i] << " |\n";
                    }
            
                    cout << "+=====+=========================+=======================+===========================+===========================+============================+============================+\n";
                }
                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
            } else if(pilihanmenuOrganisasiDanKepanitiaan == 3){
                cout << "\n=== \033[0;33mAnda Keluar Dari Menu Sertifikat Profesi Kompetensi\033[0m ===\n";

                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
                break;
            } else {
                cout << "\n=== \033[0;33mPilihan Tidak Valid\033[0m ===\n";

                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
            }
        }
    }
    
    void menuBeasiswa(){
        while (true) {
            system("cls");
            cout << "===== Menu Beasiswa =====\n";
            cout << "1. Tambah Data           \n";
            cout << "2. Show Table            \n";
            cout << "3. Kembali               \n";
            cout << "=========================\n";
            cout << "Masukan Pilihan : ";
            cin >> pilihanmenuBeasiswa;

            if(pilihanmenuBeasiswa == 1){
                while (true) {
                    system("cls");
                    BPeriodeSemester();
                    BNamaDonatur();
                    cout << "\nMasukan Jenis Beasiswa : ";
                    cin >> DataBJenisBeasiswa[DataTambahBeasiswa];
                    cout << "Masukan Tanggal Mulai : ";
                    cin >> DataBTanggalMulai[DataTambahBeasiswa];
                    cout << "Masukan Tanggal Selesai : ";
                    cin >> DataBTanggalSelesai[DataTambahBeasiswa];
                    cout << "Masukan Upload Dokumen Beasiswa : ";
                    cin >> DataBUploadDokumenBeasiswa[DataTambahBeasiswa];

                    DataTambahBeasiswa++;
                    cout << "\n=== \033[0;32mAnda Berhasil Menambahkan Data Beasiswa\033[0m ===\n";

                    cout << "\nApakah Ingin Menambah Data Lagi (y/t) : ";
                    cin >> Beasiswayt;

                    if(Beasiswayt == 't' || Beasiswayt == 'T'){
                        break;
                    }
                }
            } else if(pilihanmenuBeasiswa == 2){
                if (DataTambahBeasiswa == 0) {
                    system("cls");
                    cout << "=================\n";
                    cout << " Tidak ada data! \n";
                    cout << "=================\n";
                } else {
                    system("cls");
                    cout << "+=====+========================+=======================+===========================+===========================+============================+============================+\n";
                    cout << "| No  | Periode Semester       | Nama Donatur          | Jenis Beasiswa            | Tanggal Mulai             | Tanggal Selesai            | Upload Dokumen             |\n";
                    cout << "+=====+========================+=======================+===========================+===========================+============================+============================+\n";
            
                    for (int i = 0; i < DataTambahBeasiswa; i++) {
                        cout << "| " << setw(3) << i + 1 << " | "
                            << left << setw(22) << DataBPeriodeSemester[i] << " | "
                            << left << setw(21) << DataBNamaDonatur[i] << " | "
                            << left << setw(25) << DataBJenisBeasiswa[i] << " | "
                            << left << setw(25) << DataBTanggalMulai[i] << " | "
                            << left << setw(26) << DataBTanggalSelesai[i] << " | "
                            << left << setw(26) << DataBUploadDokumenBeasiswa[i] << " |\n";
                    }
            
                    cout << "+=====+========================+=======================+===========================+===========================+============================+============================+\n";
                }
                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
            } else if(pilihanmenuBeasiswa == 3){
                cout << "\n=== \033[0;33mAnda Keluar Dari Menu Beasiswa\033[0m ===\n";

                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
                break;
            } else {
                cout << "\n=== \033[0;33mPilihan Tidak Valid\033[0m ===\n";

                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
            }
        }
    }

protected:
    void menuSkipdanPrestasi(){
        while(true){
            system("cls");
            cout << "========= Menu SKPI & Prestasi =========\n";
            cout << "1. Overview SKPI\n";
            cout << "2. Skill SET\n";
            cout << "3. Organisasi Dan Kepanitiaan\n";
            cout << "4. Kompetisi Dan Prestasi\n";
            cout << "5. Sertifikasi Profesi Dan Kompetensi\n";
            cout << "6. Beasiswa\n";
            cout << "7. Kembali\n";
            cout << "========================================\n";
            cout << "Pilihan : ";
            cin >> pilihan;

            if(pilihan == 1){
                menuOverviewSKPI();
            } else if(pilihan == 2){
                menuSkillSet();
            } else if(pilihan == 3){
                menuOrganisasiDanKepanitiaan();
            } else if(pilihan == 4){
                menuKopetensiDanPrestasi();
            } else if(pilihan == 5){
                menuSertifikatProfesiKompetensi();
            } else if(pilihan == 6){
                menuBeasiswa();
            } else if(pilihan == 7){
                cout << "\n=== \033[0;33mAnda Keluar Dari Menu SKPI & Prestasi\033[0m ===\n";

                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
                break;
            } else {
                cout << "\n=== \033[0;33mPilihan Tidak Valid\033[0m ===\n";

                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
            }
        }
    }
};

class LirsPertukaranPelajarInbound {
private:
    int Lppkuota = 5;
    int LJp, LF, LPs, LMps;
    char lanjut;
    string PrevixProgramStudi;

public:
    int& sks = shared;
    int TambahTamblePelajarInbound = 0;
    string IsiTableProgramStudi[3][5];
    string LPPhariMK[3] = {"Kamis", "Jumat", "Sabtu"};
    string ArrayTableProgramStudi[3][5] = {
        {"13:00", "Agama", "UNV12001", "R6 FTTK"},
        {"07:30", "Bahasa Indonesia", "UNV12004", "R7 FTTK"},
        {"09:30", "Bahasa Inggris", "UNV12005", "R8 FTTK"}
    };

private:
    void JenjangPendidikan() {
        cout << "=====================================\n";
        cout << "         SKS yang dapat diambil: \033[38;5;214m" << sks << "\033[0m\n";
        cout << "=====================================\n";
        cout << "\n====== Pilih Jenjang Pendidikan =====\n";
        cout << "1. S1 \n";
        cout << "2. Profesi \n";
        cout << "3. S2 \n";
        cout << "4. Kembali \n";
        cout << "=====================================\n";
        cout << "Masukan Pilihan (1-4) : ";
        cin >> LJp;
    }

    void Fakultas() {
        cout << "\n============= Pilih Fakultas =============\n";
        cout << "1. Fakultas Kedokteran\n";
        cout << "2. Fakultas Ilmu Sosial dan Ilmu Politik\n";
        cout << "3. Fakultas Ilmu Kelautan dan Perikanan\n";
        cout << "==========================================\n";
        cout << "Masukan Pilihan (1-3) : ";
        cin >> LF;
    }

    void ProgramStudi(int PFakultas) {
        if(PFakultas == 1){
            cout << "\n======== Pilih Program Studi =======\n";
            cout << "1. Kedokteran\n";
            cout << "====================================\n";
            cout << "Masukan Pilihan : ";
            cin >> LPs;

            PrevixProgramStudi = "Kedoctoran";
        } else if(PFakultas == 2) {
            cout << "\n======== Pilih Program Studi =======\n";
            cout << "1. Ilmu Hukum\n";
            cout << "====================================\n";
            cout << "Masukan Pilihan : ";
            cin >> LPs;

            PrevixProgramStudi = "FISIP";
        } else if (PFakultas == 3){
            cout << "\n======== Pilih Program Studi =======\n";
            cout << "1. Ilmu Kelatutan\n";
            cout << "====================================\n";
            cout << "Masukan Pilihan : ";
            cin >> LPs;

            PrevixProgramStudi = "FKIP";
        }
    }
    
    void menuProgramStudi(int PProgramStudi){
        if(PProgramStudi == 1 && PrevixProgramStudi == "Kedoctoran" ){
            while (true){
                system("cls");
                cout << "==================== Menu Kedokteran =====================\n";
                cout << "1. UNV12001 - Agama                                  2 SKS\n";
                cout << "2. UNV12004 - Bahasa Indonesia                       2 SKS\n";
                cout << "3. UNV12005 - Bahasa Inggris                         3 SKS\n";
                cout << "4. Kembali                                                \n";
                cout << "==========================================================\n";
                cout << "Masukan Pilihan (1-4) : ";
                cin >> LMps;

                if(LMps == 1){
                    if (sks >= 2) {
                        TableProgramStudi(LMps);
                    } else {
                        cout << "\n=== \033[0;31mJumlah SKS Tidak Cukup Untuk Mengambil MataKuliah Ini.\033[0m ===\n";
                        cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                        system("pause > null");
                    }
                } else if(LMps == 2){
                    if (sks >= 2) {
                        TableProgramStudi(LMps);
                    } else {
                        cout << "\n=== \033[0;31mJumlah SKS Tidak Cukup Untuk Mengambil MataKuliah Ini.\033[0m ===\n";
                        cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                        system("pause > null");
                    }
                } else if(LMps == 3){
                    if (sks >= 3) {
                        TableProgramStudi(LMps);
                    } else {
                        cout << "\n=== \033[0;31mJumlah SKS Tidak Cukup Untuk Mengambil MataKuliah Ini.\033[0m ===\n";
                        cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                        system("pause > null");
                    }
                } else if(LMps == 4){
                    cout << "\n=== \033[0;33mAnda Keluar Dari Menu Matakuliah Kedokteran.\033[0m ===\n";
                    cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                    system("pause > null");
                    break;
                } else {
                    cout << "\n=== \033[0;31mInput Matakuliah Tidak Valid! Harap masukkan angka 1-4.\033[0m ===\n";
                    cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                    system("pause > null");
                }
            }
        } else if(PProgramStudi == 1 && PrevixProgramStudi == "FISIP"){
            cout << "\n=== \033[0;33mTidak MataKuliah Untuk Program Studi Ini\033[0m ===\n";

            cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
            system("pause > null");
        } else if(PProgramStudi == 1 && PrevixProgramStudi == "FKIP"){
            cout << "\n=== \033[0;33mTidak MataKuliah Untuk Program Studi Ini\033[0m ===\n";

            cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
            system("pause > null");
        }
    }

    bool isMKSudahDiambil(string kodeMK) {
        for(int i = 0; i < TambahTamblePelajarInbound; i++) {
            if(IsiTableProgramStudi[i][2] == kodeMK) {
                return true;
            }
        }
        return false;
    }

    void TableProgramStudi(int PTableProgramStudi){
        string kodeMK = ArrayTableProgramStudi[PTableProgramStudi-1][2];
        string namaMK = ArrayTableProgramStudi[PTableProgramStudi-1][1];
        
        if(isMKSudahDiambil(kodeMK)) {
            cout << "\n=== \033[0;31mMata kuliah " << namaMK << " (" << kodeMK << ") sudah ada di jadwal Anda!\033[0m ===\n";
            cout << "\nTekan tombol apapun untuk melanjutkan : ";
            system("pause > null");
            return;
        }

        if (PTableProgramStudi == 1) {
            char Ytmenu1;

            system("cls");
            cout << "+=======+=======+======================+======================+=========+===========+==================+\n";
            cout << "| Hari |  Jam   |    Dosen Pengampu    | Durasi               | Ruangan |  Kuota    | Tahun Ajaran     |\n";
            cout << "+=======+=======+======================+======================+=========+===========+==================+\n";
            cout << "| Kamis | 13:00 | FIRA                 | 150 m                | R6 FTTK |   " << Lppkuota << " / 10  | 2024/2025 Genap  |\n";
            cout << "+=======+=======+======================+======================+=========+===========+==================+\n";
            cout << "\nApakah Ingin Menambahkan Ke Jadwal Perkuliahan (y/n) : ";
            cin >> Ytmenu1;

            if (Ytmenu1 == 'y' || Ytmenu1 == 'Y') {
                Lppkuota -= 1;
                sks -= 2;

                IsiTableProgramStudi[TambahTamblePelajarInbound][0] = ArrayTableProgramStudi[PTableProgramStudi - 1][0];
                IsiTableProgramStudi[TambahTamblePelajarInbound][1] = ArrayTableProgramStudi[PTableProgramStudi - 1][1];
                IsiTableProgramStudi[TambahTamblePelajarInbound][2] = ArrayTableProgramStudi[PTableProgramStudi - 1][2];
                IsiTableProgramStudi[TambahTamblePelajarInbound][3] = ArrayTableProgramStudi[PTableProgramStudi - 1][3];
                IsiTableProgramStudi[TambahTamblePelajarInbound][4] = LPPhariMK[PTableProgramStudi - 1];
                TambahTamblePelajarInbound++;

                cout << "\n=== \033[0;32mAnda Berhasil Menambahkan Jadwal Matakuliah\033[0m ===\n";
                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
            } else if (Ytmenu1 == 'n' || Ytmenu1 == 'N') {
                cout << "\n=== \033[0;33mJadwal Matakuliah Tidak Ditambahkan\033[0m ===\n";
                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
            }
        } else if (PTableProgramStudi == 2) {
            char Ytmenu2;

            system("cls");
            cout << "+========+=======+======================+======================+=========+===========+=================+\n";
            cout << "| Hari   |  Jam  |    Dosen Pengampu    | Durasi               | Ruangan |  Kuota    | Tahun Ajaran    |\n";
            cout << "+========+=======+======================+======================+=========+===========+=================+\n";
            cout << "| Jumat  | 07:30 | FAIZ                 | 150 m                | R7 FTTK |   " << Lppkuota << " / 11  | 2024/2025 Genap|\n";
            cout << "+========+=======+======================+======================+=========+===========+=================+\n";
            cout << "\nApakah Ingin Menambahkan Ke Jadwal Perkuliahan (y/n) : ";
            cin >> Ytmenu2;

            if (Ytmenu2 == 'y' || Ytmenu2 == 'Y') {
                Lppkuota -= 1;
                sks -= 2;

                IsiTableProgramStudi[TambahTamblePelajarInbound][0] = ArrayTableProgramStudi[PTableProgramStudi - 1][0];
                IsiTableProgramStudi[TambahTamblePelajarInbound][1] = ArrayTableProgramStudi[PTableProgramStudi - 1][1];
                IsiTableProgramStudi[TambahTamblePelajarInbound][2] = ArrayTableProgramStudi[PTableProgramStudi - 1][2];
                IsiTableProgramStudi[TambahTamblePelajarInbound][3] = ArrayTableProgramStudi[PTableProgramStudi - 1][3];
                IsiTableProgramStudi[TambahTamblePelajarInbound][4] = LPPhariMK[PTableProgramStudi - 1];
                TambahTamblePelajarInbound++;

                cout << "\n=== \033[0;32mAnda Berhasil Menambahkan Jadwal Matakuliah\033[0m ===\n";
                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
            } else if (Ytmenu2 == 'n' || Ytmenu2 == 'N') {
                cout << "\n=== \033[0;33mJadwal Matakuliah Tidak Ditambahkan\033[0m ===\n";
                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
            }
        } else if (PTableProgramStudi == 3) {
            char Ytmenu3;

            system("cls");
            cout << "+========+=======+======================+======================+=========+===========+=================+\n";
            cout << "| Hari   |  Jam  |    Dosen Pengampu    | Durasi               | Ruangan |  Kuota    | Tahun Ajaran    |\n";
            cout << "+========+=======+======================+======================+=========+===========+=================+\n";
            cout << "| Sabtu  | 09:30 | MIWA                 | 150 m                | R8 FTTK |   " << Lppkuota << "/ 12   | 2024/2025 Genap |\n";
            cout << "+========+=======+======================+======================+=========+===========+=================+\n";
            cout << "\nApakah Ingin Menambahkan Ke Jadwal Perkuliahan (y/n) : ";
            cin >> Ytmenu3;

            if (Ytmenu3 == 'y' || Ytmenu3 == 'Y') {
                Lppkuota -= 1;
                sks -= 3;
                
                IsiTableProgramStudi[TambahTamblePelajarInbound][0] = ArrayTableProgramStudi[PTableProgramStudi - 1][0];
                IsiTableProgramStudi[TambahTamblePelajarInbound][1] = ArrayTableProgramStudi[PTableProgramStudi - 1][1];
                IsiTableProgramStudi[TambahTamblePelajarInbound][2] = ArrayTableProgramStudi[PTableProgramStudi - 1][2];
                IsiTableProgramStudi[TambahTamblePelajarInbound][3] = ArrayTableProgramStudi[PTableProgramStudi - 1][3];
                IsiTableProgramStudi[TambahTamblePelajarInbound][4] = LPPhariMK[PTableProgramStudi - 1];
                TambahTamblePelajarInbound++;

                cout << "\n=== \033[0;32mAnda Berhasil Menambahkan Jadwal Matakuliah\033[0m ===\n";
                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
            } else if (Ytmenu3 == 'n' || Ytmenu3 == 'N') {
                cout << "\n=== \033[0;33mJadwal Matakuliah Tidak Ditambahkan\033[0m ===\n";
                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
            }
        }
    }

public:
    void menuLirsPertukaranPelajarInbound() {
        while (true) {
            system("cls");
            JenjangPendidikan();

            if (LJp == 1 ) {
                Fakultas();
                
                if (LF == 1) {
                    ProgramStudi(LF);
                    if(LPs == 1){
                        menuProgramStudi(LPs);
                    } else {
                        cout << "\n=== \033[0;31mInput Program Studi Tidak Valid! Harap masukkan angka 1.\033[0m ===\n";
                        cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                        system("pause > null");
                    }
                } else if (LF == 2){
                    ProgramStudi(LF);
                    if(LPs == 1){
                        menuProgramStudi(LPs);
                    } else {
                        cout << "\n=== \033[0;31mInput Program Studi Tidak Valid! Harap masukkan angka 1.\033[0m ===\n";
                        cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                        system("pause > null");
                    }
                } else if (LF == 3){
                    ProgramStudi(LF);
                    if(LPs == 1){
                        menuProgramStudi(LPs);
                    } else {
                        cout << "\n=== \033[0;31mInput Program Studi Tidak Valid! Harap masukkan angka 1.\033[0m ===\n";
                        cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                        system("pause > null");
                    }
                } else {
                    cout << "\n=== \033[0;31mInput Fakultas Tidak Valid! Harap masukkan angka 1-3.\033[0m ===\n";
                    cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                    system("pause > null");
                }
            } else if(LJp == 2 || LJp == 3){
                cout << "\n=== \033[0;33mJenjang Pendidikan Tidak Tersedia\033[0m ===\n";
                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
            } else if (LJp == 4){
                cout << "\n=== \033[0;33mAnda Keluar Dari Menu Lirs Pertukaran Pelajar Inbound\033[0m ===\n";
                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
                break;
            } else {
                cout << "\n=== \033[0;31mInput Jenjang Pendidikan Tidak Valid! Harap masukkan angka 1-4.\033[0m ===\n";
                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
            }
        }
    }
};

class TagihanDanPembayaran{
protected:
    void menuTangihanDanPembayaran(){
        system("cls");
        cout << "========== Tagihan & Pembayaran ==========\n\n";
        cout << "\033[1mPeriode\n\033[0;36m2024/2025 Genap\n\n\033[0m";
        cout << "\033[1mStatus Pembayaran\n\033[0;92mLunas\n\n\033[0m";
        cout << "\033[1mNominal Tagihan\n\033[0;36mRp. 10.000.000,00\n\n\033[0m";
        cout << "\033[1mPotong UKT\n\033[0;36mRp. 0,00\n\n\033[0m";
        cout << "\033[1mTotal Pembayaran\n\033[0;36mRp. 10.000.000,00\n\n\033[0m";
        cout << "\033[1mSisa Pembayaran\n\033[0;36mRp. 0,00\n\n\033[0m";
        cout << "\033[1mTanggal Pembayaran\n\033[0;36m2025-00-01 00:00:00\n\n\033[0m";
        cout << "\033[1mVirtual Account\n\033[0;36m00000000000000000\n\n\033[0m";

        cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
        system("pause > null");
    }
};

class Statistik{
protected:
    void menuStatistik(){
        system("cls");
        cout << "\n=== \033[0;33mMembuka aplikasi exel...\033[0m ===\n";
        system("start excel \"D:\\TUGAS KULIAH PRAKTIK\\PROJEK C++\\.vscode\\belajar c++\\Tugas PBO\\Static.xlsx\"");

        cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
        system("pause > null");
    }
};

class MBKM : public AktivitasMahasiswa{
private:
    int tahun;
    int semestergenapganjil;

private:
    void dataMBKM(int Datasemestergenapganjil){
        if(Datasemestergenapganjil >= 1 && Datasemestergenapganjil <= 2 && tahun == 1){
            system("cls");
            cout << "========== Data MBKM ==========\n\n";
            cout << "PPG Dalam Jabatan\n0 kegiatan\n\n";
            cout << "Kegiatan Penelitian Reguler\n0 kegiatan\n\n";
            cout << "Pertukaran Pelajar\n0 kegiatan\n\n";
            cout << "Membangun Desa/Kuliah Kerja Nyata Tematik\n0 kegiatan\n\n";
            cout << "Proyek Kemanusiaan\n0 kegiatan\n\n";
            cout << "Magang/Praktik Kerja\n" << AkPraktikKerjaLapangan <<" kegiatan\n\n";
            cout << "Studi/Proyek Independen\n0 kegiatan\n\n";
            cout << "Penelitian/Riset\n0 kegiatan\n\n";
            cout << "Asistensi Mengajar Di Satuan Pendidikan\n0 kegiatan\n\n";
            cout << "Kegiatan Wiraisaha\n0 kegiatan\n\n";

            cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
            system("pause > null");
        } else if(Datasemestergenapganjil >= 1 && Datasemestergenapganjil <= 2) {
            cout << "\n=== \033[0;33mTidak Ada Isi Untuk Menu Ini\033[0m ===\n";

            cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
            system("pause > null");
        } else {
            cout << "\n=== \033[0;31mInput MBKM Tidak Valid! Harap masukkan angka 1-2.\033[0m ===\n";
            cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
            system("pause > null");
        }
        
    }

protected:
    void menuMBKM(){
        while (true)
        {
            system("cls");
            cout << "========== Menu MBKM ==========\n";
            cout << "1. 2024/2025\n";
            cout << "2. 2025/2026\n";
            cout << "3. 2026/2027\n";
            cout << "4. Keluar \n";
            cout << "===============================\n";
            cout << "Pilih menu: ";
            cin >> tahun;
    
            if(tahun == 1){
                cout << "\n========== Menu MBKM ==========\n";
                cout << "1. 2024/2025 Genap               \n";
                cout << "2. 2024/2025 Ganjil              \n";
                cout << "===============================\n";
                cout << "Pilih menu: ";
                cin >> semestergenapganjil;
    
                dataMBKM(semestergenapganjil);
            } else if(tahun == 2){
                cout << "\n========== Menu MBKM ==========\n";
                cout << "1. 2025/2026 Genap               \n";
                cout << "2. 2025/2026 Ganjil              \n";
                cout << "===============================\n";
                cout << "Pilih menu: ";
                cin >> semestergenapganjil;
    
                dataMBKM(semestergenapganjil);
            } else if(tahun == 3){
                cout << "\n========== Menu MBKM ==========\n";
                cout << "1. 2026/2027 Genap\n";
                cout << "2. 2026/2027 Ganjil\n";
                cout << "===============================\n";
                cout << "Pilih menu: ";
                cin >> semestergenapganjil;
    
                dataMBKM(semestergenapganjil);
            } else if(tahun == 4){
                cout << "\n=== \033[0;33mAnda Keluar Dari Menu MBKM\033[0m ===\n";
                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
                break;
            } else {
                cout << "\n=== \033[0;31mInput MBKM Tidak Valid! Harap masukkan angka 1-4.\033[0m ===\n";
                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
            }
        }
        
    }
};

class Beranda : private KalenderAkademik, public Lihs, private SkipdanPrestasi , private TagihanDanPembayaran,public Statistik, public MBKM{
private:
    int pilihan;

public:
    Lirs InputDataLirs;
    LirsPertukaranPelajarInbound InputDataLirsPertukaranPelajarInbound;

protected:
    void menuBeranda() {
        while (true) {
            system("cls");
            cout << "=========== Menu Beranda ===========\n";
            cout << "1. Aktivitas Mahasiswa              \n";
            cout << "2. LIRS                             \n";
            cout << "3. Kalender Akademik                \n";
            cout << "4. LIHS                             \n";
            cout << "5. SKPI dan Prestasi                \n";
            cout << "6. LIRS Pertukaran Pelajar Inbound  \n";
            cout << "7. Tagihan dan Pembayaran           \n";
            cout << "8. Statistik                        \n";
            cout << "9. MBKM                             \n";
            cout << "10. Kembali                         \n";
            cout << "====================================\n";
            cout << "Pilih menu: ";
            cin >> pilihan;

            if (pilihan == 1) {
                menuAktivitasMahasiswa();
            } else if (pilihan == 2) {
                InputDataLirs.menuLirs();
            } else if (pilihan == 3) {
                menuKalenderAkademik();
            } else if (pilihan == 4) {
                menuLish();
            } else if (pilihan == 5) {
                menuSkipdanPrestasi();
            } else if (pilihan == 6) {
                InputDataLirsPertukaranPelajarInbound.menuLirsPertukaranPelajarInbound();
            } else if (pilihan == 7) {
                menuTangihanDanPembayaran();
            } else if (pilihan == 8) {
                menuStatistik();
                system("pause > null");
            } else if (pilihan == 9) {
                menuMBKM();
            } else if (pilihan == 10) {
                cout << "\n=== \033[0;33mAnda Keluar Dari Menu Beranda\033[0m ===\n";

                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
                break;
            } else {
                cout << "\n=== \033[0;33mPilihan tidak valid!\033[0m ===\n";

                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
            }
        }
    }
};

class Jadwal {
public:
    void menuJadwal(Lirs lirs, LirsPertukaranPelajarInbound inbound) {
        system("cls");
        cout << "=================================\033[1;34m Semester Genap \033[0m=================================\n";
        cout << "=========================\033[34m Tahun Akademik 2024/2025 Genap \033[0m=========================\n\n";

        cout << "==================================================================================\n";
        cout << "                                       \033[32mSenin\033[0m                       \n";
        cout << "==================================================================================\n";
        for (int i = 0; i < lirs.TableTambah; i++) {
            if (lirs.IsiTableSemester1[i][4] == "Senin") {
                cout << "  " << lirs.IsiTableSemester1[i][0];
                cout << "    " << lirs.IsiTableSemester1[i][1] << "    " << lirs.IsiTableSemester1[i][2] << "  " << lirs.IsiTableSemester1[i][3] << "  \n";
            }
        }
        cout << "==================================================================================\n\n";

        cout << "==================================================================================\n";
        cout << "                                       \033[32mSelasa\033[0m                      \n";
        cout << "==================================================================================\n";
        for (int i = 0; i < lirs.TableTambah; i++) {
            if (lirs.IsiTableSemester1[i][4] == "Selasa") {
                cout << "  " << lirs.IsiTableSemester1[i][0];
                cout << "    " << lirs.IsiTableSemester1[i][1] << "    " << lirs.IsiTableSemester1[i][2] << "  " << lirs.IsiTableSemester1[i][3] << "  \n";
            }
        }
        cout << "==================================================================================\n\n";

        cout << "==================================================================================\n";
        cout << "                                        \033[32mRabu\033[0m                       \n";
        cout << "==================================================================================\n";
        for (int i = 0; i < lirs.TableTambah; i++) {
            if (lirs.IsiTableSemester1[i][4] == "Rabu") {
                cout << "  " << lirs.IsiTableSemester1[i][0];
                cout << "    " << lirs.IsiTableSemester1[i][1] << "    " << lirs.IsiTableSemester1[i][2] << "  " << lirs.IsiTableSemester1[i][3] << "  \n";
            }
        }
        cout << "==================================================================================\n\n";
    
        cout << "==================================================================================\n";
        cout << "                                        \033[32mKamis\033[0m                      \n";
        cout << "==================================================================================\n";
        for (int i = 0; i < inbound.TambahTamblePelajarInbound; i++) {
            if (inbound.IsiTableProgramStudi[i][4] == "Kamis") {
                cout << "  " << inbound.IsiTableProgramStudi[i][0];
                cout << "    " << inbound.IsiTableProgramStudi[i][1] << "    " << inbound.IsiTableProgramStudi[i][2] << "  " << inbound.IsiTableProgramStudi[i][3] << "  \n";
            }
        }
        cout << "==================================================================================\n\n";
    
        cout << "==================================================================================\n";
        cout << "                                        \033[32mJumat\033[0m                      \n";
        cout << "==================================================================================\n";
        for (int i = 0; i < inbound.TambahTamblePelajarInbound; i++) {
            if (inbound.IsiTableProgramStudi[i][4] == "Jumat") {
                cout << "  " << inbound.IsiTableProgramStudi[i][0];
                cout << "    " << inbound.IsiTableProgramStudi[i][1] << "    " << inbound.IsiTableProgramStudi[i][2] << "  " << inbound.IsiTableProgramStudi[i][3] << "  \n";
            }
        }
        cout << "==================================================================================\n\n";
        
        cout << "==================================================================================\n";
        cout << "                                        \033[32mSabtu\033[0m                      \n";
        cout << "==================================================================================\n";
        for (int i = 0; i < inbound.TambahTamblePelajarInbound; i++) {
            if (inbound.IsiTableProgramStudi[i][4] == "Sabtu") {
                cout << "  " << inbound.IsiTableProgramStudi[i][0];
                cout << "    " << inbound.IsiTableProgramStudi[i][1] << "    " << inbound.IsiTableProgramStudi[i][2] << "  " << inbound.IsiTableProgramStudi[i][3] << "  \n";
            }
        }
        cout << "==================================================================================\n\n";
    
        cout << "==================================================================================\n";
        cout << "                                        \033[32mMinggu\033[0m                     \n";
        cout << "==================================================================================\n\n";
        
        cout << "\nTekan Tombol Apapun Untuk Kembali: ";
        system("pause > null");
    }
};

class Absensi{
protected:
    void menuAbsensiMahasiswa() {
        system("cls");
        cout << "\n=== \033[0;33mMembuka kamera bawaan...\033[0m ===\n";
        system("start microsoft.windows.camera:");

        cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
        system("pause > null");
    }
};

class Mahasiswa :  public Absensi, public Beranda, public Jadwal, public Akun{
private:
    int pilihan;

public:
    void menuMahasiswa(){
        while (true)
        {
            system("cls");
            cout << "=========== Menu Utama ===========\n";
            cout << "1. Absensi (Buka Kamera)\n";
            cout << "2. Beranda\n";
            cout << "3. LIHS\n";
            cout << "4. Jadwal\n";
            cout << "5. Akun\n";
            cout << "6. Logout\n";
            cout << "==================================\n";
            cout << "Pilih menu: ";
            cin >> pilihan;

            if(pilihan == 1){
                menuAbsensiMahasiswa();
            } else if (pilihan == 2) {
                menuBeranda();
            } else if (pilihan == 3) {
                menuLish();
            } else if (pilihan == 4) {
                menuJadwal(InputDataLirs, InputDataLirsPertukaranPelajarInbound);
            } else if (pilihan == 5) {
                menuAkun();
            } else if (pilihan == 6) {
                cout << "\n=== \033[0;33mAnda Logout Dari Sipa\033[0m ===\n";

                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
                break;
            } else {
                cout << "\n=== \033[0;33mPilihan tidak valid!\033[0m ===\n";

                cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
                system("pause > null");
            }
        }
    }
};

int main() {
    Akun mainAkun;
    Mahasiswa mainMahasiswa;

    int pilihan;
    string user, pass;

    do {
        system("cls");
        cout << "===== Menu Utama =====\n";
        cout << "1. Daftar Akun\n";
        cout << "2. Login\n";
        cout << "3. Keluar\n";
        cout << "======================\n";
        cout << "Pilih menu : ";
        cin >> pilihan;

        if (pilihan == 1) {
            system("cls");
            cout << "Masukkan username: ";
            cin >> user;
            cout << "Masukkan password: ";
            cin >> pass;
            mainAkun.daftarAkun(user, pass);
        } else if (pilihan == 2) {
            system("cls");
            cout << "Masukkan username: ";
            cin >> user;
            cout << "Masukkan password: ";
            cin >> pass;
            if (mainAkun.login(user, pass)) {
                mainMahasiswa.menuMahasiswa();
            }
        } else if (pilihan > 3 || pilihan < 1) {
            cout << "\n=== \033[0;33mPilihan Tidak Valid\033[0m ===\n";

            cout << "\nTekan Tombol Apapun Untuk Melanjutkan : ";
            system("pause > null");
        }
        
    } while (pilihan != 3);

    system("cls");
    cout << "\n=== \033[0;33mAnda Keluar Dari Sipa\033[0m ===\n";
}