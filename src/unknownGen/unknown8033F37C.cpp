#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_803250AC();
void *fn_8033F260();
void fn_8033F2AC();
void fn_8033F440();
extern char lbl_80454CE0[];
extern char lbl_804E36BC[];
extern char lbl_80536560[];
void fn_8033F3A4();
void *fn_8033F420();
}
extern "C" {
void fn_8033F37C(){
 fn_80066188((int)fn_8033F3A4);
}
void fn_8033F3A4(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536560,(int)fn_80066B08,(int)fn_800237D0,(int)fn_8033F420,(int)lbl_80454CE0,64,(int)fn_8033F2AC,(int)fn_8033F440,0,(int)lbl_804E36BC);
}
void *fn_8033F420(){return fn_8033F260();}
}
#pragma pop
