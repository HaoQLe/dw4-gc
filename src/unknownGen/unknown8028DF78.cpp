#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_8028C93C();
void *fn_8028DE74();
void fn_8028DEB0();
void fn_8028E038();
extern char lbl_804CCAA8[];
extern char lbl_804CCAB8[];
extern void *lbl_8056615C;
void fn_8028DFA0();
void *fn_8028E018();
}
extern "C" {
void fn_8028DF78(){
 fn_80066188((int)fn_8028DFA0);
}
void fn_8028DFA0(){
 fn_8028C93C();
 fn_80066204(0,(int)&lbl_8056615C,(int)fn_80066B08,(int)fn_800237D0,(int)fn_8028E018,(int)lbl_804CCAB8,32,(int)fn_8028DEB0,(int)fn_8028E038,0,(int)lbl_804CCAA8);
}
void *fn_8028E018(){return fn_8028DE74();}
}
#pragma pop
