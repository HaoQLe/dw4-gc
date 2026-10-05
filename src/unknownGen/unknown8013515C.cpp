#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void fn_80135258();
void fn_8015207C();
extern char lbl_8049C878[];
extern char lbl_8055F604[8];
extern void *lbl_80563C74;
extern void *lbl_8056453C;
void *fn_8013515C();
void fn_80135198();
void fn_801351C0();
void *fn_80135230();
void *fn_80135250();
}
extern "C" {
void *fn_8013515C(){
 if(!lbl_80563C74 || !(reinterpret_cast<unsigned int *>(lbl_80563C74)[0x24/4]&4)) fn_80135198();
 return lbl_80563C74;
}
void fn_80135198(){
 fn_80066188((int)fn_801351C0);
}
void fn_801351C0(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_80563C74,(int)fn_8015207C,(int)fn_80135250,(int)fn_80135230,(int)lbl_8049C878,44,0,(int)fn_80135258,0,(int)lbl_8055F604);
}
void *fn_80135230(){return fn_8013515C();}
void *fn_80135250(){return lbl_8056453C;}
}
#pragma pop
