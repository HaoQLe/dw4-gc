#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_803250AC();
void *fn_80340150();
void fn_80340254();
extern char lbl_80454E68[];
extern char lbl_80536604[];
void fn_803401C4();
void *fn_80340234();
}
extern "C" {
void fn_8034019C(){
 fn_80066188((int)fn_803401C4);
}
void fn_803401C4(){
 fn_803250AC();
 fn_80066204(1,(int)lbl_80536604,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80340234,(int)lbl_80454E68,24,0,(int)fn_80340254,0,0);
}
void *fn_80340234(){return fn_80340150();}
}
#pragma pop
