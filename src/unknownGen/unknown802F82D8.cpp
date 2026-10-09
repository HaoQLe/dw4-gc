#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8028A398(void *,void *);
void fn_8028A400(void *,void *);
void *fn_8028A730(void *,void *);
extern void *lbl_805346A8;
extern void *lbl_80534FBC;
extern void *lbl_8055C788;
}
extern "C" {
void beFileListInfoManager_virtual5C(int p0){
 fn_8028A398(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),(void *)p0);
}
void beFileListInfoManager_virtual60(int p0){
 fn_8028A400(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),(void *)p0);
}
void beFileListInfoManager_virtual64(int p0){
 void *value0=fn_8028A730(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),lbl_805346A8);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+16)=value0;
 void *value1=fn_8028A730(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),lbl_80534FBC);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=value1;
 void *value2=fn_8028A730(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),lbl_8055C788);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=value2;
}
}
#pragma pop
