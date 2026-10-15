#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beCountry_registerNow();
extern void *beCountry_meta;
}
extern "C" {
void *beCountry_getMeta(){
 if(!beCountry_meta || !(reinterpret_cast<unsigned int *>(beCountry_meta)[0x24/4]&4)) beCountry_registerNow();
 return beCountry_meta;
}
}
#pragma pop
