#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_8002A998();
void fn_8002A9D4();
void fn_8002AB94();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
extern char lbl_804649A8[];
extern char lbl_804649B4[];
extern void *lbl_80561808;
void fn_8002AAFC();
void *fn_8002AB74();
}
extern "C" {
void fn_8002AAD4(){
 fn_80066188((int)fn_8002AAFC);
}
void fn_8002AAFC(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561808,(int)fn_80066B08,(int)fn_800237D0,(int)fn_8002AB74,(int)lbl_804649B4,20,(int)fn_8002A9D4,(int)fn_8002AB94,0,(int)lbl_804649A8);
}
void *fn_8002AB74(){return fn_8002A998();}
}
#pragma pop
