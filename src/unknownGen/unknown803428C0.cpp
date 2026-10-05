#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_803425BC();
void *fn_80342820();
void fn_8034286C();
void fn_8034297C();
void fn_803438F4();
extern char lbl_80455134[];
extern char lbl_80536734[];
void fn_803428E8();
void *fn_8034295C();
}
extern "C" {
void fn_803428C0(){
 fn_80066188((int)fn_803428E8);
}
void fn_803428E8(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536734,(int)fn_803438F4,(int)fn_803425BC,(int)fn_8034295C,(int)lbl_80455134,24,(int)fn_8034286C,(int)fn_8034297C,0,0);
}
void *fn_8034295C(){return fn_80342820();}
}
#pragma pop
