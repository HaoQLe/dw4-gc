#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *beBkColorInfo_meta;
extern void *beBaseInfoManager_meta;
}
extern "C" {
void *fn_802F29BC(){return beBaseInfoManager_meta;}
void *beBkColor_virtual88(int p0){
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+32)=0;
 return (void *)p0;
}
void *beBkColor_virtual80(){return beBkColorInfo_meta;}
}
#pragma pop
