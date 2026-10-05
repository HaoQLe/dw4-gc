#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void fn_801C9440();
extern char lbl_804B1A8C[];
extern char lbl_805608A8[8];
extern void *lbl_805621F4;
extern void *lbl_805653A0;
void *fn_801C934C();
void fn_801C9388();
void fn_801C93B0();
void *fn_801C9420();
}
extern "C" {
void *fn_801C9310(){
 if(!lbl_805653A0) lbl_805653A0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805653A0;
}
void *fn_801C934C(){
 if(!lbl_805653A0 || !(reinterpret_cast<unsigned int *>(lbl_805653A0)[0x24/4]&4)) fn_801C9388();
 return lbl_805653A0;
}
void fn_801C9388(){
 fn_80066188((int)fn_801C93B0);
}
void fn_801C93B0(){
 fn_801AA6DC();
 fn_80066204(1,(int)&lbl_805653A0,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_801C9420,(int)lbl_804B1A8C,16,0,(int)fn_801C9440,0,(int)lbl_805608A8);
}
void *fn_801C9420(){return fn_801C934C();}
}
#pragma pop
