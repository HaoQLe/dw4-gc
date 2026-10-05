#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_803250AC();
void *fn_80343A58();
void fn_80343AA4();
void fn_80343C78();
extern char lbl_80455244[];
extern char lbl_804E3D88[];
extern char lbl_80536778[];
void fn_80343BDC();
void *fn_80343C58();
}
extern "C" {
void fn_80343BB4(){
 fn_80066188((int)fn_80343BDC);
}
void fn_80343BDC(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536778,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80343C58,(int)lbl_80455244,32,(int)fn_80343AA4,(int)fn_80343C78,0,(int)lbl_804E3D88);
}
void *fn_80343C58(){return fn_80343A58();}
}
#pragma pop
