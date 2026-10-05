#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_80027078();
void fn_800270B4();
void fn_80027238();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
extern char lbl_80463E80[];
extern char lbl_8055D148[8];
extern void *lbl_80561674;
void fn_800271A4();
void *fn_80027218();
}
extern "C" {
void fn_8002717C(){
 fn_80066188((int)fn_800271A4);
}
void fn_800271A4(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561674,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80027218,(int)lbl_80463E80,20,(int)fn_800270B4,(int)fn_80027238,0,(int)lbl_8055D148);
}
void *fn_80027218(){return fn_80027078();}
}
#pragma pop
