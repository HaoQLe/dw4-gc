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
void *fn_800C69B4(){return lbl_8055E7D4;}
void *fn_800C69BC(int p0,int p1){
 lbl_8055E7D4=(void *)p1;
 return (void *)p0;
}
void *fn_800C69C4(){return lbl_80562AF0;}
void *fn_800C69CC(int p0,int p1){
 lbl_80562AF0=(void *)p1;
 return (void *)p0;
}
void *fn_800C69D4(){return lbl_805628E0;}
void *fn_800C69DC(){return lbl_805628E4;}
void *fn_800C69E4(int p0,int p1,int p2,int p3){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=(void *)p3;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+16)=(void *)p2;
 return (void *)p0;
}
void *fn_800C69F0(){return lbl_805628F0;}
}
#pragma pop
