#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8029CDEC(void *,void *,void *,void *);
void *fn_8029CE08(void *,void *,void *,void *);
void *fn_8029CE18(void *,void *,void *);
void *fn_8029CE3C(void *,void *,void *);
}
extern "C" {
int fn_80294120(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+4);}
void fn_80294128(int p0){
 fn_8029CE3C(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),(reinterpret_cast<char *>((void *)p0)+172),(reinterpret_cast<char *>((void *)p0)+176));
 fn_8029CE08(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),(void *)(int)*reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p0)+166),(void *)(int)*reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p0)+168),(void *)(int)*reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p0)+170));
}
void fn_80294174(int p0){
 fn_8029CE18(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),(reinterpret_cast<char *>((void *)p0)+172),(reinterpret_cast<char *>((void *)p0)+176));
 fn_8029CDEC(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),(reinterpret_cast<char *>((void *)p0)+166),(reinterpret_cast<char *>((void *)p0)+168),(reinterpret_cast<char *>((void *)p0)+170));
}
}
#pragma pop
