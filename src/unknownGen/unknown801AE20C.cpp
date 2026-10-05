#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801AE13C();
void fn_801AE178();
void fn_801AE2CC();
void fn_801B4574();
extern char lbl_804ABEE0[];
extern void *lbl_805647C0;
extern void *lbl_80564A38;
void fn_801AE234();
void *fn_801AE2A4();
void *fn_801AE2C4();
}
extern "C" {
void fn_801AE20C(){
 fn_80066188((int)fn_801AE234);
}
void fn_801AE234(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805647C0,(int)fn_801B4574,(int)fn_801AE2C4,(int)fn_801AE2A4,(int)lbl_804ABEE0,12,(int)fn_801AE178,(int)fn_801AE2CC,0,0);
}
void *fn_801AE2A4(){return fn_801AE13C();}
void *fn_801AE2C4(){return lbl_80564A38;}
}
#pragma pop
