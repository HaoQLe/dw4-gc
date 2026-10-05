#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CE2F8();
void fn_800D37D0();
void *fn_800D4F8C();
void fn_800D4FC8();
void fn_800D5130();
extern char lbl_8048A438[];
extern void *lbl_80563004;
extern void *lbl_80563084;
void fn_800D5098();
void *fn_800D5108();
void *fn_800D5128();
}
extern "C" {
void fn_800D5070(){
 fn_80066188((int)fn_800D5098);
}
void fn_800D5098(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80563084,(int)fn_800D37D0,(int)fn_800D5128,(int)fn_800D5108,(int)lbl_8048A438,28,(int)fn_800D4FC8,(int)fn_800D5130,0,0);
}
void *fn_800D5108(){return fn_800D4F8C();}
void *fn_800D5128(){return lbl_80563004;}
}
#pragma pop
