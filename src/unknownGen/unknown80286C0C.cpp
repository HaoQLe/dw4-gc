#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800330A8();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8010E280();
void fn_80284294();
void *fn_80286A50();
void fn_80286A9C();
extern char lbl_80416C68[];
extern char lbl_804CB2B4[];
extern char lbl_80515D30[];
void fn_80286C34();
void *fn_80286CA8();
}
extern "C" {
void fn_80286C0C(){
 fn_80066188((int)fn_80286C34);
}
void fn_80286C34(){
 fn_80284294();
 fn_80066204(0,(int)lbl_80515D30,(int)fn_800330A8,(int)fn_8010E280,(int)fn_80286CA8,(int)lbl_80416C68,28,(int)fn_80286A9C,0,0,(int)lbl_804CB2B4);
}
void *fn_80286CA8(){return fn_80286A50();}
}
#pragma pop
