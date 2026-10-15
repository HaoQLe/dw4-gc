#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beBaseInfoRamTimer_arkRegister();
extern void *beBaseInfoRamTimer_meta;
}
extern "C" {
void *beBaseInfoRamTimer_create(void *object){
 beBaseInfoRamTimer_arkRegister();
 return meta_createInstance(beBaseInfoRamTimer_meta,object);
}
void *beBaseInfoRamTimer_getMeta(){
 if(!beBaseInfoRamTimer_meta || !(reinterpret_cast<unsigned int *>(beBaseInfoRamTimer_meta)[0x24/4]&4)) beBaseInfoRamTimer_arkRegister();
 return beBaseInfoRamTimer_meta;
}
}
#pragma pop
