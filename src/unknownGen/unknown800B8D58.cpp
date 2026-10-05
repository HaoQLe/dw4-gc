#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void *fn_800B8C04();
void fn_800B8C40();
void fn_800B8E18();
extern char lbl_80479A18[];
extern char lbl_80479A28[];
extern void *lbl_80562948;
void fn_800B8D80();
void *fn_800B8DF8();
}
extern "C" {
void fn_800B8D58(){
 fn_80066188((int)fn_800B8D80);
}
void fn_800B8D80(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562948,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B8DF8,(int)lbl_80479A28,52,(int)fn_800B8C40,(int)fn_800B8E18,0,(int)lbl_80479A18);
}
void *fn_800B8DF8(){return fn_800B8C04();}
}
#pragma pop
