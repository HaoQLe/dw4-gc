#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800284EC();
void fn_8002EABC();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8028C93C();
void *fn_8028CDAC();
void fn_8028CDE8();
void fn_8028CF9C();
extern char lbl_804CC7CC[];
extern char lbl_80561338[8];
extern void *lbl_805660DC;
void fn_8028CF08();
void *fn_8028CF7C();
}
extern "C" {
void fn_8028CEE0(){
 fn_80066188((int)fn_8028CF08);
}
void fn_8028CF08(){
 fn_8028C93C();
 fn_80066204(0,(int)&lbl_805660DC,(int)fn_8002EABC,(int)fn_800284EC,(int)fn_8028CF7C,(int)lbl_804CC7CC,24,(int)fn_8028CDE8,(int)fn_8028CF9C,0,(int)lbl_80561338);
}
void *fn_8028CF7C(){return fn_8028CDAC();}
}
#pragma pop
