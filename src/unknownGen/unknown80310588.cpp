#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80305ED0(void *,void *,void *,void *,void *);
extern char lbl_80426AB4[];
extern char lbl_80426AD8[];
}
extern "C" {
void fn_80310588(int p0,int p1){
 if(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+8)){
  if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20)!=-1){
   fn_80305ED0(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+16))+20),lbl_80426AB4,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20),lbl_80426AD8);
   return;
  } else {
   return;
  }
 }
}
}
#pragma pop
