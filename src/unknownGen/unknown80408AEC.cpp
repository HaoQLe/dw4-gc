#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8010DF8C();
void fn_8010E2EC();
void fn_80402E28();
void *fn_8040893C();
void fn_80408988();
void fn_80408BB0();
extern char lbl_80462B1C[];
extern char lbl_804F0E74[];
extern char lbl_8055CAD8[];
void fn_80408B14();
void *fn_80408B90();
}
extern "C" {
void fn_80408AEC(){
 fn_80066188((int)fn_80408B14);
}
void fn_80408B14(){
 fn_80402E28();
 fn_80066204(0,(int)lbl_8055CAD8,(int)fn_8010E2EC,(int)fn_8010DF8C,(int)fn_80408B90,(int)lbl_80462B1C,40,(int)fn_80408988,(int)fn_80408BB0,0,(int)lbl_804F0E74);
}
void *fn_80408B90(){return fn_8040893C();}
}
#pragma pop
