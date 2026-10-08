#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void GXSetTevSwapModeTable(void *,void *,void *,void *,void *);
extern char lbl_80490AC4[];
extern char lbl_80490AD4[];
}
extern "C" {
void fn_800FC984(int p0){
 void *value0;
 value0=(void *)0;
 do {
  GXSetTevSwapModeTable((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(lbl_80490AC4)+((int)value0<<2)),(void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(lbl_80490AD4)+(*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)(int)(p0+(int)value0))+1620)<<2)),(void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(lbl_80490AD4)+(*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)(int)(p0+(int)value0))+1624)<<2)),(void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(lbl_80490AD4)+(*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)(int)(p0+(int)value0))+1628)<<2)),(void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(lbl_80490AD4)+(*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)(int)(p0+(int)value0))+1632)<<2)));
  value0=(reinterpret_cast<char *>(value0)+1);
 } while((int)(int)value0<4);
}
}
#pragma pop
