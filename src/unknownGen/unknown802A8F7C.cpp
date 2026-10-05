#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void AXARTServiceSounds();
void MIXUpdateSettings();
void fn_803C325C();
}
extern "C" {
void fn_802A8F7C(){
 fn_803C325C();
 AXARTServiceSounds();
 MIXUpdateSettings();
}
}
#pragma pop
