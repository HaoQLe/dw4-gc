#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8013B434();
void fn_8013B470();
void fn_8013B688();
void fn_80146870();
extern char lbl_8049D9EC[];
extern char lbl_8049D9FC[];
extern void *lbl_80563EB8;
extern void *lbl_80564198;
void fn_8013B5E8();
void *fn_8013B660();
void *fn_8013B680();
}
extern "C" {
void fn_8013B5C0(){
 fn_80066188((int)fn_8013B5E8);
}
void fn_8013B5E8(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563EB8,(int)fn_80146870,(int)fn_8013B680,(int)fn_8013B660,(int)lbl_8049D9FC,48,(int)fn_8013B470,(int)fn_8013B688,0,(int)lbl_8049D9EC);
}
void *fn_8013B660(){return fn_8013B434();}
void *fn_8013B680(){return lbl_80564198;}
}
#pragma pop
