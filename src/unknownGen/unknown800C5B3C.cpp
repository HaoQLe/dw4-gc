#include <unknownGen.h>
#include <meta/igTextureEnvironmentColorAttr.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8010012C(void *,void *,void *);
void *fn_8010018C(void *,void *);
}
extern "C" {
void igTextureEnvironmentColorAttr_virtual60(int p0,int p1){
 fn_8010012C((void *)p1,(void *)(int)reinterpret_cast<Meta::igTextureEnvironmentColorAttr *>((void *)p0)->_unitID,(void *)reinterpret_cast<Meta::igTextureEnvironmentColorAttr *>((void *)p0)->_environmentColor);
}
void igTextureEnvironmentColorAttr_virtual68(int p0,int p1){
 void *value0=fn_8010018C((void *)p1,(void *)(int)reinterpret_cast<Meta::igTextureEnvironmentColorAttr *>((void *)p0)->_unitID);
 reinterpret_cast<Meta::igTextureEnvironmentColorAttr *>((void *)p0)->_environmentColor=(unsigned int)value0;
}
void *fn_800C5BA4(int p0){
 *reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p0)+10)=(short)(int)(void *)(int)*reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p0)+16);
 return (void *)p0;
}
}
#pragma pop
