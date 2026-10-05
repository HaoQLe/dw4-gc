#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800284EC();
void *fn_8002B72C();
void fn_8002B768();
void fn_8002BBB0();
void fn_8002EABC();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
extern char lbl_80464B1C[];
extern void *lbl_80561858;
void fn_8002BB20();
void *fn_8002BB90();
}
extern "C" {
void fn_8002BAF8(){
 fn_80066188((int)fn_8002BB20);
}
void fn_8002BB20(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561858,(int)fn_8002EABC,(int)fn_800284EC,(int)fn_8002BB90,(int)lbl_80464B1C,84,(int)fn_8002B768,(int)fn_8002BBB0,0,0);
}
void *fn_8002BB90(){return fn_8002B72C();}
}
#pragma pop
