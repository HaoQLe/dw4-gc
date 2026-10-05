#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_803250AC();
void *fn_803416EC();
void fn_80341738();
void fn_803418C4();
extern char lbl_80455070[];
extern char lbl_805366D8[];
void fn_80341830();
void *fn_803418A4();
}
extern "C" {
void fn_80341808(){
 fn_80066188((int)fn_80341830);
}
void fn_80341830(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_805366D8,(int)fn_80066B08,(int)fn_800237D0,(int)fn_803418A4,(int)lbl_80455070,20,(int)fn_80341738,(int)fn_803418C4,0,0);
}
void *fn_803418A4(){return fn_803416EC();}
}
#pragma pop
