#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8013BF68();
void *fn_8013C78C();
void fn_8013C7C8();
void fn_8013C950();
void fn_80140664();
extern char lbl_8049DB84[];
extern char lbl_8055F828[8];
extern void *lbl_80563F0C;
void fn_8013C8BC();
void *fn_8013C930();
}
extern "C" {
void fn_8013C894(){
 fn_80066188((int)fn_8013C8BC);
}
void fn_8013C8BC(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563F0C,(int)fn_80140664,(int)fn_8013BF68,(int)fn_8013C930,(int)lbl_8049DB84,44,(int)fn_8013C7C8,(int)fn_8013C950,0,(int)lbl_8055F828);
}
void *fn_8013C930(){return fn_8013C78C();}
}
#pragma pop
