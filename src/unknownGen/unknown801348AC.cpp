#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_80134714();
void fn_80134750();
void fn_80134974();
void fn_80145C0C();
extern char lbl_8049C76C[];
extern char lbl_8049C778[];
extern void *lbl_80563C40;
extern void *lbl_80564164;
void fn_801348D4();
void *fn_8013494C();
void *fn_8013496C();
}
extern "C" {
void fn_801348AC(){
 fn_80066188((int)fn_801348D4);
}
void fn_801348D4(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563C40,(int)fn_80145C0C,(int)fn_8013496C,(int)fn_8013494C,(int)lbl_8049C778,48,(int)fn_80134750,(int)fn_80134974,0,(int)lbl_8049C76C);
}
void *fn_8013494C(){return fn_80134714();}
void *fn_8013496C(){return lbl_80564164;}
}
#pragma pop
