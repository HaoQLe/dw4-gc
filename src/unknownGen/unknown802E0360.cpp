#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beCountry_getMeta();
void beCountry_vtableRead();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beCopyTransform_arkRegister();
void igObject_register();
extern char beCountry_className[];
extern char beCountry_meta[];
extern void *beCopyTransform_meta;
void beCountry_register();
void *beCountry_getMetaCall();
}
extern "C" {
void *beCopyTransform_getMeta(){
 if(!beCopyTransform_meta || !(reinterpret_cast<unsigned int *>(beCopyTransform_meta)[0x24/4]&4)) beCopyTransform_arkRegister();
 return beCopyTransform_meta;
}
}
#pragma pop
