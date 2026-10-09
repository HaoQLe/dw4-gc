#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8028A398(void *,void *);
void fn_8028A400(void *,void *);
void *fn_8028A730(void *,void *);
extern void *lbl_80534FBC;
extern void *lbl_80535124;
}
extern "C" {
void beDemoManager_virtual5C(int p0){
 fn_8028A398(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),(void *)p0);
}
void beDemoManager_virtual60(int p0){
 fn_8028A400(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),(void *)p0);
}
void beDemoManager_virtual64(int p0){
 void *value0=fn_8028A730(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),lbl_80534FBC);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+16)=value0;
 void *value1=fn_8028A730(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),lbl_80535124);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=value1;
}
}
#pragma pop
