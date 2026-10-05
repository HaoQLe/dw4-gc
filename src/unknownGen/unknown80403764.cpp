#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8010CFA4();
void *fn_8010E6DC();
void fn_80402E28();
void *fn_804035A0();
void fn_804035EC();
void fn_80403828();
extern char lbl_80461D4C[];
extern char lbl_804EFF60[];
extern char lbl_8055C744[];
void fn_8040378C();
void *fn_80403808();
}
extern "C" {
void fn_80403764(){
 fn_80066188((int)fn_8040378C);
}
void fn_8040378C(){
 fn_80402E28();
 fn_80066204(0,(int)lbl_8055C744,(int)fn_8010CFA4,(int)fn_8010E6DC,(int)fn_80403808,(int)lbl_80461D4C,60,(int)fn_804035EC,(int)fn_80403828,0,(int)lbl_804EFF60);
}
void *fn_80403808(){return fn_804035A0();}
}
#pragma pop
