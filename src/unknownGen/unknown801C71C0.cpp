#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801B623C();
void *fn_801C6F78();
void fn_801C6FB4();
void fn_801C727C();
void fn_801C8C48();
extern char lbl_804B13B4[];
extern char lbl_8056081C[8];
extern void *lbl_805652BC;
void fn_801C71E8();
void *fn_801C725C();
}
extern "C" {
void fn_801C71C0(){
 fn_80066188((int)fn_801C71E8);
}
void fn_801C71E8(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805652BC,(int)fn_801C8C48,(int)fn_801B623C,(int)fn_801C725C,(int)lbl_804B13B4,172,(int)fn_801C6FB4,(int)fn_801C727C,0,(int)lbl_8056081C);
}
void *fn_801C725C(){return fn_801C6F78();}
}
#pragma pop
