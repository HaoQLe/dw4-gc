#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802DB958();
void fn_802DB9A4();
extern char lbl_80420590[];
extern char lbl_804D2394[];
extern char lbl_80535414[];
void fn_802DBA40();
void *fn_802DBAB4();
}
extern "C" {
void fn_802DBA18(){
 fn_80066188((int)fn_802DBA40);
}
void fn_802DBA40(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535414,(int)fn_8002907C,(int)fn_80024180,(int)fn_802DBAB4,(int)lbl_80420590,20,(int)fn_802DB9A4,0,0,(int)lbl_804D2394);
}
void *fn_802DBAB4(){return fn_802DB958();}
}
#pragma pop
