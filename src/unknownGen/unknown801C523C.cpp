#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801AD7BC();
void fn_801B09E4();
void *fn_801C50F4();
void fn_801C5130();
void fn_801C52FC();
extern char lbl_804B0C18[];
extern char lbl_804B0C28[];
extern void *lbl_805651A8;
void fn_801C5264();
void *fn_801C52DC();
}
extern "C" {
void fn_801C523C(){
 fn_80066188((int)fn_801C5264);
}
void fn_801C5264(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805651A8,(int)fn_801B09E4,(int)fn_801AD7BC,(int)fn_801C52DC,(int)lbl_804B0C28,44,(int)fn_801C5130,(int)fn_801C52FC,0,(int)lbl_804B0C18);
}
void *fn_801C52DC(){return fn_801C50F4();}
}
#pragma pop
