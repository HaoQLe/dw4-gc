#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802B381C();
void *fn_802B810C();
void fn_802B8158();
void fn_802B8374();
void fn_802E3908();
extern char lbl_8041D600[];
extern char lbl_804CF460[];
extern char lbl_80534728[];
void fn_802B82D8();
void *fn_802B8354();
}
extern "C" {
void fn_802B82B0(){
 fn_80066188((int)fn_802B82D8);
}
void fn_802B82D8(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534728,(int)fn_802E3908,(int)fn_802B381C,(int)fn_802B8354,(int)lbl_8041D600,36,(int)fn_802B8158,(int)fn_802B8374,0,(int)lbl_804CF460);
}
void *fn_802B8354(){return fn_802B810C();}
}
#pragma pop
