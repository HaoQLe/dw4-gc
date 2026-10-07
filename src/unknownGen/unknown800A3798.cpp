#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *abort();
extern void *lbl_8055DE40;
extern void *lbl_8055DE44;
}
extern "C" {
void fn_800A3798(){
 reinterpret_cast<void (*)()>(lbl_8055DE44)();
}
void fn_800A37C0(){
 reinterpret_cast<void (*)()>(lbl_8055DE40)();
}
void fn_800A37E8(){
 reinterpret_cast<void (*)()>(lbl_8055DE40)();
}
void *fn_800A3810(){return abort();}
}
#pragma pop
