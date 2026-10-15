#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManagerList_registerNow();
extern void *beBaseInfoManagerList_meta;
}
extern "C" {
void *beBaseInfoManagerList_getMeta(){
 if(!beBaseInfoManagerList_meta || !(reinterpret_cast<unsigned int *>(beBaseInfoManagerList_meta)[0x24/4]&4)) beBaseInfoManagerList_registerNow();
 return beBaseInfoManagerList_meta;
}
}
#pragma pop
