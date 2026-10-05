#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_80130024();
void fn_80130060();
void fn_801301DC();
void fn_80140AB8();
extern char lbl_8049BCB8[];
extern char lbl_8055F464[8];
extern void *lbl_80563AA8;
extern void *lbl_80564000;
void fn_80130140();
void *fn_801301B4();
void *fn_801301D4();
}
extern "C" {
void fn_80130118(){
 fn_80066188((int)fn_80130140);
}
void fn_80130140(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563AA8,(int)fn_80140AB8,(int)fn_801301D4,(int)fn_801301B4,(int)lbl_8049BCB8,36,(int)fn_80130060,(int)fn_801301DC,0,(int)lbl_8055F464);
}
void *fn_801301B4(){return fn_80130024();}
void *fn_801301D4(){return lbl_80564000;}
}
#pragma pop
