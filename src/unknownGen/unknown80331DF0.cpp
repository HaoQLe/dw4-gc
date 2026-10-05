#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
void *fn_80331B10();
void fn_80331B5C();
void fn_80331EB4();
void fn_80333F14();
extern char lbl_80453B44[];
extern char lbl_804E1EF4[];
extern char lbl_80535F20[];
void fn_80331E18();
void *fn_80331E94();
}
extern "C" {
void fn_80331DF0(){
 fn_80066188((int)fn_80331E18);
}
void fn_80331E18(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535F20,(int)fn_80333F14,(int)fn_8032B8A4,(int)fn_80331E94,(int)lbl_80453B44,88,(int)fn_80331B5C,(int)fn_80331EB4,0,(int)lbl_804E1EF4);
}
void *fn_80331E94(){return fn_80331B10();}
}
#pragma pop
