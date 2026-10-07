#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *lbl_80536728;
extern void *lbl_80536730;
extern void *lbl_80536734;
extern void *lbl_8053673C;
extern void *lbl_80536744;
extern void *lbl_80536748;
extern void *lbl_8053674C;
extern void *lbl_80536750;
}
extern "C" {
void *fn_803B17B0(int p0,int p1,int p2){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+12)=(void *)p1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=(void *)p2;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+8)=(void *)9;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+16)=0;
 return (void *)p0;
}
void *fn_803B17CC(){return lbl_80536728;}
void *fn_803B17DC(){return lbl_80536730;}
void *fn_803B17EC(){return lbl_80536734;}
void *fn_803B17FC(){return lbl_8053673C;}
void *fn_803B180C(){return lbl_80536744;}
void *fn_803B181C(){return lbl_80536748;}
void *fn_803B182C(){return lbl_8053674C;}
void *fn_803B183C(){return lbl_80536750;}
}
#pragma pop
