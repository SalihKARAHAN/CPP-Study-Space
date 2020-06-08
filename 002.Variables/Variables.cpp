#include <iostream> // input output stream;
#include <iomanip>

using namespace std; // use for cout and cin keywords;

const int EXIT_VALUE = 0;

int main(int argc, char const *argv[])
{
    cout << setw(10) << "| BYTE |" << endl;
    cout << setw(10) << sizeof(3) << " byte" << endl;
    cout << setw(10) << "4 Byte" << endl;

    // TODO@salih => Burada tüm tiplerin max min ve size bilgilerini ekrana bastıracak bir program çıktısı vermek istiyorum.
    return EXIT_VALUE;
}
