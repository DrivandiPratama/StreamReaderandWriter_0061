#include <iostream>
using namespace std;

int main()
{
    try {
        cout << "Selamat Belajar di Prodi TI UMY" << endl;
        throw 0.5; //melemparkan sebuah integer maka
        cout << "Petrnytaan tidak akan dieksekusi" << endl;
    }
    catch (int a) {
        //blok ini akan dieksekusi
        cout << "Pengecualiaan akan dieksekusi" << endl;
    }
    catch (...) {
        /*jika selain integer maka block ini akan diesekusi*/
        cout << "default pengecualian dieksekusi" << endl;
    }
    return 0;
}