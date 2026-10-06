#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
void *fn_8032F24C();
void fn_8032F298();
void fn_8032F910();
void fn_80333F14();
extern char lbl_804539DC[];
extern char lbl_804E1D44[];
extern char lbl_804E1D48[];
extern char lbl_804E1D4C[];
extern char lbl_804E1D50[];
extern void *lbl_80535EA0;
extern void *lbl_80535EA8;
void fn_8032F4C0();
void *fn_8032F534();
void fn_8032F554();
}
extern "C" {
void fn_8032F498(){
 fn_80066188((int)fn_8032F4C0);
}
void fn_8032F4C0(){
 fn_803250AC();
 fn_80066204(0,(int)&lbl_80535EA0,(int)fn_80333F14,(int)fn_8032B8A4,(int)fn_8032F534,(int)lbl_804539DC,88,(int)fn_8032F298,(int)fn_8032F554,0,0);
}
void *fn_8032F534(){return fn_8032F24C();}
void fn_8032F554(){
 void *meta=lbl_80535EA0;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E1D44,0x1);
 fn_800659C0(meta,lbl_804E1D48,lbl_804E1D4C,lbl_804E1D50,field);
}
void *fn_8032F5D4(void *object){
 fn_8032F910();
 return fn_8006546C(lbl_80535EA8,object);
}
void *fn_8032F614(){
 if(!lbl_80535EA8 || !(reinterpret_cast<unsigned int *>(lbl_80535EA8)[0x24/4]&4)) fn_8032F910();
 return lbl_80535EA8;
}
}
#pragma pop
