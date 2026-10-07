#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80058C14(void *);
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_80463100[];
extern void *lbl_80561FAC;
extern char lbl_8056238B[1];
}
extern "C" {
void *fn_80039B88(){
 char *data=lbl_80463100;
 if(!lbl_80561FAC) lbl_80561FAC=fn_800635C8(data+0x4A88,data+0x5154,data+0x5164,0x4);
 return lbl_80561FAC;
}
void fn_80039BD4(int p0,int p1,int p2,int p3,int p4,int p5){
 *reinterpret_cast<unsigned char *>((lbl_8056238B+0))=(unsigned char)(int)(reinterpret_cast<char *>((void *)(int)*reinterpret_cast<unsigned char *>((lbl_8056238B+0)))+1);
 fn_80058C14((void *)p0);
}
}
#pragma pop
