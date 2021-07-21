#include <iostream>
#include <fstream>
#include "qrcode.hpp"
int main(){
    QRCode::QRCode qrcode;
    auto qrcodeBytes = new uint8_t[QRCode::qrcode_getBufferSize(3)];
    QRCode::qrcode_initText(&qrcode, qrcodeBytes, 3, ECC_LOW, "HELLO WORLD");
    auto r = QRCode::tosvgstring(qrcode,1);
    std::ofstream file("./result.html");
    file << r;
}
