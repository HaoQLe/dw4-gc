#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void fn_801BBFE8();
void *fn_801BC7F4();
void fn_801BC830();
void fn_801BCA40();
extern char lbl_804AEE70[];
extern void *lbl_80564DBC;
extern void *lbl_80564DE4;
void fn_801BC9A8();
void *fn_801BCA18();
void *fn_801BCA38();
}
extern "C" {
void fn_801BC980(){
 fn_80066188((int)fn_801BC9A8);
}
void fn_801BC9A8(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564DE4,(int)fn_801BBFE8,(int)fn_801BCA38,(int)fn_801BCA18,(int)lbl_804AEE70,368,(int)fn_801BC830,(int)fn_801BCA40,0,0);
}
void *fn_801BCA18(){return fn_801BC7F4();}
void *fn_801BCA38(){return lbl_80564DBC;}
}
#pragma pop
