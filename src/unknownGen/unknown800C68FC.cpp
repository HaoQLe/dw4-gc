#include <unknownGen.h>
#include <meta/igGeometryAttr1_5.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *lbl_80562880;
extern void *lbl_80562888;
extern void *lbl_805628B0;
extern void *lbl_805628B4;
extern void *lbl_805628BC;
extern void *lbl_805628D4;
}
class UnknownGenV800C6950_0 {
public:
 virtual void s08();
 virtual void s0C();
 virtual void s10();
 virtual void s14();
 virtual void s18();
 virtual void s1C();
 virtual void s20();
 virtual void s24();
 virtual void s28();
 virtual void s2C();
 virtual void s30();
 virtual void s34();
 virtual void s38();
 virtual void s3C();
 virtual void s40();
 virtual void s44();
 virtual void s48();
 virtual void s4C();
 virtual void s50();
 virtual void s54();
 virtual void s58();
 virtual void s5C();
 virtual void s60();
 virtual void s64();
 virtual void s68();
 virtual void s6C();
};
extern "C" {
void *igGeometryAttr2_virtual88(int p0,int p1){
 void *value0;
 void *value1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+20);
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0);
 if(!value0){
  return (void *)p0;
 }
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+1);
 return value1;
}
void igGeometryAttr2_virtual68(){}
void *igGeometryAttr1_5_virtual58(){return lbl_80562880;}
void *igGeometryAttr1_5_virtualAC(int p0,int p1){
 void *value0;
 void *value1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+48);
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0);
 if(!value0){
  return (void *)p0;
 }
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+1);
 return value1;
}
void igGeometryAttr1_5_virtualA4(int p0){
 reinterpret_cast<UnknownGenV800C6950_0 *>(reinterpret_cast<Meta::igGeometryAttr1_5 *>((void *)p0)->_stripLengths)->s6C();
}
void *fn_800C6980(){return lbl_80562888;}
void *igGenericAttrDefaultManager_virtual58(){return lbl_805628B0;}
void *igFogStateAttr_virtual58(){return lbl_805628B4;}
void *igFogAttr_virtual58(){return lbl_805628BC;}
void *igFloatConstantAttr_virtual58(){return lbl_805628D4;}
}
#pragma pop
