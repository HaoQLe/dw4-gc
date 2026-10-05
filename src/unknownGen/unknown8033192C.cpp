#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void fn_8032B8A4();
void *fn_80331570();
void fn_803315BC();
void fn_803319F0();
void fn_80333F14();
extern char lbl_80453B08[];
extern char lbl_804E1E84[];
extern char lbl_80535F04[];
void fn_80331954();
void *fn_803319D0();
}
extern "C" {
void fn_8033192C(){
 fn_80066188((int)fn_80331954);
}
void fn_80331954(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535F04,(int)fn_80333F14,(int)fn_8032B8A4,(int)fn_803319D0,(int)lbl_80453B08,108,(int)fn_803315BC,(int)fn_803319F0,0,(int)lbl_804E1E84);
}
void *fn_803319D0(){return fn_80331570();}
}
#pragma pop
