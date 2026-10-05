#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_800248F0();
void fn_8002492C();
void fn_80024AB4();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
extern char lbl_80463578[];
extern char lbl_80463584[];
extern void *lbl_80561578;
void fn_80024A1C();
void *fn_80024A94();
}
extern "C" {
void fn_800249F4(){
 fn_80066188((int)fn_80024A1C);
}
void fn_80024A1C(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561578,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80024A94,(int)lbl_80463584,24,(int)fn_8002492C,(int)fn_80024AB4,0,(int)lbl_80463578);
}
void *fn_80024A94(){return fn_800248F0();}
}
#pragma pop
