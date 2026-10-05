#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_801AA6DC();
void *fn_801C44D8();
void fn_801C4514();
void fn_801C469C();
extern char lbl_804B05D0[];
extern char lbl_804B05DC[];
extern void *lbl_805650F4;
void fn_801C4604();
void *fn_801C467C();
}
extern "C" {
void fn_801C45DC(){
 fn_80066188((int)fn_801C4604);
}
void fn_801C4604(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805650F4,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801C467C,(int)lbl_804B05DC,36,(int)fn_801C4514,(int)fn_801C469C,0,(int)lbl_804B05D0);
}
void *fn_801C467C(){return fn_801C44D8();}
}
#pragma pop
