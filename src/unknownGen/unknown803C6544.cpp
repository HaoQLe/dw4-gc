#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803C6654(int,int,void *);
extern char lbl_8045F4F4[];
}
extern "C" {
void *fn_803C6544(int p0){
 void *value0;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+4);
 switch((int)(int)value0){
 case 17:
 case 49:
 case 65:
 case 81:
 case 97:
 case 113:
 case 241:
 case 273:
 case 4097:
  return (void *)0;
 case 33:
 case 257:
  return (void *)1;
 default:
  fn_803C6654(0,0,lbl_8045F4F4);
  return (void *)0;
 }
}
}
#pragma pop
