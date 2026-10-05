#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8013BF68();
void *fn_8013CC7C();
void fn_8013CCB8();
void fn_8013CE40();
void fn_80140664();
extern char lbl_8049DBD0[];
extern char lbl_8055F838[8];
extern void *lbl_80563F1C;
void fn_8013CDAC();
void *fn_8013CE20();
}
extern "C" {
void fn_8013CD84(){
 fn_80066188((int)fn_8013CDAC);
}
void fn_8013CDAC(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563F1C,(int)fn_80140664,(int)fn_8013BF68,(int)fn_8013CE20,(int)lbl_8049DBD0,44,(int)fn_8013CCB8,(int)fn_8013CE40,0,(int)lbl_8055F838);
}
void *fn_8013CE20(){return fn_8013CC7C();}
}
#pragma pop
