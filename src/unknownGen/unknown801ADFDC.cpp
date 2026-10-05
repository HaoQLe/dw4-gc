#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801ADF0C();
void fn_801ADF48();
void fn_801AE09C();
void fn_801B4450();
extern char lbl_804ABED0[];
extern void *lbl_805647B8;
extern void *lbl_80564A34;
void fn_801AE004();
void *fn_801AE074();
void *fn_801AE094();
}
extern "C" {
void fn_801ADFDC(){
 fn_80066188((int)fn_801AE004);
}
void fn_801AE004(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805647B8,(int)fn_801B4450,(int)fn_801AE094,(int)fn_801AE074,(int)lbl_804ABED0,12,(int)fn_801ADF48,(int)fn_801AE09C,0,0);
}
void *fn_801AE074(){return fn_801ADF0C();}
void *fn_801AE094(){return lbl_80564A34;}
}
#pragma pop
