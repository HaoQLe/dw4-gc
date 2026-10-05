#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void fn_801C93B0();
void *fn_801CBA14();
void fn_801CBA50();
void fn_801CBCBC();
void *fn_801CBE9C();
extern char lbl_804B235C[];
extern char lbl_804B236C[];
extern void *lbl_805653A0;
extern void *lbl_805654B4;
void fn_801CBC18();
void *fn_801CBC94();
void *fn_801CBCB4();
}
extern "C" {
void fn_801CBBF0(){
 fn_80066188((int)fn_801CBC18);
}
void fn_801CBC18(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805654B4,(int)fn_801C93B0,(int)fn_801CBCB4,(int)fn_801CBC94,(int)lbl_804B236C,96,(int)fn_801CBA50,(int)fn_801CBCBC,(int)fn_801CBE9C,(int)lbl_804B235C);
}
void *fn_801CBC94(){return fn_801CBA14();}
void *fn_801CBCB4(){return lbl_805653A0;}
}
#pragma pop
