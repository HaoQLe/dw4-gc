#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8028A730(void *,void *);
void fn_802F24B0(void *);
extern void *lbl_80534AAC;
extern void *lbl_805361E8;
extern void *lbl_805367F0;
extern void *lbl_8055C788;
}
extern "C" {
void *fn_8034C2E0(){return lbl_805361E8;}
void fn_8034C2F0(int p0){
 fn_802F24B0((void *)p0);
 void *value0=fn_8028A730(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),lbl_805367F0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+52)=value0;
 void *value1=fn_8028A730(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),lbl_80534AAC);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+48)=value1;
 void *value2=fn_8028A730(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),lbl_8055C788);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+44)=value2;
}
}
#pragma pop
