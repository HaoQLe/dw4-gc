#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void fn_801AB354();
void *fn_801ABB34();
void *fn_801C157C();
void fn_801C15B8();
void fn_801C1708();
extern char lbl_804AFA10[];
extern char lbl_80560674[8];
extern void *lbl_80564F78;
void fn_801C1674();
void *fn_801C16E8();
}
extern "C" {
void fn_801C164C(){
 fn_80066188((int)fn_801C1674);
}
void fn_801C1674(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564F78,(int)fn_801AB354,(int)fn_801ABB34,(int)fn_801C16E8,(int)lbl_804AFA10,16,(int)fn_801C15B8,(int)fn_801C1708,0,(int)lbl_80560674);
}
void *fn_801C16E8(){return fn_801C157C();}
}
#pragma pop
