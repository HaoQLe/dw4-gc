#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8013496C();
void fn_80145C0C();
void *fn_8014B4B4();
void fn_8014B4F0();
void fn_8014B70C();
extern char lbl_8049F1F0[];
extern char lbl_8049F1FC[];
extern void *lbl_80564318;
void fn_8014B674();
void *fn_8014B6EC();
}
extern "C" {
void fn_8014B64C(){
 fn_80066188((int)fn_8014B674);
}
void fn_8014B674(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564318,(int)fn_80145C0C,(int)fn_8013496C,(int)fn_8014B6EC,(int)lbl_8049F1FC,48,(int)fn_8014B4F0,(int)fn_8014B70C,0,(int)lbl_8049F1F0);
}
void *fn_8014B6EC(){return fn_8014B4B4();}
}
#pragma pop
