#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
void *fn_8032D81C();
void fn_8032D868();
void fn_8032DC28();
void fn_80333F14();
extern char lbl_804538B0[];
extern char lbl_804E1C10[];
extern char lbl_80535E44[];
void fn_8032DB8C();
void *fn_8032DC08();
}
extern "C" {
void fn_8032DB64(){
 fn_80066188((int)fn_8032DB8C);
}
void fn_8032DB8C(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535E44,(int)fn_80333F14,(int)fn_8032B8A4,(int)fn_8032DC08,(int)lbl_804538B0,108,(int)fn_8032D868,(int)fn_8032DC28,0,(int)lbl_804E1C10);
}
void *fn_8032DC08(){return fn_8032D81C();}
}
#pragma pop
