#include <iostream>
#include <rtl-sdr.h>

int main() {
    int device_count = rtlsdr_get_device_count();
    if (device_count == 0) {
        std::cerr << "No se encontraron dispositivos RTL-SDR." << std::endl;
        return -1;
    }

    for (int i = 0; i < device_count; ++i) {
        char vendor[256], product[256], serial[256];
        rtlsdr_get_device_usb_strings(i, vendor, product, serial);
        std::cout << "Dispositivo " << i << ": " << vendor << " " << product << " (Serial: " << serial << ")" << std::endl;
    }

    return 0;
}
