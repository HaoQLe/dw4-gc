#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void *fn_800B1774();
void fn_800B17B0();
void fn_800B1950();
extern char lbl_80478AF8[];
extern char lbl_80478B04[];
extern void *lbl_80562658;
void fn_800B18B8();
void *fn_800B1930();
}
extern "C" {
void fn_800B1890(){
 fn_80066188((int)fn_800B18B8);
}
void fn_800B18B8(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562658,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B1930,(int)lbl_80478B04,68,(int)fn_800B17B0,(int)fn_800B1950,0,(int)lbl_80478AF8);
}
void *fn_800B1930(){return fn_800B1774();}
}
#pragma pop
