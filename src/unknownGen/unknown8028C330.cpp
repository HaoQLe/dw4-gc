#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
void *fn_8028C55C();
extern char lbl_804CC090[];
extern char lbl_80566098[1];
extern char lbl_80566099[1];
extern void *lbl_8056609C;
}
extern "C" {
void *fn_8028C330(){return fn_8028C55C();}
void fn_8028C350(){
 if((int)*reinterpret_cast<signed char *>((lbl_80566099+0))==0){
  *reinterpret_cast<unsigned char *>((lbl_80566098+0))=0;
  *reinterpret_cast<unsigned char *>((lbl_80566099+0))=1;
 }
 if((void *)(int)*reinterpret_cast<unsigned char *>((lbl_80566098+0))){
  return;
 }
 *reinterpret_cast<unsigned char *>((lbl_80566098+0))=1;
}
void *fn_8028C384(){
 char *data=lbl_804CC090;
 if(!lbl_8056609C) lbl_8056609C=fn_800635C8(data+0x6C,data+0x54,data+0x60,0x3);
 return lbl_8056609C;
}
}
#pragma pop
