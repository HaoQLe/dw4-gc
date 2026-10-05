#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_803425BC();
void *fn_8034268C();
void fn_803426D8();
void fn_803438F4();
extern char lbl_80455120[];
extern char lbl_80536730[];
void fn_80342754();
void *fn_803427C0();
}
extern "C" {
void fn_8034272C(){
 fn_80066188((int)fn_80342754);
}
void fn_80342754(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536730,(int)fn_803438F4,(int)fn_803425BC,(int)fn_803427C0,(int)lbl_80455120,20,(int)fn_803426D8,0,0,0);
}
void *fn_803427C0(){return fn_8034268C();}
}
#pragma pop
