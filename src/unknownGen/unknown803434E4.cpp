#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void fn_803425BC();
void *fn_80343498();
void fn_8034359C();
void fn_803438F4();
extern char lbl_804551E0[];
extern char lbl_8053675C[];
void fn_8034350C();
void *fn_8034357C();
}
extern "C" {
void fn_803434E4(){
 fn_80066188((int)fn_8034350C);
}
void fn_8034350C(){
 fn_803250AC();
 fn_80066204(1,(int)lbl_8053675C,(int)fn_803438F4,(int)fn_803425BC,(int)fn_8034357C,(int)lbl_804551E0,24,0,(int)fn_8034359C,0,0);
}
void *fn_8034357C(){return fn_80343498();}
}
#pragma pop
