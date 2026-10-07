#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *lbl_80562728;
extern void *lbl_8056276C;
extern void *lbl_80562774;
extern void *lbl_80562780;
extern void *lbl_80562788;
}
extern "C" {
void *fn_800C66B4(int p0,int p1,int p2){
 void *value0;
 void *value1;
 void *value2;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12))+16))+(p2<<2)))+16);
 if((unsigned int)(int)value0==(unsigned int)*reinterpret_cast<int *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24))+16))+(p1<<2))){
  return (void *)p0;
 }
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+40)=1;
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24);
 value2=*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+16);
 *reinterpret_cast<int *>(reinterpret_cast<char *>(value2)+(p1<<2))=(int)(int)value0;
 return value2;
}
void *fn_800C66F8(){return lbl_80562728;}
void *fn_800C6700(){return lbl_8056276C;}
void *fn_800C6708(){return lbl_80562774;}
void *fn_800C6710(){return lbl_80562780;}
void fn_800C6718(void *object,unsigned char value){*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+12)=value;}
void *fn_800C6720(){return lbl_80562788;}
}
#pragma pop
