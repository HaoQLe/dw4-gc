#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_801308D0();
void *fn_80132364();
void fn_801323A0();
void fn_80132720();
void fn_8013B97C();
extern char lbl_8049C08C[];
extern void *lbl_80563B54;
extern void *lbl_80563B58;
void fn_801324B8();
void *fn_80132520();
}
extern "C" {
void fn_80132490(){
 fn_80066188((int)fn_801324B8);
}
void fn_801324B8(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563B54,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_80132520,(int)lbl_8049C08C,40,(int)fn_801323A0,0,0,0);
}
void *fn_80132520(){return fn_80132364();}
void *fn_80132540(){
 if(!lbl_80563B58 || !(reinterpret_cast<unsigned int *>(lbl_80563B58)[0x24/4]&4)) fn_80132720();
 return lbl_80563B58;
}
}
#pragma pop
