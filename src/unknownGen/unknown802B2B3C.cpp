#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beWeaponInfo_arkRegister();
extern void *beWeaponInfo_meta;
}
extern "C" {
void *beWeaponInfo_getMeta(){
 if(!beWeaponInfo_meta || !(reinterpret_cast<unsigned int *>(beWeaponInfo_meta)[0x24/4]&4)) beWeaponInfo_arkRegister();
 return beWeaponInfo_meta;
}
}
#pragma pop
