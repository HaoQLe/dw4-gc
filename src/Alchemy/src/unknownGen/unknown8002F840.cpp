#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_8002F77C();
void fn_8002F7B8();
void fn_8002F8F8();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
extern char lbl_80465CC8[];
extern void *lbl_80561B18;
void fn_8002F868();
void *fn_8002F8D8();
}
extern "C" {
void fn_8002F840(){
 fn_80066188((int)fn_8002F868);
}
void fn_8002F868(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561B18,(int)fn_80066B08,(int)fn_800237D0,(int)fn_8002F8D8,(int)lbl_80465CC8,12,(int)fn_8002F7B8,(int)fn_8002F8F8,0,0);
}
void *fn_8002F8D8(){return fn_8002F77C();}
}
#pragma pop
