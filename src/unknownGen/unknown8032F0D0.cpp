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
void *fn_8032EE84();
void fn_8032EED0();
void fn_8032F498();
void fn_80333F14();
extern char lbl_804539B8[];
extern char lbl_804E1D34[];
extern char lbl_804E1D38[];
extern char lbl_804E1D3C[];
extern char lbl_804E1D40[];
extern void *lbl_80535E98;
extern void *lbl_80535EA0;
void fn_8032F0F8();
void *fn_8032F16C();
void fn_8032F18C();
}
extern "C" {
void fn_8032F0D0(){
 fn_80066188((int)fn_8032F0F8);
}
void fn_8032F0F8(){
 fn_803250AC();
 fn_80066204(0,(int)&lbl_80535E98,(int)fn_80333F14,(int)fn_8032B8A4,(int)fn_8032F16C,(int)lbl_804539B8,88,(int)fn_8032EED0,(int)fn_8032F18C,0,0);
}
void *fn_8032F16C(){return fn_8032EE84();}
void fn_8032F18C(){
 void *meta=lbl_80535E98;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E1D34,0x1);
 fn_800659C0(meta,lbl_804E1D38,lbl_804E1D3C,lbl_804E1D40,field);
}
void *fn_8032F20C(void *object){
 fn_8032F498();
 return fn_8006546C(lbl_80535EA0,object);
}
void *fn_8032F24C(){
 if(!lbl_80535EA0 || !(reinterpret_cast<unsigned int *>(lbl_80535EA0)[0x24/4]&4)) fn_8032F498();
 return lbl_80535EA0;
}
}
#pragma pop
