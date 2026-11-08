// beNDMWGameRam: Out-of-line copies of setValueAt<unsigned char> and a byte list's element address (0x803785D0..0x8037860C), emitted after the message handler.
#include "beNDMWGameRam.h"

extern "C" {
void fn_803785D0(igDataList *list, int index, const unsigned char &value) { setValueAt(list, index, value); }
unsigned char *fn_80378600(igDataList *list, int index) { return static_cast<unsigned char *>(list->_data) + index; }
}
