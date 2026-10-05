#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_80151B50();
void fn_80151B8C();
void fn_80151D58();
void fn_80151EF8();
extern char lbl_804A00F0[];
extern char lbl_8055FCFC[8];
extern void *lbl_80564524;
extern void *lbl_80564530;
void fn_80151CBC();
void *fn_80151D30();
void *fn_80151D50();
}
extern "C" {
void fn_80151C94(){
 fn_80066188((int)fn_80151CBC);
}
void fn_80151CBC(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564524,(int)fn_80151EF8,(int)fn_80151D50,(int)fn_80151D30,(int)lbl_804A00F0,40,(int)fn_80151B8C,(int)fn_80151D58,0,(int)lbl_8055FCFC);
}
void *fn_80151D30(){return fn_80151B50();}
void *fn_80151D50(){return lbl_80564530;}
}
#pragma pop
