#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8010CFA4();
void *fn_8010E6DC();
void fn_80402E28();
void *fn_80407A6C();
void fn_80407AB8();
void fn_80407BD0();
extern char lbl_804629C4[];
extern char lbl_8055CA5C[];
void fn_80407B3C();
void *fn_80407BB0();
}
extern "C" {
void fn_80407B14(){
 fn_80066188((int)fn_80407B3C);
}
void fn_80407B3C(){
 fn_80402E28();
 fn_80066204(0,(int)lbl_8055CA5C,(int)fn_8010CFA4,(int)fn_8010E6DC,(int)fn_80407BB0,(int)lbl_804629C4,76,(int)fn_80407AB8,(int)fn_80407BD0,0,0);
}
void *fn_80407BB0(){return fn_80407A6C();}
}
#pragma pop
