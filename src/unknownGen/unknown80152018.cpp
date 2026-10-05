#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8013496C();
void fn_80145C0C();
void fn_8015227C();
extern char lbl_804A0110[];
extern void *lbl_8056453C;
extern void *lbl_80564540;
void *fn_80152018();
void fn_80152054();
void fn_8015207C();
void *fn_801520E0();
}
extern "C" {
void *fn_80152018(){
 if(!lbl_8056453C || !(reinterpret_cast<unsigned int *>(lbl_8056453C)[0x24/4]&4)) fn_80152054();
 return lbl_8056453C;
}
void fn_80152054(){
 fn_80066188((int)fn_8015207C);
}
void fn_8015207C(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_8056453C,(int)fn_80145C0C,(int)fn_8013496C,(int)fn_801520E0,(int)lbl_804A0110,32,0,0,0,0);
}
void *fn_801520E0(){return fn_80152018();}
void *fn_80152100(){
 if(!lbl_80564540 || !(reinterpret_cast<unsigned int *>(lbl_80564540)[0x24/4]&4)) fn_8015227C();
 return lbl_80564540;
}
}
#pragma pop
