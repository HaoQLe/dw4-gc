#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801B8D70();
void *fn_801B9FB8();
void fn_801B9FF4();
void fn_801BA518();
void fn_801C03BC();
extern char lbl_804AE9B4[];
extern char lbl_804AE9D0[];
extern void *lbl_80564D20;
void fn_801BA480();
void *fn_801BA4F8();
}
extern "C" {
void fn_801BA458(){
 fn_80066188((int)fn_801BA480);
}
void fn_801BA480(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564D20,(int)fn_801C03BC,(int)fn_801B8D70,(int)fn_801BA4F8,(int)lbl_804AE9D0,80,(int)fn_801B9FF4,(int)fn_801BA518,0,(int)lbl_804AE9B4);
}
void *fn_801BA4F8(){return fn_801B9FB8();}
}
#pragma pop
