#include <iostream>
#include "pelajaran.h"

using namespace std;

int main() {
    string judulMatpel = "Counter-Strike ?";
    string kodeMatpel = "Gass";
    pelajaran dataPel = create_pelajaran(judulMatpel, kodeMatpel);
    tampil_pelajaran(dataPel);

    return 0;
}