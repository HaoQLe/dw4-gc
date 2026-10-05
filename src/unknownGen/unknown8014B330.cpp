#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8013496C();
void fn_80145C0C();
void *fn_8014B160();
void fn_8014B19C();
void fn_8014B3F0();
extern char lbl_8049F120[];
extern char lbl_8049F12C[];
extern void *lbl_80564300;
void fn_8014B358();
void *fn_8014B3D0();
}
extern "C" {
void fn_8014B330(){
 fn_80066188((int)fn_8014B358);
}
void fn_8014B358(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564300,(int)fn_80145C0C,(int)fn_8013496C,(int)fn_8014B3D0,(int)lbl_8049F12C,52,(int)fn_8014B19C,(int)fn_8014B3F0,0,(int)lbl_8049F120);
}
void *fn_8014B3D0(){return fn_8014B160();}
}
#pragma pop
