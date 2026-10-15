#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beWeaponInfoRam_registerNow();
extern void *beWeaponInfoRam_meta;
}
extern "C" {
void *beWeaponInfoRam_getMeta(){
 if(!beWeaponInfoRam_meta || !(reinterpret_cast<unsigned int *>(beWeaponInfoRam_meta)[0x24/4]&4)) beWeaponInfoRam_registerNow();
 return beWeaponInfoRam_meta;
}
}
#pragma pop
