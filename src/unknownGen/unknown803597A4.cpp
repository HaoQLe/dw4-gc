#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80362614(void *,void *,int);
void fn_803627F4(void *,void *);
}
extern "C" {
void fn_803597A4(int p0,int p1){
 if((int)p1!=-1){
  switch((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+60)){
  case 0:
   fn_80362614(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28),(void *)(int)(((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+48)<<16)|0x2100),0);
   break;
  case 1:
   fn_80362614(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28),(void *)(int)(((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+48)<<16)|0x2101),0);
   break;
  }
 } else {
  fn_803627F4(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28),(void *)(int)(((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+48)<<16)|0x202E));
  switch((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+60)){
  case 0:
   fn_80362614(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28),(void *)(int)(((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+48)<<16)|0x2200),0);
   break;
  case 1:
   fn_80362614(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28),(void *)(int)(((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+48)<<16)|0x2201),0);
  }
 }
}
}
#pragma pop
