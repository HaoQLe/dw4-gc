#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801C0E28();
void *fn_801C3CBC();
void fn_801C3CF8();
void fn_801C40C8();
void fn_801C42B8();
void fn_801C49BC();
extern char lbl_804B046C[];
extern char lbl_804B048C[];
extern void *lbl_805650BC;
void fn_801C402C();
void *fn_801C40A8();
}
extern "C" {
void fn_801C4004(){
 fn_80066188((int)fn_801C402C);
}
void fn_801C402C(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805650BC,(int)fn_801C49BC,(int)fn_801C0E28,(int)fn_801C40A8,(int)lbl_804B048C,520,(int)fn_801C3CF8,(int)fn_801C40C8,(int)fn_801C42B8,(int)lbl_804B046C);
}
void *fn_801C40A8(){return fn_801C3CBC();}
}
#pragma pop
