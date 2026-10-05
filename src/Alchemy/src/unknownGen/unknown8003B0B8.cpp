#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void fn_80023C68();
void *fn_80023E20();
void fn_8003AFC0();
void fn_8003B15C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
extern char lbl_804686AC[];
extern char lbl_8055D718[8];
extern void *lbl_80561504;
extern void *lbl_80562074;
void fn_8003B0E0();
void *fn_8003B154();
}
extern "C" {
void fn_8003B0B8(){
 fn_80066188((int)fn_8003B0E0);
}
void fn_8003B0E0(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80562074,(int)fn_80023C68,(int)fn_8003B154,(int)fn_80023E20,(int)lbl_804686AC,904,(int)fn_8003AFC0,(int)fn_8003B15C,0,(int)lbl_8055D718);
}
void *fn_8003B154(){return lbl_80561504;}
}
#pragma pop
