#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *lbl_8055E7D4;
extern void *lbl_805628E0;
extern void *lbl_805628E4;
extern void *lbl_805628F0;
extern void *lbl_80562AF0;
}
extern "C" {
void *igFloatConstantAttr_virtual94(){return lbl_8055E7D4;}
void *igFloatConstantAttr_virtual98(int p0,int p1){
 lbl_8055E7D4=(void *)p1;
 return (void *)p0;
}
void *igFloatConstantAttr_virtual9C(){return lbl_80562AF0;}
void *igFloatConstantAttr_virtualA0(int p0,int p1){
 lbl_80562AF0=(void *)p1;
 return (void *)p0;
}
void *igFileAttrDefaultManager_virtual58(){return lbl_805628E0;}
void *igDitherStateAttr_virtual58(){return lbl_805628E4;}
void *igDitherStateAttr_virtual84(int p0,int p1,int p2,int p3){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=(void *)p3;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+16)=(void *)p2;
 return (void *)p0;
}
void *igDisplayListAttr_virtual58(){return lbl_805628F0;}
}
#pragma pop
