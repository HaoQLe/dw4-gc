#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80326F88();
void *fn_80326FD8();
void fn_80327024();
void fn_80328720();
extern char lbl_80453488[];
extern char lbl_80535D44[];
void fn_8032724C();
void *fn_803272B8();
}
extern "C" {
void fn_80327224(){
 fn_80066188((int)fn_8032724C);
}
void fn_8032724C(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D44,(int)fn_80328720,(int)fn_80326F88,(int)fn_803272B8,(int)lbl_80453488,80,(int)fn_80327024,0,0,0);
}
void *fn_803272B8(){return fn_80326FD8();}
}
#pragma pop
